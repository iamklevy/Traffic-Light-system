################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTOS\ Stack/TIMER0/TIMER0_program.c 

OBJS += \
./RTOS\ Stack/TIMER0/TIMER0_program.o 

C_DEPS += \
./RTOS\ Stack/TIMER0/TIMER0_program.d 


# Each subdirectory must supply rules for building sources it contributes
RTOS\ Stack/TIMER0/TIMER0_program.o: ../RTOS\ Stack/TIMER0/TIMER0_program.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"RTOS Stack/TIMER0/TIMER0_program.d" -MT"RTOS\ Stack/TIMER0/TIMER0_program.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


