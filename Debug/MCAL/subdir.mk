################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/DIO.c \
../MCAL/Ex_Interrupt.c \
../MCAL/SPI.c \
../MCAL/TIMER.c \
../MCAL/UART.c \
../MCAL/WDT.c 

OBJS += \
./MCAL/DIO.o \
./MCAL/Ex_Interrupt.o \
./MCAL/SPI.o \
./MCAL/TIMER.o \
./MCAL/UART.o \
./MCAL/WDT.o 

C_DEPS += \
./MCAL/DIO.d \
./MCAL/Ex_Interrupt.d \
./MCAL/SPI.d \
./MCAL/TIMER.d \
./MCAL/UART.d \
./MCAL/WDT.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/%.o: ../MCAL/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


