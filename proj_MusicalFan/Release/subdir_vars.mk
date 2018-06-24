################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Add inputs and outputs from these tool invocations to the build variables 
CMD_SRCS += \
C:/ti/motorware/motorware_1_01_00_16/sw/ide/ccs/cmd/f2806x/f28069F_ram_lnk.cmd 

LIB_SRCS += \
C:/ti/motorware/motorware_1_01_00_16/sw/modules/fast/lib/32b/f28x/f2806x/2806xRevB_FastSpinROMSymbols_fpu32.lib \
C:/ti/motorware/motorware_1_01_00_16/sw/modules/iqmath/lib/f28x/float/IQmath_fpu32.lib \
C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/lib/rts2800_fpu32.lib \
C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/lib/rts2800_ml.lib 

ASM_SRCS += \
C:/ti/motorware/motorware_1_01_00_16/sw/drivers/cpu/src/32b/f28x/f2806x/CodeStartBranch.asm \
C:/ti/motorware/motorware_1_01_00_16/sw/modules/usDelay/src/32b/f28x/usDelay.asm 

C_SRCS += \
C:/ti/motorware/motorware_1_01_00_16/sw/drivers/mcbsp/SPImcBSP.c \
C:/ti/motorware/motorware_1_01_00_16/sw/drivers/adc/src/32b/f28x/f2806x/adc.c \
C:/ti/motorware/motorware_1_01_00_16/sw/modules/clarke/src/32b/clarke.c \
C:/ti/motorware/motorware_1_01_00_16/sw/drivers/clk/src/32b/f28x/f2806x/clk.c \
C:/ti/motorware/motorware_1_01_00_16/sw/drivers/cpu/src/32b/f28x/f2806x/cpu.c \
C:/ti/motorware/motorware_1_01_00_16/sw/modules/ctrl/src/32b/ctrl.c \
C:/ti/motorware/motorware_1_01_00_16/sw/drivers/dma/dma.c \
C:/ti/motorware/motorware_1_01_00_16/sw/drivers/drvic/drv8301/src/32b/f28x/f2806x/drv8301.c \
C:/ti/motorware/motorware_1_01_00_16/sw/drivers/flash/src/32b/f28x/f2806x/flash.c \
C:/ti/motorware/motorware_1_01_00_16/sw/drivers/gpio/src/32b/f28x/f2806x/gpio.c \
C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/hal.c \
C:/ti/motorware/motorware_1_01_00_16/sw/modules/ipark/src/32b/ipark.c \
C:/ti/motorware/motorware_1_01_00_16/sw/drivers/osc/src/32b/f28x/f2806x/osc.c \
C:/ti/motorware/motorware_1_01_00_16/sw/modules/park/src/32b/park.c \
C:/ti/motorware/motorware_1_01_00_16/sw/modules/pid/src/32b/pid.c \
C:/ti/motorware/motorware_1_01_00_16/sw/drivers/pie/src/32b/f28x/f2806x/pie.c \
C:/ti/motorware/motorware_1_01_00_16/sw/drivers/pll/src/32b/f28x/f2806x/pll.c \
../proj_MusicalFan.c \
C:/ti/motorware/motorware_1_01_00_16/sw/drivers/pwm/src/32b/f28x/f2806x/pwm.c \
C:/ti/motorware/motorware_1_01_00_16/sw/drivers/pwr/src/32b/f28x/f2806x/pwr.c \
C:/ti/motorware/motorware_1_01_00_16/sw/drivers/spi/src/32b/f28x/f2806x/spi.c \
C:/ti/motorware/motorware_1_01_00_16/sw/modules/spiCTRL/src/32b/spiCTRL.c \
C:/ti/motorware/motorware_1_01_00_16/sw/modules/svgen/src/32b/svgen.c \
C:/ti/motorware/motorware_1_01_00_16/sw/drivers/timer/src/32b/f28x/f2806x/timer.c \
C:/ti/motorware/motorware_1_01_00_16/sw/modules/user/src/32b/user.c \
C:/ti/motorware/motorware_1_01_00_16/sw/drivers/wdog/src/32b/f28x/f2806x/wdog.c 

C_DEPS += \
./SPImcBSP.d \
./adc.d \
./clarke.d \
./clk.d \
./cpu.d \
./ctrl.d \
./dma.d \
./drv8301.d \
./flash.d \
./gpio.d \
./hal.d \
./ipark.d \
./osc.d \
./park.d \
./pid.d \
./pie.d \
./pll.d \
./proj_MusicalFan.d \
./pwm.d \
./pwr.d \
./spi.d \
./spiCTRL.d \
./svgen.d \
./timer.d \
./user.d \
./wdog.d 

