/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: waijung2_hwdrvlib.c
 *
 * Code generated with Waijung 2 ESP32 Target Blockset,
 * for Simulink model 'esp32_adc_demo'.
 *
 * Model version                  : 8.0
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Mon Aug 29 22:18:23 2022
 *
 * Target selection: esp32.tlc
 * Embedded hardware selection: Cadence Design Systems (Tensilica)->Xtensa® single-/dual-core 32-bit LX6 microprocessor
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "esp32_adc_demo.h"            /* Model's header file */

/************* GPIO Output Initialize Function: DigitalOut *************/
void GPIO_initialize_DigitalOut()
{
  /*gpio_config_t io_conf;
     io_conf.pin_bit_mask = ((1ULL<<15));            // Select pins
     io_conf.mode = GPIO_MODE_OUTPUT;                     // Pins mode
     io_conf.intr_type = GPIO_INTR_DISABLE;          // Disable interrupt
     io_conf.pull_down_en = GPIO_PULLDOWN_DISABLE; 	// Disable pull-down mode
     io_conf.pull_up_en = GPIO_PULLUP_DISABLE;		// Disable pull-up mode
     gpio_config(&io_conf);*/
  gpio_pad_select_gpio(15);
  gpio_set_direction(15, GPIO_MODE_OUTPUT);
  gpio_set_drive_capability(GPIO_NUM_15, GPIO_DRIVE_CAP_2);
}

/************* GPIO Output Initialize Function: DigitalOut1 *************/
void GPIO_initialize_DigitalOut1()
{
  /*gpio_config_t io_conf;
     io_conf.pin_bit_mask = ((1ULL<<12));            // Select pins
     io_conf.mode = GPIO_MODE_OUTPUT_OD;                     // Pins mode
     io_conf.intr_type = GPIO_INTR_DISABLE;          // Disable interrupt
     io_conf.pull_down_en = GPIO_PULLDOWN_DISABLE; 	// Disable pull-down mode
     io_conf.pull_up_en = GPIO_PULLUP_DISABLE;		// Disable pull-up mode
     gpio_config(&io_conf);*/
  gpio_pad_select_gpio(12);
  gpio_set_direction(12, GPIO_MODE_OUTPUT_OD);
  gpio_set_drive_capability(GPIO_NUM_12, GPIO_DRIVE_CAP_2);
}

/************* GPIO Output Initialize Function: DigitalOut2 *************/
void GPIO_initialize_DigitalOut2()
{
  /*gpio_config_t io_conf;
     io_conf.pin_bit_mask = ((1ULL<<2));            // Select pins
     io_conf.mode = GPIO_MODE_OUTPUT;                     // Pins mode
     io_conf.intr_type = GPIO_INTR_DISABLE;          // Disable interrupt
     io_conf.pull_down_en = GPIO_PULLDOWN_DISABLE; 	// Disable pull-down mode
     io_conf.pull_up_en = GPIO_PULLUP_DISABLE;		// Disable pull-up mode
     gpio_config(&io_conf);*/
  gpio_pad_select_gpio(2);
  gpio_set_direction(2, GPIO_MODE_OUTPUT);
  gpio_set_drive_capability(GPIO_NUM_2, GPIO_DRIVE_CAP_2);
}

/* [EOF] */
