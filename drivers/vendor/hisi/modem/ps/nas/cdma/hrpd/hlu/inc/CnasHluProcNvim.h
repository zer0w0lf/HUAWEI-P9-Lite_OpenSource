

#ifndef __CNAS_HLU_PROC_NVIM_H__
#define __CNAS_HLU_PROC_NVIM_H__

/*****************************************************************************
  1 Include files
*****************************************************************************/
#include "vos.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

#if (FEATURE_ON == FEATURE_UE_MODE_CDMA)

/*****************************************************************************
  2 Macro definitions
*****************************************************************************/

/*****************************************************************************
  3 ENUM define
*****************************************************************************/


/*****************************************************************************
  4 Global Variable declaration
*****************************************************************************/


/*****************************************************************************
  5 Message Header define
*****************************************************************************/


/*****************************************************************************
  6 Message define
*****************************************************************************/


/*****************************************************************************
  7 STRUCT
*****************************************************************************/


/*****************************************************************************
  8 UNION
*****************************************************************************/


/*****************************************************************************
  9 OTHERS
*****************************************************************************/


/*****************************************************************************
  10 Function declaration
*****************************************************************************/
VOS_VOID CNAS_HLU_ReadLocInfoNvim(VOS_VOID);

VOS_VOID CNAS_HLU_WriteLocInfoNvim(VOS_VOID);

VOS_VOID CNAS_HLU_ReadStrgBlobNvim(VOS_VOID);

VOS_VOID CNAS_HLU_WriteStrgBlobNvim(VOS_VOID);


#endif


#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of CnasHluCtx.h */

