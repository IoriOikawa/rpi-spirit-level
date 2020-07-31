/*
 * rpi_types.h
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

#ifndef RTW_HEADER_rpi_types_h_
#define RTW_HEADER_rpi_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Model Code Variants */
#ifndef struct_tag_QmGwdrVrjaryQLLhGv2ns
#define struct_tag_QmGwdrVrjaryQLLhGv2ns

struct tag_QmGwdrVrjaryQLLhGv2ns
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  uint8_T fd;
};

#endif                                 /*struct_tag_QmGwdrVrjaryQLLhGv2ns*/

#ifndef typedef_raspi_internal_LEDMatrixBlock_T
#define typedef_raspi_internal_LEDMatrixBlock_T

typedef struct tag_QmGwdrVrjaryQLLhGv2ns raspi_internal_LEDMatrixBlock_T;

#endif                               /*typedef_raspi_internal_LEDMatrixBlock_T*/

#ifndef struct_tag_WXU0upKCscSE0hRrzwUS0G
#define struct_tag_WXU0upKCscSE0hRrzwUS0G

struct tag_WXU0upKCscSE0hRrzwUS0G
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  uint8_T fd;
};

#endif                                 /*struct_tag_WXU0upKCscSE0hRrzwUS0G*/

#ifndef typedef_raspi_internal_JoystickBlock__T
#define typedef_raspi_internal_JoystickBlock__T

typedef struct tag_WXU0upKCscSE0hRrzwUS0G raspi_internal_JoystickBlock__T;

#endif                               /*typedef_raspi_internal_JoystickBlock__T*/

/* Custom Type definition for MATLABSystem: '<Root>/LSM9DS1 IMU Sensor' */
#include "MW_SVD.h"
#include "MW_I2C.h"
#ifndef struct_tag_R1xdlxXgEuZ2YKjrgC1tPF
#define struct_tag_R1xdlxXgEuZ2YKjrgC1tPF

struct tag_R1xdlxXgEuZ2YKjrgC1tPF
{
  int32_T __dummy;
};

#endif                                 /*struct_tag_R1xdlxXgEuZ2YKjrgC1tPF*/

#ifndef typedef_e_codertarget_raspi_internal__T
#define typedef_e_codertarget_raspi_internal__T

typedef struct tag_R1xdlxXgEuZ2YKjrgC1tPF e_codertarget_raspi_internal__T;

#endif                               /*typedef_e_codertarget_raspi_internal__T*/

#ifndef struct_tag_wSflavgv0iM67EP96OKIZ
#define struct_tag_wSflavgv0iM67EP96OKIZ

struct tag_wSflavgv0iM67EP96OKIZ
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  e_codertarget_raspi_internal__T Hw;
  uint32_T BusSpeed;
  MW_Handle_Type MW_I2C_HANDLE;
};

#endif                                 /*struct_tag_wSflavgv0iM67EP96OKIZ*/

#ifndef typedef_i_codertarget_raspi_internal__T
#define typedef_i_codertarget_raspi_internal__T

typedef struct tag_wSflavgv0iM67EP96OKIZ i_codertarget_raspi_internal__T;

#endif                               /*typedef_i_codertarget_raspi_internal__T*/

#ifndef struct_tag_wPlwB1N2byXVSJAk9BGO9E
#define struct_tag_wPlwB1N2byXVSJAk9BGO9E

struct tag_wPlwB1N2byXVSJAk9BGO9E
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  e_codertarget_raspi_internal__T Hw;
  uint32_T BusSpeed;
  MW_Handle_Type MW_I2C_HANDLE;
};

#endif                                 /*struct_tag_wPlwB1N2byXVSJAk9BGO9E*/

#ifndef typedef_j_codertarget_raspi_internal__T
#define typedef_j_codertarget_raspi_internal__T

typedef struct tag_wPlwB1N2byXVSJAk9BGO9E j_codertarget_raspi_internal__T;

#endif                               /*typedef_j_codertarget_raspi_internal__T*/

#ifndef struct_tag_Mu1SNMC7dAyyNmAihLbeZF
#define struct_tag_Mu1SNMC7dAyyNmAihLbeZF

struct tag_Mu1SNMC7dAyyNmAihLbeZF
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T CalGyroA[9];
  real_T CalGyroB[3];
  real_T CalAccelA[9];
  real_T CalAccelB[3];
  real_T CalMagA[9];
  real_T CalMagB[3];
  i_codertarget_raspi_internal__T i2cobj_A_G;
  j_codertarget_raspi_internal__T i2cobj_MAG;
};

#endif                                 /*struct_tag_Mu1SNMC7dAyyNmAihLbeZF*/

#ifndef typedef_raspi_internal_lsm9ds1Block_r_T
#define typedef_raspi_internal_lsm9ds1Block_r_T

typedef struct tag_Mu1SNMC7dAyyNmAihLbeZF raspi_internal_lsm9ds1Block_r_T;

#endif                               /*typedef_raspi_internal_lsm9ds1Block_r_T*/

/* Forward declaration for rtModel */
typedef struct tag_RTM_rpi_T RT_MODEL_rpi_T;

#endif                                 /* RTW_HEADER_rpi_types_h_ */
