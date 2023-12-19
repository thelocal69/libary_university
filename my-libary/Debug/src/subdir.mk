################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/App.c \
../src/ManagerReaders.c 

C_DEPS += \
./src/App.d \
./src/ManagerReaders.d 

OBJS += \
./src/App.o \
./src/ManagerReaders.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/App.d ./src/App.o ./src/ManagerReaders.d ./src/ManagerReaders.o

.PHONY: clean-src

