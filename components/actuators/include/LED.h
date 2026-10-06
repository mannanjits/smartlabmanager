#pragma once

#include"OutputDevice.h"

class LED: public OutputDevice{
    private:
    bool isOn;
    public:
    LED(gpio_num_t pin);

    esp_err_t begin() override;
    void on() override;
    void off() override;
    void toggle() override;
};