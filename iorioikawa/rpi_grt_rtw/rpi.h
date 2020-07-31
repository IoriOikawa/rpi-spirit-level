/*
 * rpi.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "rpi".
 *
 * Model version              : 1.14
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Fri Jul 31 04:32:35 2020
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_rpi_h_
#define RTW_HEADER_rpi_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef rpi_COMMON_INCLUDES_
# define rpi_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_fbBlock.h"
#include "MW_joystickBlock.h"
#include "MW_I2C.h"
#endif                                 /* rpi_COMMON_INCLUDES_ */

#include "rpi_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T MatrixConcatenate[192];       /* '<Root>/Matrix Concatenate' */
  uint16_T img[192];
  uint16_T r5[64];
  uint16_T uv[64];
  real_T LSM9DS1IMUSensor_o2[3];       /* '<Root>/LSM9DS1 IMU Sensor' */
} B_rpi_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  raspi_internal_lsm9ds1Block_r_T obj; /* '<Root>/LSM9DS1 IMU Sensor' */
  raspi_internal_LEDMatrixBlock_T obj_m;/* '<Root>/8x8 RGB LED Matrix ' */
  raspi_internal_JoystickBlock__T obj_n;/* '<Root>/Joystick' */
  real_T Delay_DSTATE;                 /* '<Root>/Delay' */
  real_T Filter_FILT_STATES[6];        /* '<Root>/Filter' */
  boolean_T objisempty;                /* '<Root>/LSM9DS1 IMU Sensor' */
  boolean_T objisempty_b;              /* '<Root>/Joystick' */
  boolean_T objisempty_bx;             /* '<Root>/8x8 RGB LED Matrix ' */
} DW_rpi_T;

/* Real-time Model Data Structure */
struct tag_RTM_rpi_T {
  const char_T *errorStatus;
};

/* Block signals (default storage) */
extern B_rpi_T rpi_B;

/* Block states (default storage) */
extern DW_rpi_T rpi_DW;

/* Model entry point functions */
extern void rpi_initialize(void);
extern void rpi_step(void);
extern void rpi_terminate(void);

/* Real-time Model object */
extern RT_MODEL_rpi_T *const rpi_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/Display2' : Unused code path elimination
 * Block '<Root>/Display3' : Unused code path elimination
 * Block '<Root>/Display5' : Unused code path elimination
 * Block '<Root>/Display6' : Unused code path elimination
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
 * '<Root>' : 'rpi'
 * '<S1>'   : 'rpi/MATLAB Function'
 * '<S2>'   : 'rpi/MATLAB Function1'
 */
#endif                                 /* RTW_HEADER_rpi_h_ */
