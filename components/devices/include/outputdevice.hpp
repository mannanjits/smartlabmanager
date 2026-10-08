#pragma once
#include"device.hpp"
#include"driver/gpio.h"


class OutputDevice:public Device{
    protected:
    gpio_num_t pin;
    public:
    OutputDevice(gpio_num_t pin);
    virtual void on()=0;
    virtual void off()=0;
    virtual void toggle()=0;
};