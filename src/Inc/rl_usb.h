#ifndef __RL_USB_H__
#define __RL_USB_H__

#define USBD_HID0_IN_REPORT_MAX_SZ                64
#define USBD_HID0_OUT_REPORT_MAX_SZ               64

#define HID_REPORT_INPUT                        0x01U
#define HID_REPORT_OUTPUT                       0x02U
#define HID_REPORT_FEATURE                      0x03U

enum {
  USBD_HID_REQ_EP_CTRL = 0,
  USBD_HID_REQ_EP_INT,
  USBD_HID_REQ_PERIOD_UPDATE
};

void USBD_HID_GetReportTrigger(int x, int y, void *report, int len);

#endif
