################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/src/DIO.c \
../Drivers/src/DIO_Cfg.c 

OBJS += \
./Drivers/src/DIO.o \
./Drivers/src/DIO_Cfg.o 

C_DEPS += \
./Drivers/src/DIO.d \
./Drivers/src/DIO_Cfg.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/src/%.o: ../Drivers/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32 -DSTM32F4 -DSTM32F401CCUx -DDEBUG -DSTM32F401xx -DUSE_STDPERIPH_DRIVER -I"C:/Users/zalma/workspace/Proxytry/StdPeriph_Driver/inc" -I"C:/Users/zalma/workspace/Proxytry/inc" -I"C:/Users/zalma/workspace/Proxytry/Drivers/inc" -I"C:/Users/zalma/workspace/Proxytry/inc" -I"C:/Users/zalma/workspace/Proxytry/CMSIS/device" -I"C:/Users/zalma/workspace/Proxytry/CMSIS/core" -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


