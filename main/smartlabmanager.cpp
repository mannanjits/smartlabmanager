#include"led.hpp"
#include"buzzer.hpp"
#include"freertos/FreeRTOS.h"
#include"freertos/task.h"
#include "esp_log.h"

led led(GPIO_NUM_17);
buzzer buzz(GPIO_NUM_15);

OutputDevice* OutputDevices[]{
    &led,
    &buzz
};


extern "C" void app_main(){
}