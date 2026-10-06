#include"LED.h"
#include"Buzzer.h"
#include"TestSensor.h"
#include"freertos/FreeRTOS.h"
#include"freertos/task.h"
#include "esp_log.h"

LED led(GPIO_NUM_17);
Buzzer buzz(GPIO_NUM_15);
TestSensor sensor(GPIO_NUM_18);

OutputDevice* OutputDevices[]{
    &led,
    &buzz
};

InputDevice* InputDevices[]{
    &sensor
};

extern "C" void app_main(){
}