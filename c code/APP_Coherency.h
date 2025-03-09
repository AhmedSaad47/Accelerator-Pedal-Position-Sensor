/*
 * File: APP_Coherency.h
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

#ifndef RTW_HEADER_APP_Coherency_h_
#define RTW_HEADER_APP_Coherency_h_
#ifndef APP_Coherency_COMMON_INCLUDES_
#define APP_Coherency_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* APP_Coherency_COMMON_INCLUDES_ */

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T APP_vSensor1;                 /* '<Root>/APP_vSensor1' */
  real_T APP_vSensor2;                 /* '<Root>/APP_vSensor2' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T APP_vSensor1Failure;       /* '<Root>/APP_vSensor1Failure' */
  boolean_T APP_vSensor2Failure;       /* '<Root>/APP_vSensor2Failure' */
  boolean_T APP_vCoherencyFailure;     /* '<Root>/APP_vCoherencyFailure' */
} ExtY;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void APP_Coherency_initialize(void);
extern void APP_Coherency_step(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('coh/APP_Coherency')    - opens subsystem coh/APP_Coherency
 * hilite_system('coh/APP_Coherency/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'coh'
 * '<S1>'   : 'coh/APP_Coherency'
 */
#endif                                 /* RTW_HEADER_APP_Coherency_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
