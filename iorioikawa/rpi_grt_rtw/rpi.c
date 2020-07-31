/*
 * rpi.c
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

#include "rpi.h"
#include "rpi_private.h"

/* Block signals (default storage) */
B_rpi_T rpi_B;

/* Block states (default storage) */
DW_rpi_T rpi_DW;

/* Real-time model */
RT_MODEL_rpi_T rpi_M_;
RT_MODEL_rpi_T *const rpi_M = &rpi_M_;

/* Forward declaration for local functions */
static raspi_internal_lsm9ds1Block_r_T *rpi_lsm9ds1Block_lsm9ds1Block
  (raspi_internal_lsm9ds1Block_r_T *obj);
static void rpi_SystemCore_setup(raspi_internal_lsm9ds1Block_r_T *obj);
static void rpi_SystemCore_release_m4(const raspi_internal_lsm9ds1Block_r_T *obj);
static void rpi_SystemCore_delete_m4(const raspi_internal_lsm9ds1Block_r_T *obj);
static void matlabCodegenHandle_matlabCo_m4(raspi_internal_lsm9ds1Block_r_T *obj);
static void rpi_SystemCore_release_m40f(j_codertarget_raspi_internal__T *obj);
static void rpi_SystemCore_delete_m40f(j_codertarget_raspi_internal__T *obj);
static void matlabCodegenHandle_matlab_m40f(j_codertarget_raspi_internal__T *obj);
static void rpi_SystemCore_release_m40(i_codertarget_raspi_internal__T *obj);
static void rpi_SystemCore_delete_m40(i_codertarget_raspi_internal__T *obj);
static void matlabCodegenHandle_matlabC_m40(i_codertarget_raspi_internal__T *obj);
static void rpi_SystemCore_release_m(const raspi_internal_JoystickBlock__T *obj);
static void rpi_SystemCore_delete_m(const raspi_internal_JoystickBlock__T *obj);
static void matlabCodegenHandle_matlabCod_m(raspi_internal_JoystickBlock__T *obj);
static void rpi_SystemCore_release(const raspi_internal_LEDMatrixBlock_T *obj);
static void rpi_SystemCore_delete(const raspi_internal_LEDMatrixBlock_T *obj);
static void matlabCodegenHandle_matlabCodeg(raspi_internal_LEDMatrixBlock_T *obj);
static raspi_internal_lsm9ds1Block_r_T *rpi_lsm9ds1Block_lsm9ds1Block
  (raspi_internal_lsm9ds1Block_r_T *obj)
{
  raspi_internal_lsm9ds1Block_r_T *b_obj;
  int32_T i;
  static const int8_T tmp[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  for (i = 0; i < 9; i++) {
    obj->CalGyroA[i] = tmp[i];
  }

  obj->CalGyroB[0] = 0.0;
  obj->CalGyroB[1] = 0.0;
  obj->CalGyroB[2] = 0.0;
  for (i = 0; i < 9; i++) {
    obj->CalAccelA[i] = tmp[i];
  }

  obj->CalAccelB[0] = 0.0;
  obj->CalAccelB[1] = 0.0;
  obj->CalAccelB[2] = 0.0;
  for (i = 0; i < 9; i++) {
    obj->CalMagA[i] = tmp[i];
  }

  obj->CalMagB[0] = 0.0;
  obj->CalMagB[1] = 0.0;
  obj->CalMagB[2] = 0.0;
  obj->isInitialized = 0;
  b_obj = obj;
  obj->i2cobj_A_G.isInitialized = 0;
  obj->i2cobj_A_G.matlabCodegenIsDeleted = false;
  obj->i2cobj_MAG.isInitialized = 0;
  obj->i2cobj_MAG.matlabCodegenIsDeleted = false;
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static void rpi_SystemCore_setup(raspi_internal_lsm9ds1Block_r_T *obj)
{
  MW_I2C_Mode_Type ModeType;
  uint32_T i2cname;
  uint8_T b_SwappedDataBytes[2];
  uint8_T CastedData;
  uint8_T SwappedDataBytes[2];
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  ModeType = MW_I2C_MASTER;
  i2cname = 1;
  obj->i2cobj_A_G.MW_I2C_HANDLE = MW_I2C_Open(i2cname, ModeType);
  obj->i2cobj_A_G.BusSpeed = 100000U;
  MW_I2C_SetBusSpeed(obj->i2cobj_A_G.MW_I2C_HANDLE, obj->i2cobj_A_G.BusSpeed);
  CastedData = 136U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 16U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 0U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 17U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 64U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 18U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 56U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 30U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 0U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 19U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 56U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 31U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 134U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 32U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 0U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 33U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 4U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 34U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  ModeType = MW_I2C_MASTER;
  i2cname = 1;
  obj->i2cobj_MAG.MW_I2C_HANDLE = MW_I2C_Open(i2cname, ModeType);
  obj->i2cobj_MAG.BusSpeed = 100000U;
  MW_I2C_SetBusSpeed(obj->i2cobj_MAG.MW_I2C_HANDLE, obj->i2cobj_MAG.BusSpeed);
  CastedData = 28U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 32U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_MAG.MW_I2C_HANDLE, 28U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 0U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 33U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_MAG.MW_I2C_HANDLE, 28U, SwappedDataBytes, 2U,
                     false, false);
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 34U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_MAG.MW_I2C_HANDLE, 28U, SwappedDataBytes, 2U,
                     false, false);
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 35U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_MAG.MW_I2C_HANDLE, 28U, SwappedDataBytes, 2U,
                     false, false);
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 36U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_MAG.MW_I2C_HANDLE, 28U, SwappedDataBytes, 2U,
                     false, false);
  obj->isSetupComplete = true;
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

