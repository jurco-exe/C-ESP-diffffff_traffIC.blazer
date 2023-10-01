#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "sdkconfig.h"

static const char *TAG = "example";


void app_main(void)
{
    // gpio_reset_pin(GPIO_NUM_2);
    gpio_reset_pin(GPIO_NUM_4); // BTN
    gpio_reset_pin(GPIO_NUM_18); // green
    gpio_reset_pin(GPIO_NUM_19); // orange
    gpio_reset_pin(GPIO_NUM_21); // red

    gpio_reset_pin(GPIO_NUM_22); // red person
    gpio_reset_pin(GPIO_NUM_23); // green person

    int led_state = 0;    // the current state of LED
    int button_state;       // the current state of button
    int last_button_state;  // the previous state of button


    gpio_set_direction(GPIO_NUM_18, GPIO_MODE_OUTPUT);
    gpio_set_direction(GPIO_NUM_19, GPIO_MODE_OUTPUT);
    gpio_set_direction(GPIO_NUM_21, GPIO_MODE_OUTPUT);
    
    gpio_set_direction(GPIO_NUM_22, GPIO_MODE_OUTPUT);
    gpio_set_direction(GPIO_NUM_23, GPIO_MODE_OUTPUT);

    // while (1) {
        gpio_set_level(GPIO_NUM_21, 1);
    // }
}