OBJS += \
./CodeStartBranch.obj \
./SPImcBSP.obj \
./adc.obj \
./clarke.obj \
./clk.obj \
./cpu.obj \
./ctrl.obj \
./dma.obj \
./drv8301.obj \
./flash.obj \
./gpio.obj \
./hal.obj \
./ipark.obj \
./osc.obj \
./park.obj \
./pid.obj \
./pie.obj \
./pll.obj \
./proj_MusicalFan.obj \
./pwm.obj \
./pwr.obj \
./spi.obj \
./spiCTRL.obj \
./svgen.obj \
./timer.obj \
./usDelay.obj \
./user.obj \
./wdog.obj 

ASM_DEPS += \
./CodeStartBranch.d \
./usDelay.d 

OBJS__QUOTED += \
"CodeStartBranch.obj" \
"SPImcBSP.obj" \
"adc.obj" \
"clarke.obj" \
"clk.obj" \
"cpu.obj" \
"ctrl.obj" \
"dma.obj" \
"drv8301.obj" \
"flash.obj" \
"gpio.obj" \
"hal.obj" \
"ipark.obj" \
"osc.obj" \
"park.obj" \
"pid.obj" \
"pie.obj" \
"pll.obj" \
"proj_MusicalFan.obj" \
"pwm.obj" \
"pwr.obj" \
"spi.obj" \
"spiCTRL.obj" \
"svgen.obj" \
"timer.obj" \
"usDelay.obj" \
"user.obj" \
"wdog.obj" 

C_DEPS__QUOTED += \
"SPImcBSP.d" \
"adc.d" \
"clarke.d" \
"clk.d" \
"cpu.d" \
"ctrl.d" \
"dma.d" \
"drv8301.d" \
"flash.d" \
"gpio.d" \
"hal.d" \
"ipark.d" \
"osc.d" \
"park.d" \
"pid.d" \
"pie.d" \
"pll.d" \
"proj_MusicalFan.d" \
"pwm.d" \
"pwr.d" \
"spi.d" \
"spiCTRL.d" \
"svgen.d" \
"timer.d" \
"user.d" \
"wdog.d" 

ASM_DEPS__QUOTED += \
"CodeStartBranch.d" \
"usDelay.d" 

ASM_SRCS__QUOTED += \
"C:/ti/motorware/motorware_1_01_00_16/sw/drivers/cpu/src/32b/f28x/f2806x/CodeStartBranch.asm" \
"C:/ti/motorware/motorware_1_01_00_16/sw/modules/usDelay/src/32b/f28x/usDelay.asm" 

C_SRCS__QUOTED += \
"C:/ti/motorware/motorware_1_01_00_16/sw/drivers/mcbsp/SPImcBSP.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/drivers/adc/src/32b/f28x/f2806x/adc.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/modules/clarke/src/32b/clarke.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/drivers/clk/src/32b/f28x/f2806x/clk.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/drivers/cpu/src/32b/f28x/f2806x/cpu.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/modules/ctrl/src/32b/ctrl.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/drivers/dma/dma.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/drivers/drvic/drv8301/src/32b/f28x/f2806x/drv8301.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/drivers/flash/src/32b/f28x/f2806x/flash.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/drivers/gpio/src/32b/f28x/f2806x/gpio.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/hal.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/modules/ipark/src/32b/ipark.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/drivers/osc/src/32b/f28x/f2806x/osc.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/modules/park/src/32b/park.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/modules/pid/src/32b/pid.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/drivers/pie/src/32b/f28x/f2806x/pie.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/drivers/pll/src/32b/f28x/f2806x/pll.c" \
"../proj_MusicalFan.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/drivers/pwm/src/32b/f28x/f2806x/pwm.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/drivers/pwr/src/32b/f28x/f2806x/pwr.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/drivers/spi/src/32b/f28x/f2806x/spi.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/modules/spiCTRL/src/32b/spiCTRL.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/modules/svgen/src/32b/svgen.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/drivers/timer/src/32b/f28x/f2806x/timer.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/modules/user/src/32b/user.c" \
"C:/ti/motorware/motorware_1_01_00_16/sw/drivers/wdog/src/32b/f28x/f2806x/wdog.c" 