static void rpi_SystemCore_release_m4(const raspi_internal_lsm9ds1Block_r_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_I2C_Close(obj->i2cobj_A_G.MW_I2C_HANDLE);
    MW_I2C_Close(obj->i2cobj_MAG.MW_I2C_HANDLE);
  }
}

static void rpi_SystemCore_delete_m4(const raspi_internal_lsm9ds1Block_r_T *obj)
{
  rpi_SystemCore_release_m4(obj);
}

static void matlabCodegenHandle_matlabCo_m4(raspi_internal_lsm9ds1Block_r_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    rpi_SystemCore_delete_m4(obj);
  }
}

static void rpi_SystemCore_release_m40f(j_codertarget_raspi_internal__T *obj)
{
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
  }
}

static void rpi_SystemCore_delete_m40f(j_codertarget_raspi_internal__T *obj)
{
  rpi_SystemCore_release_m40f(obj);
}

static void matlabCodegenHandle_matlab_m40f(j_codertarget_raspi_internal__T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    rpi_SystemCore_delete_m40f(obj);
  }
}

static void rpi_SystemCore_release_m40(i_codertarget_raspi_internal__T *obj)
{
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
  }
}

static void rpi_SystemCore_delete_m40(i_codertarget_raspi_internal__T *obj)
{
  rpi_SystemCore_release_m40(obj);
}

static void matlabCodegenHandle_matlabC_m40(i_codertarget_raspi_internal__T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    rpi_SystemCore_delete_m40(obj);
  }
}

static void rpi_SystemCore_release_m(const raspi_internal_JoystickBlock__T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    JOYSTICK_BLOCK_TERMINATE(obj->fd);
  }
}

static void rpi_SystemCore_delete_m(const raspi_internal_JoystickBlock__T *obj)
{
  rpi_SystemCore_release_m(obj);
}

static void matlabCodegenHandle_matlabCod_m(raspi_internal_JoystickBlock__T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    rpi_SystemCore_delete_m(obj);
  }
}

static void rpi_SystemCore_release(const raspi_internal_LEDMatrixBlock_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    memset(&rpi_B.uv[0], 0, sizeof(uint16_T) << 6U);
    FRAMEBUFFER_DISPLAYIMAGE(obj->fd, 1, rpi_B.uv);
    FRAMEBUFFER_TERMINATE(obj->fd);
  }
}

static void rpi_SystemCore_delete(const raspi_internal_LEDMatrixBlock_T *obj)
{
  rpi_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(raspi_internal_LEDMatrixBlock_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    rpi_SystemCore_delete(obj);
  }
}

