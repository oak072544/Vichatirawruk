/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: esp32_adc_demo.c
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

#include "esp32_adc_demo.h"

/* Block signals (default storage) */
B_esp32_adc_demo_T esp32_adc_demo_B;

/* Real-time model */
static RT_MODEL_esp32_adc_demo_T esp32_adc_demo_M_;
RT_MODEL_esp32_adc_demo_T *const esp32_adc_demo_M = &esp32_adc_demo_M_;

/* Model step function */
void esp32_adc_demo_step(void)
{
  /* S-Function (esp32_adc): '<Root>/ADC' */

  /* Updating the ADC pins  */
  adc1_config_width(ADC_WIDTH_BIT_12);//Set the ADC module 1 resolution as 12Bit
  adc1_config_channel_atten(ADC1_CHANNEL_0, ADC_ATTEN_DB_11);// Initializing ADC Channel as GPIO36
  esp32_adc_demo_B.ADC = adc1_get_raw(ADC1_CHANNEL_0);

  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Constant: '<S1>/Constant'
   */
  esp32_adc_demo_B.Compare = (esp32_adc_demo_B.ADC >= 500);

  /* S-Function (esp32_digital_output3): '<Root>/Digital Out' */

  /* Updating the pins of DigitalOut */
  gpio_set_level(2,(uint32_t) esp32_adc_demo_B.Compare);/* GPIO2 */

  /* MATLAB Function: '<Root>/MATLAB Function' */
  esp32_adc_demo_B.y = (esp32_adc_demo_B.ADC >= 500);

  /* S-Function (esp32_digital_output3): '<Root>/Digital Out1' */

  /* Updating the pins of DigitalOut1 */
  gpio_set_level(12,(uint32_t) esp32_adc_demo_B.y);/* GPIO12 */
}

/* Model initialize function */
void esp32_adc_demo_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(esp32_adc_demo_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &esp32_adc_demo_B), 0,
                sizeof(B_esp32_adc_demo_T));

  /* Start for S-Function (esp32_adc): '<Root>/ADC' */

  //================================================================= ADC pins: 'ADC' Initialization

  /* Start for S-Function (esp32_digital_output3): '<Root>/Digital Out' */

  //================================================================= GPIO Out pins: 'DigitalOut' Initialization
  //GPIO_initialize_DigitalOut();

  /* Start for S-Function (esp32_digital_output3): '<Root>/Digital Out1' */

  //================================================================= GPIO Out pins: 'DigitalOut1' Initialization
  //GPIO_initialize_DigitalOut1();

  /* Enable for S-Function (esp32_digital_output3): '<Root>/Digital Out' */
  /* Level2 S-Function Block: '<Root>/Digital Out' (esp32_digital_output3) */
  GPIO_initialize_DigitalOut();

  /* Enable for S-Function (esp32_digital_output3): '<Root>/Digital Out1' */
  /* Level2 S-Function Block: '<Root>/Digital Out1' (esp32_digital_output3) */
  GPIO_initialize_DigitalOut1();
}

/* Model terminate function */
void esp32_adc_demo_terminate(void)
{
  /* (no terminate code required) */
}

/* [EOF] */
