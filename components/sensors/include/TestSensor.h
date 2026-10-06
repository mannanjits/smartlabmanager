#include"InputDevice.h"
#include"driver/gpio.h"

class TestSensor:public InputDevice{
    protected:
    gpio_num_t data;
    
    public:
    TestSensor(gpio_num_t pin);
    esp_err_t begin() override;
    float read();
};