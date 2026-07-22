#include <stdio.h>
#include "esp_log.h"
#include "esp_psram.h"

static const char *TAG = "MAIN";

void app_main(void)
{
    ESP_LOGI(TAG, "====================================");
    ESP_LOGI(TAG, "   Проект es-psram успешно запущен!  ");
    ESP_LOGI(TAG, "====================================");

    // Проверяем, инициализирована ли PSRAM в sdkconfig
    if (esp_psram_is_initialized()) {
        size_t psram_size = esp_psram_get_size();
        ESP_LOGI(TAG, "PSRAM обнаружена! Размер: %d МБ (%d байт)", 
                 psram_size / (1024 * 1024), psram_size);
    } else {
        ESP_LOGW(TAG, "PSRAM не инициализирована (или выключена в menuconfig)!");
    }
}