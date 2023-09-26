################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTOS\ Stack/RTOS/TMU_Program.c 

OBJS += \
./RTOS\ Stack/RTOS/TMU_Program.o 

C_DEPS += \
./RTOS\ Stack/RTOS/TMU_Program.d 


# Each subdirectory must supply rules for building sources it contributes
RTOS\ Stack/RTOS/TMU_Program.o: ../RTOS\ Stack/RTOS/TMU_Program.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"RTOS Stack/RTOS/TMU_Program.d" -MT"RTOS\ Stack/RTOS/TMU_Program.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


