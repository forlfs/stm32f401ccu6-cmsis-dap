#include "device.h"
#include <stdbool.h>
#include "rl_usb.h"
#include "usbd_customhid.h"

extern USBD_HandleTypeDef hUsbDeviceFS;

void USBD_HID_GetReportTrigger(int x, int y, void *report, int len)
{
  USBD_CUSTOM_HID_SendReport(&hUsbDeviceFS, report, len);
}

void USBD_OutEvent()
{
  USBD_CUSTOM_HID_HandleTypeDef *hhid = (USBD_CUSTOM_HID_HandleTypeDef *)hUsbDeviceFS.pClassData;
  bool USBD_HID0_SetReport(uint8_t rtype, uint8_t req, uint8_t rid, const uint8_t *buf, int32_t len);
  USBD_HID0_SetReport(HID_REPORT_OUTPUT, 0, 0, hhid->Report_buf, USBD_CUSTOMHID_OUTREPORT_BUF_SIZE);
}

void USBD_InEvent()
{
  int32_t len;

  USBD_CUSTOM_HID_HandleTypeDef *hhid = (USBD_CUSTOM_HID_HandleTypeDef *)hUsbDeviceFS.pClassData;
  int32_t USBD_HID0_GetReport(uint8_t rtype, uint8_t req, uint8_t rid, uint8_t *buf);
  if ((len = USBD_HID0_GetReport(HID_REPORT_INPUT, USBD_HID_REQ_EP_INT, 0, hhid->Report_buf)) > 0)
  {
    USBD_HID_GetReportTrigger(0, 0, hhid->Report_buf, len);
  }
}
