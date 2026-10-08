#pragma once
#include<esp_err.h>

class Device{
    public:
    virtual esp_err_t begin()=0;
    virtual ~Device()=default;
};