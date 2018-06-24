################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
-lrts2800_fpu32.lib \
"C:/ti/motorware/motorware_1_01_00_16/sw/modules/iqmath/lib/f28x/float/IQmath_fpu32.lib" \
"C:/ti/motorware/motorware_1_01_00_16/sw/modules/fast/lib/32b/f28x/f2806x/2806xRevB_FastSpinROMSymbols_fpu32.lib" \
"./CodeStartBranch.obj" \
"./SPImcBSP.obj" \
"./adc.obj" \
"./clarke.obj" \
"./clk.obj" \
"./cpu.obj" \
"./ctrl.obj" \
"./dma.obj" \
"./drv8301.obj" \
"./flash.obj" \
"./gpio.obj" \
"./hal.obj" \
"./ipark.obj" \
"./osc.obj" \
"./park.obj" \
"./pid.obj" \
"./pie.obj" \
"./pll.obj" \
"./proj_MusicalFan.obj" \
"./pwm.obj" \
"./pwr.obj" \
"./spi.obj" \
"./spiCTRL.obj" \
"./svgen.obj" \
"./timer.obj" \
"./usDelay.obj" \
"./user.obj" \
"./wdog.obj" \
"C:/ti/motorware/motorware_1_01_00_16/sw/ide/ccs/cmd/f2806x/f28069F_ram_lnk.cmd" \
"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/lib/rts2800_fpu32.lib" \
"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/lib/rts2800_ml.lib" \
$(GEN_CMDS__FLAG) \
-lrts2800_ml.lib \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
proj_MusicalFan.out \

EXE_OUTPUTS__QUOTED += \
"proj_MusicalFan.out" \


# All Target
all: proj_MusicalFan.out

# Tool invocations
proj_MusicalFan.out: $(OBJS) $(CMD_SRCS) $(LIB_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: C2000 Linker'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -O2 -g --float_operations_allowed=all --define=FAST_ROM_V1p6 --diag_warning=225 --display_error_number -z -m"proj_MusicalFan.map" --stack_size=0x3B0 --warn_sections -i"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/lib" -i"C:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.1.LTS/include" --reread_libs --priority --disable_auto_rts --diag_suppress=16002 --xml_link_info="proj_MusicalFan_linkInfo.xml" --rom_model -o "proj_MusicalFan.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)
	-$(RM) "CodeStartBranch.obj" "SPImcBSP.obj" "adc.obj" "clarke.obj" "clk.obj" "cpu.obj" "ctrl.obj" "dma.obj" "drv8301.obj" "flash.obj" "gpio.obj" "hal.obj" "ipark.obj" "osc.obj" "park.obj" "pid.obj" "pie.obj" "pll.obj" "proj_MusicalFan.obj" "pwm.obj" "pwr.obj" "spi.obj" "spiCTRL.obj" "svgen.obj" "timer.obj" "usDelay.obj" "user.obj" "wdog.obj" 
	-$(RM) "SPImcBSP.d" "adc.d" "clarke.d" "clk.d" "cpu.d" "ctrl.d" "dma.d" "drv8301.d" "flash.d" "gpio.d" "hal.d" "ipark.d" "osc.d" "park.d" "pid.d" "pie.d" "pll.d" "proj_MusicalFan.d" "pwm.d" "pwr.d" "spi.d" "spiCTRL.d" "svgen.d" "timer.d" "user.d" "wdog.d" 
	-$(RM) "CodeStartBranch.d" "usDelay.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

