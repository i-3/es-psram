#!/bin/bash
set -e

echo "=== Building, flashing and monitoring es-psram (ESP-IDF v5.2.7) ==="

sudo chmod 666 /dev/ttyUSB* /dev/ttyACM* 2>/dev/null || true

docker run --rm -it \
  --privileged \
  -v /dev:/dev \
  -v "$(pwd)":/project \
  -w /project \
  espressif/idf:v5.2.7 \
  idf.py build flash monitor