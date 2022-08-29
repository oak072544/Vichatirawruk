/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
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
#include "rtwtypes.h"

/*
 *===============================================================
 * Simulink simulation information
 *===============================================================
 * Simulink model name: esp32_adc_demo
 * Note that:
 * Waijung 2 ESP32 target forces "Higher priority value indicates
 * higher task priority" under Simulink model configuration.
 * This is opposite to the default Simulink configuration where
 * lower priority value indicates higher priority.
 * Base priority level for all synchronous (periodic) and asynchronous tasks: 0
 * (This is set from Waijung 2 ESP32 target setup blockset under FreeRTOS tab -> Base task priority parameter.)
 * Synchronous (periodic) task information:
 * Number of synchronous periodic tasks: 1
 * Highest priority level needed for periodic tasks: 0
 * Highest priority level limit for the system: 16
 * Task 0 (Function name: vTaskFunctionBaseRate), base rate: 0.2 seconds, priority: 0
 * Default NULL definition: (NULL)
 *
 *===============================================================
 * Waijung 2 Info
 *===============================================================
 * Waijung 2 version: 20.11b
 * Waijung 2 target: ESP32
 * Target OS: FreeRTOS
 * Project path: C:\Users\oak07\Documents\Vichatirawruk\hys_con\esp32_adc_demo_esp32_build_system
 * Toolchain: ESP-IDF
 * ESP-IDF path: C:\msys32\home\skris\esp\esp-idf
 *===============================================================
 */

/* ANSI C headers */
#include <float.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Waijung 2 headers */
#include "waijung2_hwdrvlib.h"

/* Default xTaskCreate stack size */
#ifndef DEFAULT_STACK_SIZE
#define DEFAULT_STACK_SIZE             2048
#endif

void vTaskFunctionBaseRate(void *pvParameters)
{
  const TickType_t vPeriodicTaskPreiod = 200/portTICK_PERIOD_MS;
  TickType_t xLastWakeTime;
  xLastWakeTime = xTaskGetTickCount();

  /* For Debuging the single task base rate, Ignore */
  while (1) {
    /* Setting the base sample rate: */
    vTaskDelayUntil(&xLastWakeTime, vPeriodicTaskPreiod);

    /* Release the Semaphores for all the base rate functions in the following function: */
    esp32_adc_demo_step();

    /* Get model outputs here */
  }
}

/*
 * Spawn esp32_adc_demo_main as an independent FreeRTOS task
 * from your application code.
 */
void app_main(void)
{
  /* Initialize model */
  esp32_adc_demo_initialize();

  /*
   * base_priority variable is used for assigning periodic task priority.
   * Note that, for periodic tasks, Priority property in Simulink blocks
   * has no effects on task execution order. Fastest rate blocks (smaller
   * block's sample time) always have higher priority.
   */
  UBaseType_t base_priority = 0;       /* Base priority */
  xTaskCreate(vTaskFunctionBaseRate, "vTaskFunctionBaseRate", DEFAULT_STACK_SIZE,
              NULL, base_priority + 0, NULL);
}

/* [EOF] */
