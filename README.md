# stm32f401ccu6-cmsis-dap
stm32f401ccu6-cmsis-dap<br/>

toolchain:<br/>
--stm32cubemx 5.6.1<br/>
en.stm32cubemx_v5-6-1.zip<br/>
--stm32f4 firmware 1.25.0<br/>
en.stm32cubef4_v1-25-0.zip<br/>
--gcc 10.2.1<br/>
gcc-arm-none-eabi-10-2020-q4-major-win32.zip<br/>
--msys2<br/>
msys2-x86_64-20201109.exe<br/>

compile:<br/>
open msys2.exe<br/>
export PATH=$PATH:XXX/gcc-arm-none-eabi-10-2020-q4-major/bin<br/>
cd YYY/stm32f401ccu6-cmsis-dap/src<br/>
make<br/>

pin:<br/>
PA0 TCK/SWCLK<br/>
PA1 TMS/SWDIO<br/>
PA2 nRESET<br/>
PA3 TDI<br/>
PA4 TDO<br/>

reference:<br/>
http://wiki.geniekits.com/doku.php?id=usb_express:cmsis-dap<br/>

![stm32f401ccu6_0](https://github.com/forlfs/stm32f401ccu6-cmsis-dap/blob/main/pic/stm32f401ccu6_0.jpg)<br/>

![stm32f401ccu6_1](https://github.com/forlfs/stm32f401ccu6-cmsis-dap/blob/main/pic/stm32f401ccu6_1.jpg)<br/>
