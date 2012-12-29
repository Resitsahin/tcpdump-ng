################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/log.c \
../src/pktsniff.c \
../src/tcpdump-ng.c 

OBJS += \
./src/log.o \
./src/pktsniff.o \
./src/tcpdump-ng.o 

C_DEPS += \
./src/log.d \
./src/pktsniff.d \
./src/tcpdump-ng.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


