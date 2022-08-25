/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: waijung2_hwdrvlib.h
 *
 * Code generated with Waijung 2 ESP32 Target Blockset,
 * for Simulink model 'esp32_adc_demo'.
 *
 * Model version                  : 8.0
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Thu Aug 25 09:02:28 2022
 *
 * Target selection: esp32.tlc
 * Embedded hardware selection: Cadence Design Systems (Tensilica)->Xtensa® single-/dual-core 32-bit LX6 microprocessor
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_waijung2_hwdrvlib_h_
#define RTW_HEADER_waijung2_hwdrvlib_h_

/* ESP32 headers */
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "soc/timer_group_struct.h"
#include "soc/timer_group_reg.h"
#include "freertos/semphr.h"
#include "esp_err.h"
#include "esp_log.h"
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include "driver/adc.h"
#include "driver/gpio.h"
#define BASE_SAMPLE_TIME               0.2                       /* Base sample time in second */

void GPIO_initialize_DigitalOut();
void GPIO_initialize_DigitalOut1();

#endif                                 /* RTW_HEADER_waijung2_hwdrvlib_h_ */

/* [EOF] */
