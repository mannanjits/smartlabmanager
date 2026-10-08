#pragma once

#include"outputdevice.hpp"

class led: public OutputDevice{
    private:
    bool isOn;
    public:
    led(gpio_num_t pin);

    esp_err_t begin() override;
    void on() override;
    void off() override;
    void toggle() override;
};