#include"LED.h"

LED::LED(gpio_num_t pin)
: OutputDevice(pin){}

esp_err_t LED::begin(){
    gpio_set_direction(pin, GPIO_MODE_OUTPUT);
    return ESP_OK;
}

void LED::on(){
    gpio_set_level(pin,1);
    isOn=true;
}

void LED::off(){
    gpio_set_level(pin,0);
    isOn=false;
}

void LED::toggle(){
    if(isOn){
        off();
    }else{
        on();
    }
}