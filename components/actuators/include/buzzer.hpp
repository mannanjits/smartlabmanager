#pragma once
#include"outputdevice.hpp"

class buzzer:public OutputDevice{
    private:
    bool isOn;
    gpio_num_t pin;
    public:
    buzzer(gpio_num_t pin);
    esp_err_t begin() override;
    void on() override;
    void off() override;
    void toggle() override;
};