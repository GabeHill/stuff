################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/general/Quadratic.cpp 

OBJS += \
./src/general/Quadratic.o 

CPP_DEPS += \
./src/general/Quadratic.d 


# Each subdirectory must supply rules for building sources it contributes
src/general/%.o: ../src/general/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


