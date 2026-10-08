#include"led.hpp"

led::led(gpio_num_t pin)
: OutputDevice(pin){}

esp_err_t led::begin(){
    gpio_set_direction(pin, GPIO_MODE_OUTPUT);
    return ESP_OK;
}

void led::on(){
    gpio_set_level(pin,1);
    isOn=true;
}

void led::off(){
    gpio_set_level(pin,0);
    isOn=false;
}

void led::toggle(){
    if(isOn){
        off();
    }else{
        on();
    }
}