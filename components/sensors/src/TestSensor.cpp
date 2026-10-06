#include"TestSensor.h"
#include"esp_log.h"

TestSensor::TestSensor(gpio_num_t pin)
:data(pin){}

esp_err_t TestSensor::begin(){
    gpio_set_direction(data, GPIO_MODE_INPUT);
    gpio_pullup_dis(data);
    gpio_pulldown_en(data);
    return ESP_OK;
}

float TestSensor::read()
{
    int value = gpio_get_level(data);

    ESP_LOGI("TestSensor", "GPIO %d = %d", data, value);

    return value;
}

