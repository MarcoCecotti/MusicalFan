################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
CodeStartBranch.obj: C:/ti/motorware/motorware_1_01_00_16/sw/drivers/cpu/src/32b/f28x/f2806x/CodeStartBranch.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="CodeStartBranch.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

SPImcBSP.obj: C:/ti/motorware/motorware_1_01_00_16/sw/drivers/mcbsp/SPImcBSP.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="SPImcBSP.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

adc.obj: C:/ti/motorware/motorware_1_01_00_16/sw/drivers/adc/src/32b/f28x/f2806x/adc.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="adc.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

clarke.obj: C:/ti/motorware/motorware_1_01_00_16/sw/modules/clarke/src/32b/clarke.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="clarke.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

clk.obj: C:/ti/motorware/motorware_1_01_00_16/sw/drivers/clk/src/32b/f28x/f2806x/clk.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="clk.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

cpu.obj: C:/ti/motorware/motorware_1_01_00_16/sw/drivers/cpu/src/32b/f28x/f2806x/cpu.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="cpu.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

ctrl.obj: C:/ti/motorware/motorware_1_01_00_16/sw/modules/ctrl/src/32b/ctrl.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="ctrl.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

dma.obj: C:/ti/motorware/motorware_1_01_00_16/sw/drivers/dma/dma.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="dma.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

drv8301.obj: C:/ti/motorware/motorware_1_01_00_16/sw/drivers/drvic/drv8301/src/32b/f28x/f2806x/drv8301.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="drv8301.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

flash.obj: C:/ti/motorware/motorware_1_01_00_16/sw/drivers/flash/src/32b/f28x/f2806x/flash.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="flash.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

gpio.obj: C:/ti/motorware/motorware_1_01_00_16/sw/drivers/gpio/src/32b/f28x/f2806x/gpio.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="gpio.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

hal.obj: C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/hal.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="hal.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

ipark.obj: C:/ti/motorware/motorware_1_01_00_16/sw/modules/ipark/src/32b/ipark.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="ipark.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

osc.obj: C:/ti/motorware/motorware_1_01_00_16/sw/drivers/osc/src/32b/f28x/f2806x/osc.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="osc.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

park.obj: C:/ti/motorware/motorware_1_01_00_16/sw/modules/park/src/32b/park.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="park.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

pid.obj: C:/ti/motorware/motorware_1_01_00_16/sw/modules/pid/src/32b/pid.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="pid.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

pie.obj: C:/ti/motorware/motorware_1_01_00_16/sw/drivers/pie/src/32b/f28x/f2806x/pie.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="pie.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

pll.obj: C:/ti/motorware/motorware_1_01_00_16/sw/drivers/pll/src/32b/f28x/f2806x/pll.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="pll.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

proj_MusicalFan.obj: ../proj_MusicalFan.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="proj_MusicalFan.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

pwm.obj: C:/ti/motorware/motorware_1_01_00_16/sw/drivers/pwm/src/32b/f28x/f2806x/pwm.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="pwm.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

pwr.obj: C:/ti/motorware/motorware_1_01_00_16/sw/drivers/pwr/src/32b/f28x/f2806x/pwr.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="pwr.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

spi.obj: C:/ti/motorware/motorware_1_01_00_16/sw/drivers/spi/src/32b/f28x/f2806x/spi.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="spi.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

spiCTRL.obj: C:/ti/motorware/motorware_1_01_00_16/sw/modules/spiCTRL/src/32b/spiCTRL.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="spiCTRL.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

svgen.obj: C:/ti/motorware/motorware_1_01_00_16/sw/modules/svgen/src/32b/svgen.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="svgen.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

timer.obj: C:/ti/motorware/motorware_1_01_00_16/sw/drivers/timer/src/32b/f28x/f2806x/timer.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="timer.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

usDelay.obj: C:/ti/motorware/motorware_1_01_00_16/sw/modules/usDelay/src/32b/f28x/usDelay.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="usDelay.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

user.obj: C:/ti/motorware/motorware_1_01_00_16/sw/modules/user/src/32b/user.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="user.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

wdog.obj: C:/ti/motorware/motorware_1_01_00_16/sw/drivers/wdog/src/32b/f28x/f2806x/wdog.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 --include_path="C:/ti/motorware/motorware_1_01_00_16/sw/modules/hal/boards/TAPAS_V1.0/f28x/f2806x/src/" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --include_path="C:/Users/marco/Desktop/Repo/MusicalFan/TAPAS/CodeComposer" --include_path="C:/ti/motorware/motorware_1_01_00_16" -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number --preproc_with_compile --preproc_dependency="wdog.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


