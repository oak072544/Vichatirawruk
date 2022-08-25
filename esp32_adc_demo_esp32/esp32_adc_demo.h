/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: esp32_adc_demo.h
 *
 * Code generated with Waijung 2 ESP32 Target Blockset,
 * for Simulink model 'esp32_adc_demo'.
 *
 * Model version                  : 8.0
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Thu Aug 25 08:51:49 2022
 *
 * Target selection: esp32.tlc
 * Embedded hardware selection: Cadence Design Systems (Tensilica)->Xtensa� single-/dual-core 32-bit LX6 microprocessor
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_esp32_adc_demo_h_
#define RTW_HEADER_esp32_adc_demo_h_
#ifndef esp32_adc_demo_COMMON_INCLUDES_
#define esp32_adc_demo_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* esp32_adc_demo_COMMON_INCLUDES_ */

#include "waijung2_hwdrvlib.h"
#include "esp32_adc_demo_types.h"
#include <stddef.h>
#include <string.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  int16_T ADC;                         /* '<Root>/ADC' */
  boolean_T Compare;                   /* '<S1>/Compare' */
  boolean_T y;                         /* '<Root>/MATLAB Function' */
} B_esp32_adc_demo_T;

/* Real-time Model Data Structure */
struct tag_RTM_esp32_adc_demo_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_esp32_adc_demo_T esp32_adc_demo_B;

/* Model entry point functions */
extern void esp32_adc_demo_initialize(void);
extern void esp32_adc_demo_step(void);
extern void esp32_adc_demo_terminate(void);

/* Real-time Model object */
extern RT_MODEL_esp32_adc_demo_T *const esp32_adc_demo_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'esp32_adc_demo'
 * '<S1>'   : 'esp32_adc_demo/Compare To Constant'
 * '<S2>'   : 'esp32_adc_demo/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_esp32_adc_demo_h_ */

/* [EOF] */
