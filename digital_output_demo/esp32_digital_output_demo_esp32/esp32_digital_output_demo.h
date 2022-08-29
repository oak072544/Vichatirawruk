/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: esp32_digital_output_demo.h
 *
 * Code generated with Waijung 2 ESP32 Target Blockset,
 * for Simulink model 'esp32_digital_output_demo'.
 *
 * Model version                  : 8.1
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Mon Aug 29 20:41:55 2022
 *
 * Target selection: esp32.tlc
 * Embedded hardware selection: Cadence Design Systems (Tensilica)->Xtensa® single-/dual-core 32-bit LX6 microprocessor
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_esp32_digital_output_demo_h_
#define RTW_HEADER_esp32_digital_output_demo_h_
#ifndef esp32_digital_output_demo_COMMON_INCLUDES_
#define esp32_digital_output_demo_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                          /* esp32_digital_output_demo_COMMON_INCLUDES_ */

#include "waijung2_hwdrvlib.h"
#include "esp32_digital_output_demo_types.h"
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
  boolean_T LogicalOperator1;          /* '<Root>/Logical Operator1' */
  boolean_T LogicalOperator3;          /* '<Root>/Logical Operator3' */
  boolean_T LogicalOperator2;          /* '<Root>/Logical Operator2' */
  boolean_T LogicalOperator;           /* '<Root>/Logical Operator' */
} B_esp32_digital_output_demo_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T Output_DSTATE;               /* '<S9>/Output' */
} DW_esp32_digital_output_demo_T;

/* Real-time Model Data Structure */
struct tag_RTM_esp32_digital_output__T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_esp32_digital_output_demo_T esp32_digital_output_demo_B;

/* Block states (default storage) */
extern DW_esp32_digital_output_demo_T esp32_digital_output_demo_DW;

/* Model entry point functions */
extern void esp32_digital_output_demo_initialize(void);
extern void esp32_digital_output_demo_step(void);
extern void esp32_digital_output_demo_terminate(void);

/* Real-time Model object */
extern RT_MODEL_esp32_digital_output_T *const esp32_digital_output_demo_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S9>/Data Type Propagation' : Unused code path elimination
 * Block '<S10>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S11>/FixPt Data Type Duplicate1' : Unused code path elimination
 */

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
 * '<Root>' : 'esp32_digital_output_demo'
 * '<S1>'   : 'esp32_digital_output_demo/Compare To Constant'
 * '<S2>'   : 'esp32_digital_output_demo/Compare To Constant1'
 * '<S3>'   : 'esp32_digital_output_demo/Compare To Constant2'
 * '<S4>'   : 'esp32_digital_output_demo/Compare To Constant3'
 * '<S5>'   : 'esp32_digital_output_demo/Compare To Constant4'
 * '<S6>'   : 'esp32_digital_output_demo/Compare To Constant5'
 * '<S7>'   : 'esp32_digital_output_demo/Compare To Constant6'
 * '<S8>'   : 'esp32_digital_output_demo/Compare To Constant7'
 * '<S9>'   : 'esp32_digital_output_demo/Counter Limited'
 * '<S10>'  : 'esp32_digital_output_demo/Counter Limited/Increment Real World'
 * '<S11>'  : 'esp32_digital_output_demo/Counter Limited/Wrap To Zero'
 */
#endif                             /* RTW_HEADER_esp32_digital_output_demo_h_ */

/* [EOF] */
