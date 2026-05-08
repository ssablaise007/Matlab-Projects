/*
 * File: Highway_Assistant.h
 *
 * Code generated for Simulink model 'Highway_Assistant'.
 *
 * Model version                  : 1.17
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Apr 21 17:56:37 2026
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Highway_Assistant_h_
#define RTW_HEADER_Highway_Assistant_h_
#ifndef Highway_Assistant_COMMON_INCLUDES_
#define Highway_Assistant_COMMON_INCLUDES_
#include "Platform_Types.h"
#include "Rte_Highway_Assistant.h"
#endif                                 /* Highway_Assistant_COMMON_INCLUDES_ */

#include "Highway_Assistant_types.h"

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  uint8 is_active_c3_Highway_Assistant;/* '<S1>/Lane_DisplayUnit' */
  uint8 is_c3_Highway_Assistant;       /* '<S1>/Lane_DisplayUnit' */
  uint8 is_active_c2_Highway_Assistant;/* '<S1>/Chart' */
  uint8 is_c2_Highway_Assistant;       /* '<S1>/Chart' */
} ARID_DEF_Highway_Assistant_T;

/* PublicStructure Variables for Internal Data */
extern ARID_DEF_Highway_Assistant_T Highway_Assistant_ARID_DEF;/* '<S1>/Lane_DisplayUnit' */

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
 * '<Root>' : 'Highway_Assistant'
 * '<S1>'   : 'Highway_Assistant/Highway_Assistant'
 * '<S2>'   : 'Highway_Assistant/Highway_Assistant/Chart'
 * '<S3>'   : 'Highway_Assistant/Highway_Assistant/Lane_DisplayUnit'
 */
#endif                                 /* RTW_HEADER_Highway_Assistant_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
