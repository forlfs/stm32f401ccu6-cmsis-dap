# stm32f401ccu6-cmsis-dap
stm32f401ccu6-cmsis-dap<br/>

toolchain:<br/>
--stm32cubemx 5.6.1<br/>
https://www.st.com/en/development-tools/stm32cubemx.html<br/>
en.stm32cubemx_v5-6-1.zip<br/>
--stm32f4 firmware 1.25.0<br/>
https://www.st.com/en/embedded-software/stm32cubef4.html<br/>
en.stm32cubef4_v1-25-0.zip<br/>
--cmsis 5.7.0<br/>
https://github.com/ARM-software/CMSIS_5/releases<br/>
CMSIS_5-5.7.0.tar.gz<br/>
--gcc 10.2.1<br/>
https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads/product-release<br/>
gcc-arm-none-eabi-10-2020-q4-major-win32.zip<br/>
--msys2<br/>
https://mirrors.tuna.tsinghua.edu.cn/msys2/distrib/x86_64<br/>
msys2-x86_64-20201109.exe<br/>

compile:<br/>
--open msys2.exe<br/>
export PATH=$PATH:XXX/gcc-arm-none-eabi-10-2020-q4-major/bin<br/>
cd YYY/stm32f401ccu6-cmsis-dap/src<br/>
make<br/>

pin:<br/>
--swd<br/>
PA0 SWCLK<br/>
PA1 SWDIO<br/>
--jtag<br/>
PA0 TCK<br/>
PA1 TMS<br/>
PA2 nRESET<br/>
PA3 TDI<br/>
PA4 TDO<br/>

reference:<br/>
https://imuncle.github.io/content.html?id=83<br/>
https://imuncle.github.io/content.html?id=88<br/>
