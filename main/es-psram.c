#include <stdio.h>
#include "esp_log.h"
#include "esp_psram.h"

static const char *TAG = "MAIN";

void app_main(void)
{
    ESP_LOGI(TAG, "=================================");
    ESP_LOGI(TAG, " PSRAM initialized successfully! ");
    ESP_LOGI(TAG, "=================================");

    if (esp_psram_is_initialized()) {
        size_t psram_size = esp_psram_get_size();
        ESP_LOGI(TAG, "PSRAM detected! Size: %d MB (%zu bytes)", 
                 (int)(psram_size / (1024 * 1024)), psram_size);
    } else {
        ESP_LOGW(TAG, "PSRAM is not initialized (or disabled in menuconfig)!");
    }
}