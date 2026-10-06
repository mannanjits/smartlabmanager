#pragma once
#include"OutputDevice.h"

class Buzzer:public OutputDevice{
    private:
    bool isOn;
    gpio_num_t pin;
    public:
    Buzzer(gpio_num_t pin);
    esp_err_t begin() override;
    void on() override;
    void off() override;
    void toggle() override;
};