################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../myGPIO/myGPIO.c 

OBJS += \
./myGPIO/myGPIO.o 

C_DEPS += \
./myGPIO/myGPIO.d 


# Each subdirectory must supply rules for building sources it contributes
myGPIO/%.o: ../myGPIO/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU C Compiler'
	arm-none-eabi-gcc -mthumb -mcpu=cortex-m3 -IC:\embedded\GPIO\SoftConsole\GPIO_MSS_MSS_CM3_0\GPIO_MSS_MSS_CM3_0_hw_platform -I"C:\embedded\GPIO\SoftConsole\GPIO_MSS_MSS_CM3_0\Opgave3_1\myGPIO" -IC:\embedded\GPIO\SoftConsole\GPIO_MSS_MSS_CM3_0\GPIO_MSS_MSS_CM3_0_hw_platform\CMSIS -IC:\embedded\GPIO\SoftConsole\GPIO_MSS_MSS_CM3_0\GPIO_MSS_MSS_CM3_0_hw_platform\CMSIS\startup_gcc -IC:\embedded\GPIO\SoftConsole\GPIO_MSS_MSS_CM3_0\GPIO_MSS_MSS_CM3_0_hw_platform\drivers -IC:\embedded\GPIO\SoftConsole\GPIO_MSS_MSS_CM3_0\GPIO_MSS_MSS_CM3_0_hw_platform\drivers\mss_gpio -IC:\embedded\GPIO\SoftConsole\GPIO_MSS_MSS_CM3_0\GPIO_MSS_MSS_CM3_0_hw_platform\drivers\mss_uart -IC:\embedded\GPIO\SoftConsole\GPIO_MSS_MSS_CM3_0\GPIO_MSS_MSS_CM3_0_hw_platform\hal -IC:\embedded\GPIO\SoftConsole\GPIO_MSS_MSS_CM3_0\GPIO_MSS_MSS_CM3_0_hw_platform\hal\CortexM3 -IC:\embedded\GPIO\SoftConsole\GPIO_MSS_MSS_CM3_0\GPIO_MSS_MSS_CM3_0_hw_platform\hal\CortexM3\GNU -O0 -ffunction-sections -fdata-sections -g3 -Wall -c -fmessage-length=0 -v -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


