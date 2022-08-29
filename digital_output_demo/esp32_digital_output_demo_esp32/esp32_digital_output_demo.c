/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: esp32_digital_output_demo.c
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

#include "esp32_digital_output_demo.h"
#include "rtwtypes.h"

/* Block signals (default storage) */
B_esp32_digital_output_demo_T esp32_digital_output_demo_B;

/* Block states (default storage) */
DW_esp32_digital_output_demo_T esp32_digital_output_demo_DW;

/* Real-time model */
static RT_MODEL_esp32_digital_output_T esp32_digital_output_demo_M_;
RT_MODEL_esp32_digital_output_T *const esp32_digital_output_demo_M =
  &esp32_digital_output_demo_M_;

/* Model step function */
void esp32_digital_output_demo_step(void)
{
  /* Logic: '<Root>/Logical Operator1' incorporates:
   *  Constant: '<S2>/Constant'
   *  Constant: '<S7>/Constant'
   *  Logic: '<Root>/OR1'
   *  RelationalOperator: '<S2>/Compare'
   *  RelationalOperator: '<S7>/Compare'
   *  UnitDelay: '<S9>/Output'
   */
  esp32_digital_output_demo_B.LogicalOperator1 =
    ((esp32_digital_output_demo_DW.Output_DSTATE != 1) &&
     (esp32_digital_output_demo_DW.Output_DSTATE != 6));

  /* Logic: '<Root>/Logical Operator3' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S5>/Constant'
   *  Logic: '<Root>/OR3'
   *  RelationalOperator: '<S4>/Compare'
   *  RelationalOperator: '<S5>/Compare'
   *  UnitDelay: '<S9>/Output'
   */
  esp32_digital_output_demo_B.LogicalOperator3 =
    ((esp32_digital_output_demo_DW.Output_DSTATE != 3) &&
     (esp32_digital_output_demo_DW.Output_DSTATE != 4));

  /* Logic: '<Root>/Logical Operator2' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S6>/Constant'
   *  Logic: '<Root>/OR2'
   *  RelationalOperator: '<S3>/Compare'
   *  RelationalOperator: '<S6>/Compare'
   *  UnitDelay: '<S9>/Output'
   */
  esp32_digital_output_demo_B.LogicalOperator2 =
    ((esp32_digital_output_demo_DW.Output_DSTATE != 2) &&
     (esp32_digital_output_demo_DW.Output_DSTATE != 5));

  /* Logic: '<Root>/Logical Operator' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S8>/Constant'
   *  Logic: '<Root>/OR'
   *  RelationalOperator: '<S1>/Compare'
   *  RelationalOperator: '<S8>/Compare'
   *  UnitDelay: '<S9>/Output'
   */
  esp32_digital_output_demo_B.LogicalOperator =
    ((esp32_digital_output_demo_DW.Output_DSTATE != 0) &&
     (esp32_digital_output_demo_DW.Output_DSTATE != 7));

  /* S-Function (esp32_digital_output3): '<Root>/Digital Out' */

  /* Updating the pins of DigitalOut */
  gpio_set_level(2,(uint32_t) esp32_digital_output_demo_B.LogicalOperator1);/* GPIO2 */
  gpio_set_level(12,(uint32_t) esp32_digital_output_demo_B.LogicalOperator3);/* GPIO12 */
  gpio_set_level(15,(uint32_t) esp32_digital_output_demo_B.LogicalOperator2);/* GPIO15 */
  gpio_set_level(17,(uint32_t) esp32_digital_output_demo_B.LogicalOperator);/* GPIO17 */

  /* Switch: '<S11>/FixPt Switch' incorporates:
   *  Constant: '<S10>/FixPt Constant'
   *  Constant: '<S11>/Constant'
   *  Sum: '<S10>/FixPt Sum1'
   *  UnitDelay: '<S9>/Output'
   */
  if ((uint8_T)(esp32_digital_output_demo_DW.Output_DSTATE + 1U) > 7) {
    esp32_digital_output_demo_DW.Output_DSTATE = 0U;
  } else {
    esp32_digital_output_demo_DW.Output_DSTATE++;
  }

  /* End of Switch: '<S11>/FixPt Switch' */
}

/* Model initialize function */
void esp32_digital_output_demo_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(esp32_digital_output_demo_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &esp32_digital_output_demo_B), 0,
                sizeof(B_esp32_digital_output_demo_T));

  /* states (dwork) */
  (void) memset((void *)&esp32_digital_output_demo_DW, 0,
                sizeof(DW_esp32_digital_output_demo_T));

  /* Start for S-Function (esp32_digital_output3): '<Root>/Digital Out' */

  //================================================================= GPIO Out pins: 'DigitalOut' Initialization
  //GPIO_initialize_DigitalOut();

  /* Enable for S-Function (esp32_digital_output3): '<Root>/Digital Out' */
  /* Level2 S-Function Block: '<Root>/Digital Out' (esp32_digital_output3) */
  GPIO_initialize_DigitalOut();
}

/* Model terminate function */
void esp32_digital_output_demo_terminate(void)
{
  /* (no terminate code required) */
}

/* [EOF] */
