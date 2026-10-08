#include<buzzer.hpp>
buzzer::buzzer(gpio_num_t pin)
:OutputDevice(pin){}

esp_err_t buzzer:: begin(){
    gpio_set_direction(pin, GPIO_MODE_OUTPUT);
    return ESP_OK;
}

void buzzer:: on(){
    gpio_set_level(pin,1);
    isOn=1;
}

void buzzer:: off(){
    gpio_set_level(pin,0);
    isOn=0;
}

void buzzer:: toggle(){
    if(isOn==0){
    gpio_set_level(pin, 1);
    isOn=1;
    }else{
        gpio_set_level(pin, 0);
        isOn=0;
    }
}