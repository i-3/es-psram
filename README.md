# ESP32-S3 Octal PSRAM Reference Project (C / ESP-IDF)

Working reference project for **ESP32-S3 (8MB Octal PSRAM + 16MB Flash)** using pure ESP-IDF C SDK. 

This repository serves as a baseline comparison for the Rust issue in [`rs-psram`](https://github.com/i-3/rs-psram).

## Target Hardware
* **Chip:** ESP32-S3 (revision v0.2)
* **Flash:** 16MB (QIO mode, 80MHz)
* **PSRAM:** 8MB Octal PSRAM (AP Memory, 40MHz)

## Verification Status
* **Status:** PASS (100% Working)
* **ESP-IDF Version:** v5.2.7

## Serial Output Log
```text
I (239) esp_psram: Found 8MB PSRAM device
I (244) esp_psram: Speed: 40MHz
I (979) esp_psram: SPI SRAM memory test OK
I (1063) esp_psram: Adding pool of 8192K of PSRAM memory to heap allocator
I (1104) main_task: Calling app_main()
I (1114) MAIN: ====================================
I (1114) MAIN:     es-psram project launched successfully!  
I (1124) MAIN: ====================================
I (1134) MAIN: PSRAM detected! Size: 8 MB (8388608 bytes)
```

## How to Run

```bash
chmod +x run.sh
./run.sh
```