/* Model step function */
void rpi_step(void)
{
  real_T numAccum;
  real_T c;
  int16_T b_output[3];
  uint8_T SwappedDataBytes;
  uint8_T status;
  uint8_T output_raw[6];
  int32_T ioIdx;
  real_T rtb_r;
  real_T rtb_TmpSignalConversionAtSFun_0;
  uint32_T tmp;
  static const int8_T x[64] = { 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2,
    3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6,
    6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8 };

  static const int8_T y[64] = { 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8,
    1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2,
    3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8 };

  real_T *b;

  /* MATLABSystem: '<Root>/LSM9DS1 IMU Sensor' */
  status = 24U;
  memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(rpi_DW.obj.i2cobj_A_G.MW_I2C_HANDLE, 106U,
    &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(rpi_DW.obj.i2cobj_A_G.MW_I2C_HANDLE, 106U, output_raw, 6U,
                      false, true);
    memcpy((void *)&b_output[0], (void *)&output_raw[0], (uint32_T)((size_t)3 *
            sizeof(int16_T)));
  }

  status = 40U;
  memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(rpi_DW.obj.i2cobj_A_G.MW_I2C_HANDLE, 106U,
    &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(rpi_DW.obj.i2cobj_A_G.MW_I2C_HANDLE, 106U, output_raw, 6U,
                      false, true);
    memcpy((void *)&b_output[0], (void *)&output_raw[0], (uint32_T)((size_t)3 *
            sizeof(int16_T)));
  } else {
    b_output[0] = 0;
    b_output[1] = 0;
    b_output[2] = 0;
  }

  b = &rpi_DW.obj.CalAccelA[0];
  for (ioIdx = 0; ioIdx < 3; ioIdx++) {
    rpi_B.LSM9DS1IMUSensor_o2[ioIdx] = ((b[3 * ioIdx + 1] * (real_T)b_output[1]
      + b[3 * ioIdx] * (real_T)b_output[0]) + b[3 * ioIdx + 2] * (real_T)
      b_output[2]) + rpi_DW.obj.CalAccelB[ioIdx];
  }

  status = 40U;
  memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(rpi_DW.obj.i2cobj_MAG.MW_I2C_HANDLE, 28U,
    &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(rpi_DW.obj.i2cobj_MAG.MW_I2C_HANDLE, 28U, output_raw, 6U,
                      false, true);
    memcpy((void *)&b_output[0], (void *)&output_raw[0], (uint32_T)((size_t)3 *
            sizeof(int16_T)));
  }

  rpi_B.LSM9DS1IMUSensor_o2[0] = rpi_B.LSM9DS1IMUSensor_o2[0] * 2.0 / 32768.0;
  rpi_B.LSM9DS1IMUSensor_o2[1] = rpi_B.LSM9DS1IMUSensor_o2[1] * 2.0 / 32768.0;

  /* S-Function (sdspbiquad): '<Root>/Filter' incorporates:
   *  MATLABSystem: '<Root>/LSM9DS1 IMU Sensor'
   */
  c = (0.0040654976455587188 * rpi_B.LSM9DS1IMUSensor_o2[0] -
       -1.8550593923656646 * rpi_DW.Filter_FILT_STATES[0]) - 0.8713213829478994 *
    rpi_DW.Filter_FILT_STATES[1];
  numAccum = (2.0 * rpi_DW.Filter_FILT_STATES[0] + c) +
    rpi_DW.Filter_FILT_STATES[1];
  rpi_DW.Filter_FILT_STATES[1] = rpi_DW.Filter_FILT_STATES[0];
  rpi_DW.Filter_FILT_STATES[0] = c;
  rtb_TmpSignalConversionAtSFun_0 = 0.89125093813374556 * numAccum;
  c = (0.0040654976455587188 * rpi_B.LSM9DS1IMUSensor_o2[1] -
       -1.8550593923656646 * rpi_DW.Filter_FILT_STATES[2]) - 0.8713213829478994 *
    rpi_DW.Filter_FILT_STATES[3];
  numAccum = (2.0 * rpi_DW.Filter_FILT_STATES[2] + c) +
    rpi_DW.Filter_FILT_STATES[3];
  rpi_DW.Filter_FILT_STATES[3] = rpi_DW.Filter_FILT_STATES[2];
  rpi_DW.Filter_FILT_STATES[2] = c;
  c = (rpi_B.LSM9DS1IMUSensor_o2[2] * 2.0 / 32768.0 * 0.0040654976455587188 -
       -1.8550593923656646 * rpi_DW.Filter_FILT_STATES[4]) - 0.8713213829478994 *
    rpi_DW.Filter_FILT_STATES[5];
  rpi_DW.Filter_FILT_STATES[5] = rpi_DW.Filter_FILT_STATES[4];
  rpi_DW.Filter_FILT_STATES[4] = c;

  /* Bias: '<Root>/Bias1' incorporates:
   *  Delay: '<Root>/Delay'
   *  Gain: '<Root>/Gain1'
   *  Product: '<Root>/Product'
   */
  c = 8.0 * rtb_TmpSignalConversionAtSFun_0 * rpi_DW.Delay_DSTATE + 4.5;

  /* Saturate: '<Root>/Saturation1' */
  if (c > 8.0) {
    c = 8.0;
  } else {
    if (c < 1.0) {
      c = 1.0;
    }
  }

  /* Bias: '<Root>/Bias2' incorporates:
   *  Delay: '<Root>/Delay'
   *  Gain: '<Root>/Gain2'
   *  Product: '<Root>/Product1'
   *  S-Function (sdspbiquad): '<Root>/Filter'
   */
  numAccum = 0.89125093813374556 * numAccum * 8.0 * rpi_DW.Delay_DSTATE + 4.5;

  /* Saturate: '<Root>/Saturation2' */
  if (numAccum > 8.0) {
    numAccum = 8.0;
  } else {
    if (numAccum < 1.0) {
      numAccum = 1.0;
    }
  }

  for (ioIdx = 0; ioIdx < 64; ioIdx++) {
    /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
     *  Saturate: '<Root>/Saturation1'
     *  Saturate: '<Root>/Saturation2'
     */
    rtb_TmpSignalConversionAtSFun_0 = (real_T)x[ioIdx] - c;
    rtb_r = rtb_TmpSignalConversionAtSFun_0 * rtb_TmpSignalConversionAtSFun_0;
    rtb_TmpSignalConversionAtSFun_0 = (real_T)y[ioIdx] - numAccum;
    rtb_r = -(rtb_TmpSignalConversionAtSFun_0 * rtb_TmpSignalConversionAtSFun_0
              + rtb_r) / 0.97999999999999987;
    rtb_r = exp(rtb_r);
    rtb_r *= 255.0;

    /* SignalConversion generated from: '<Root>/Matrix Concatenate' */
    rpi_B.MatrixConcatenate[ioIdx] = rtb_r;

    /* SignalConversion generated from: '<Root>/Matrix Concatenate' */
    rpi_B.MatrixConcatenate[ioIdx + 64] = rtb_r;

    /* SignalConversion generated from: '<Root>/Matrix Concatenate' */
    rpi_B.MatrixConcatenate[ioIdx + 128] = rtb_r;
  }

  /* MATLABSystem: '<Root>/Joystick' */
  status = JOYSTICK_BLOCK_READ(rpi_DW.obj_n.fd);

  /* MATLABSystem: '<Root>/8x8 RGB LED Matrix ' */
  for (ioIdx = 0; ioIdx < 192; ioIdx++) {
    c = rt_roundd_snf(rpi_B.MatrixConcatenate[ioIdx]);
    if (c < 65536.0) {
      rpi_B.img[ioIdx] = (uint16_T)c;
    } else {
      rpi_B.img[ioIdx] = MAX_uint16_T;
    }
  }

  for (ioIdx = 0; ioIdx < 64; ioIdx++) {
    tmp = (uint32_T)(uint16_T)((uint16_T)((uint32_T)rpi_B.img[(((ioIdx / 8) << 3)
      + ioIdx % 8) + 64] >> 2) << 5) + (uint16_T)((uint16_T)((uint32_T)
      rpi_B.img[((ioIdx / 8) << 3) + ioIdx % 8] >> 3) << 11);
    if (tmp > 65535U) {
      tmp = 65535U;
    }

    tmp += (uint16_T)((uint32_T)rpi_B.img[(((ioIdx / 8) << 3) + ioIdx % 8) + 128]
                      >> 3);
    if (tmp > 65535U) {
      tmp = 65535U;
    }

    rpi_B.r5[ioIdx] = (uint16_T)tmp;
  }

  FRAMEBUFFER_DISPLAYIMAGE(rpi_DW.obj_m.fd, 1, rpi_B.r5);

  /* End of MATLABSystem: '<Root>/8x8 RGB LED Matrix ' */

  /* MATLAB Function: '<Root>/MATLAB Function1' incorporates:
   *  MATLABSystem: '<Root>/Joystick'
   */
  if (status != 0) {
    /* Update for Delay: '<Root>/Delay' */
    rpi_DW.Delay_DSTATE = status;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function1' */
}

/* Model initialize function */
void rpi_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(rpi_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&rpi_DW, 0,
                sizeof(DW_rpi_T));

  {
    raspi_internal_JoystickBlock__T *obj;
    raspi_internal_LEDMatrixBlock_T *obj_0;
    int32_T i;

    /* InitializeConditions for Delay: '<Root>/Delay' */
    rpi_DW.Delay_DSTATE = 1.0;

    /* InitializeConditions for S-Function (sdspbiquad): '<Root>/Filter' */
    for (i = 0; i < 6; i++) {
      rpi_DW.Filter_FILT_STATES[i] = 0.0;
    }

    /* End of InitializeConditions for S-Function (sdspbiquad): '<Root>/Filter' */

    /* Start for MATLABSystem: '<Root>/LSM9DS1 IMU Sensor' */
    rpi_DW.obj.i2cobj_A_G.matlabCodegenIsDeleted = true;
    rpi_DW.obj.i2cobj_MAG.matlabCodegenIsDeleted = true;
    rpi_DW.obj.matlabCodegenIsDeleted = true;
    rpi_lsm9ds1Block_lsm9ds1Block(&rpi_DW.obj);
    rpi_DW.objisempty = true;
    rpi_SystemCore_setup(&rpi_DW.obj);

    /* Start for MATLABSystem: '<Root>/Joystick' */
    rpi_DW.obj_n.matlabCodegenIsDeleted = true;
    rpi_DW.obj_n.isInitialized = 0;
    rpi_DW.obj_n.matlabCodegenIsDeleted = false;
    rpi_DW.objisempty_b = true;
    obj = &rpi_DW.obj_n;
    rpi_DW.obj_n.isSetupComplete = false;
    rpi_DW.obj_n.isInitialized = 1;
    rpi_DW.obj_n.fd = 0U;
    obj->fd = JOYSTICK_BLOCK_INIT();
    rpi_DW.obj_n.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/8x8 RGB LED Matrix ' */
    rpi_DW.obj_m.matlabCodegenIsDeleted = true;
    rpi_DW.obj_m.isInitialized = 0;
    rpi_DW.obj_m.matlabCodegenIsDeleted = false;
    rpi_DW.objisempty_bx = true;
    obj_0 = &rpi_DW.obj_m;
    rpi_DW.obj_m.isSetupComplete = false;
    rpi_DW.obj_m.isInitialized = 1;
    rpi_DW.obj_m.fd = 0U;
    obj_0->fd = FRAMEBUFFER_INIT();
    rpi_DW.obj_m.isSetupComplete = true;
  }
}

/* Model terminate function */
void rpi_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/LSM9DS1 IMU Sensor' */
  matlabCodegenHandle_matlabCo_m4(&rpi_DW.obj);
  matlabCodegenHandle_matlab_m40f(&rpi_DW.obj.i2cobj_MAG);
  matlabCodegenHandle_matlabC_m40(&rpi_DW.obj.i2cobj_A_G);

  /* Terminate for MATLABSystem: '<Root>/Joystick' */
  matlabCodegenHandle_matlabCod_m(&rpi_DW.obj_n);

  /* Terminate for MATLABSystem: '<Root>/8x8 RGB LED Matrix ' */
  matlabCodegenHandle_matlabCodeg(&rpi_DW.obj_m);
}
