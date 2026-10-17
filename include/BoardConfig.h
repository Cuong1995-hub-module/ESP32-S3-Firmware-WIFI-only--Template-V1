
#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#if defined(BOARD_ESP32_S3)

#define RESET_BUTTON_PIN 0

#define BOARD_HAS_RGB_LED
#define RGB_LED_PIN 48

#else
#error "This firmware supports ESP32-S3 only"

#endif

#endif
