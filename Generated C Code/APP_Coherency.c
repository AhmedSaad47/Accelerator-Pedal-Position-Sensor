/*
 * File: APP_Coherency.c
 *
 * Code generated for Simulink model 'APP_Coherency'.
 *
 * Model version                  : 10.0
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sun Mar  9 06:44:13 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "APP_Coherency.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void APP_Coherency_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/APP_Coherency' */
  /* Outport: '<Root>/APP_vSensor1Failure' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Inport: '<Root>/APP_vSensor1'
   *  Logic: '<S1>/OR'
   *  RelationalOperator: '<S1>/Relational Operator'
   *  RelationalOperator: '<S1>/Relational Operator1'
   */
  rtY.APP_vSensor1Failure = ((rtU.APP_vSensor1 < 0.5) || (rtU.APP_vSensor1 > 4.5));

  /* Outport: '<Root>/APP_vSensor2Failure' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant3'
   *  Inport: '<Root>/APP_vSensor2'
   *  Logic: '<S1>/OR1'
   *  RelationalOperator: '<S1>/Relational Operator2'
   *  RelationalOperator: '<S1>/Relational Operator3'
   */
  rtY.APP_vSensor2Failure = ((rtU.APP_vSensor2 < 0.5) || (rtU.APP_vSensor2 > 4.5));

  /* Outport: '<Root>/APP_vCoherencyFailure' incorporates:
   *  Constant: '<S1>/Constant4'
   *  Inport: '<Root>/APP_vSensor1'
   *  Inport: '<Root>/APP_vSensor2'
   *  RelationalOperator: '<S1>/NotEqual'
   *  Sum: '<S1>/Add'
   */
  rtY.APP_vCoherencyFailure = (rtU.APP_vSensor1 + rtU.APP_vSensor2 != 5.0);

  /* End of Outputs for SubSystem: '<Root>/APP_Coherency' */
}

/* Model initialize function */
void APP_Coherency_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
