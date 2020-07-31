// Copyright 2013-2018 The MathWorks, Inc.
#ifndef _MW_PICAM_H_
#define _MW_PICAM_H_
#include <stdint.h> // Required for uint64_t datatype
#include "common.h"

// Error codes
#define ERR_CAMERABOARD_BASE           (6000)
#define ERR_CAMERABOARD_INIT           (ERR_CAMERABOARD_BASE+1)
#define ERR_CAMERABOARD_CONTROL        (ERR_CAMERABOARD_BASE+2)

// SPI function interface
#ifdef __cplusplus
extern "C"
{
#endif
int EXT_CAMERABOARD_terminate(void);
int EXT_CAMERABOARD_snapshot(uint64_t *ts,uint8_T *data, uint32_T *dataSize);
int EXT_CAMERABOARD_control(const char *controlParams);
int EXT_CAMERABOARD_init(const int width, const int height,
        const int frameRate, const int quality, const char *cameraParamsStr);
int8_T isRaspividRunning(void);
#ifdef __cplusplus
}
#endif
#endif //_MW_PICAM_H_

