/*
 * File: Highway_Assistant.c
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

#include "Highway_Assistant.h"
#include "Platform_Types.h"

/* Named constants for Chart: '<S1>/Chart' */
#define Highway_Assista_IN_HW_Mode_OFF_ ((uint8)2U)
#define Highway_Assistan_IN_HW_Mode_ON_ ((uint8)3U)
#define Highway_Assistant_IN_Default   ((uint8)1U)

/* Named constants for Chart: '<S1>/Lane_DisplayUnit' */
#define Highway_Assist_IN_Lane_Mode_OFF ((uint8)2U)
#define Highway_Assista_IN_Lane_Mode_ON ((uint8)3U)

/* PublicStructure Variables for Internal Data */
ARID_DEF_Highway_Assistant_T Highway_Assistant_ARID_DEF;/* '<S1>/Lane_DisplayUnit' */

/* Model step function */
void Highway_Assistant_Step(void)
{
  sint32 tmp;
  sint32 tmp_0;
  sint32 tmp_1;
  uint8 rtb_Highway_Display_Mode_1;
  uint8 rtb_Highway_Display_Mode_2;
  uint8 rtb_Highway_Display_Mode_3;
  uint8 rtb_Highway_Display_Mode_4;
  uint8 rtb_Lane_Display_Mode_1;
  uint8 rtb_Lane_Display_Mode_2;
  uint8 rtb_Lane_Display_Mode_3;
  uint8 rtb_Lane_Display_Mode_4;

  /* Chart: '<S1>/Chart' incorporates:
   *  Inport: '<Root>/Enable_Display'
   *  Inport: '<Root>/Highway_Input_Signal'
   *  Inport: '<Root>/Input_Switch'
   */
  if (Highway_Assistant_ARID_DEF.is_active_c2_Highway_Assistant == 0U) {
    Highway_Assistant_ARID_DEF.is_active_c2_Highway_Assistant = 1U;
    Highway_Assistant_ARID_DEF.is_c2_Highway_Assistant =
      Highway_Assistant_IN_Default;
    rtb_Highway_Display_Mode_1 = 0U;
    rtb_Highway_Display_Mode_2 = 0U;
    rtb_Highway_Display_Mode_3 = 0U;
    rtb_Highway_Display_Mode_4 = 0U;
  } else {
    switch (Highway_Assistant_ARID_DEF.is_c2_Highway_Assistant) {
     case Highway_Assistant_IN_Default:
      tmp =
        Rte_IRead_Highway_Assistant_Step_Highway_Input_Signal_Highway_Input_Signal
        ();
      tmp_0 = Rte_IRead_Highway_Assistant_Step_Enable_Display_Enable_Display();
      tmp_1 = Rte_IRead_Highway_Assistant_Step_Input_Switch_Input_Switch();
      if ((tmp == 1) && (tmp_0 == 0) && (tmp_1 == 1)) {
        Highway_Assistant_ARID_DEF.is_c2_Highway_Assistant =
          Highway_Assista_IN_HW_Mode_OFF_;
        rtb_Highway_Display_Mode_1 = 232U;
        rtb_Highway_Display_Mode_2 = 183U;
        rtb_Highway_Display_Mode_3 = 41U;
        rtb_Highway_Display_Mode_4 = 94U;
      } else if ((tmp == 1) && (tmp_0 == 1) && (tmp_1 == 1)) {
        Highway_Assistant_ARID_DEF.is_c2_Highway_Assistant =
          Highway_Assistan_IN_HW_Mode_ON_;
        rtb_Highway_Display_Mode_1 = 213U;
        rtb_Highway_Display_Mode_2 = 183U;
        rtb_Highway_Display_Mode_3 = 9U;
        rtb_Highway_Display_Mode_4 = 94U;
      } else {
        rtb_Highway_Display_Mode_1 = 0U;
        rtb_Highway_Display_Mode_2 = 0U;
        rtb_Highway_Display_Mode_3 = 0U;
        rtb_Highway_Display_Mode_4 = 0U;
      }
      break;

     case Highway_Assista_IN_HW_Mode_OFF_:
      if (Rte_IRead_Highway_Assistant_Step_Enable_Display_Enable_Display() == 1)
      {
        Highway_Assistant_ARID_DEF.is_c2_Highway_Assistant =
          Highway_Assistan_IN_HW_Mode_ON_;
        rtb_Highway_Display_Mode_1 = 213U;
        rtb_Highway_Display_Mode_2 = 183U;
        rtb_Highway_Display_Mode_3 = 9U;
        rtb_Highway_Display_Mode_4 = 94U;
      } else {
        rtb_Highway_Display_Mode_1 = 232U;
        rtb_Highway_Display_Mode_2 = 183U;
        rtb_Highway_Display_Mode_3 = 41U;
        rtb_Highway_Display_Mode_4 = 94U;
      }
      break;

     default:
      /* case IN_HW_Mode_ON_: */
      if (Rte_IRead_Highway_Assistant_Step_Enable_Display_Enable_Display() == 0)
      {
        Highway_Assistant_ARID_DEF.is_c2_Highway_Assistant =
          Highway_Assista_IN_HW_Mode_OFF_;
        rtb_Highway_Display_Mode_1 = 232U;
        rtb_Highway_Display_Mode_2 = 183U;
        rtb_Highway_Display_Mode_3 = 41U;
        rtb_Highway_Display_Mode_4 = 94U;
      } else {
        rtb_Highway_Display_Mode_1 = 213U;
        rtb_Highway_Display_Mode_2 = 183U;
        rtb_Highway_Display_Mode_3 = 9U;
        rtb_Highway_Display_Mode_4 = 94U;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Chart' */

  /* Chart: '<S1>/Lane_DisplayUnit' incorporates:
   *  Inport: '<Root>/Enable_Display'
   *  Inport: '<Root>/Input_Switch'
   *  Inport: '<Root>/Lane_Input_Signal'
   */
  if (Highway_Assistant_ARID_DEF.is_active_c3_Highway_Assistant == 0U) {
    Highway_Assistant_ARID_DEF.is_active_c3_Highway_Assistant = 1U;
    Highway_Assistant_ARID_DEF.is_c3_Highway_Assistant =
      Highway_Assistant_IN_Default;
    rtb_Lane_Display_Mode_1 = 0U;
    rtb_Lane_Display_Mode_2 = 0U;
    rtb_Lane_Display_Mode_3 = 0U;
    rtb_Lane_Display_Mode_4 = 0U;
  } else {
    switch (Highway_Assistant_ARID_DEF.is_c3_Highway_Assistant) {
     case Highway_Assistant_IN_Default:
      if ((Rte_IRead_Highway_Assistant_Step_Lane_Input_Signal_Lane_Input_Signal()
           == 6) &&
          (Rte_IRead_Highway_Assistant_Step_Enable_Display_Enable_Display() == 0)
          && (Rte_IRead_Highway_Assistant_Step_Input_Switch_Input_Switch() == 1))
      {
        Highway_Assistant_ARID_DEF.is_c3_Highway_Assistant =
          Highway_Assist_IN_Lane_Mode_OFF;
        rtb_Lane_Display_Mode_1 = 132U;
        rtb_Lane_Display_Mode_2 = 185U;
        rtb_Lane_Display_Mode_3 = 54U;
        rtb_Lane_Display_Mode_4 = 67U;
      } else {
        Highway_Assistant_ARID_DEF.is_c3_Highway_Assistant =
          Highway_Assista_IN_Lane_Mode_ON;
        rtb_Lane_Display_Mode_1 = 127U;
        rtb_Lane_Display_Mode_2 = 248U;
        rtb_Lane_Display_Mode_3 = 186U;
        rtb_Lane_Display_Mode_4 = 84U;
      }
      break;

     case Highway_Assist_IN_Lane_Mode_OFF:
      if (Rte_IRead_Highway_Assistant_Step_Enable_Display_Enable_Display() == 1)
      {
        Highway_Assistant_ARID_DEF.is_c3_Highway_Assistant =
          Highway_Assista_IN_Lane_Mode_ON;
        rtb_Lane_Display_Mode_1 = 127U;
        rtb_Lane_Display_Mode_2 = 248U;
        rtb_Lane_Display_Mode_3 = 186U;
        rtb_Lane_Display_Mode_4 = 84U;
      } else {
        rtb_Lane_Display_Mode_1 = 132U;
        rtb_Lane_Display_Mode_2 = 185U;
        rtb_Lane_Display_Mode_3 = 54U;
        rtb_Lane_Display_Mode_4 = 67U;
      }
      break;

     default:
      /* case IN_Lane_Mode_ON: */
      if (Rte_IRead_Highway_Assistant_Step_Enable_Display_Enable_Display() == 0)
      {
        Highway_Assistant_ARID_DEF.is_c3_Highway_Assistant =
          Highway_Assist_IN_Lane_Mode_OFF;
        rtb_Lane_Display_Mode_1 = 132U;
        rtb_Lane_Display_Mode_2 = 185U;
        rtb_Lane_Display_Mode_3 = 54U;
        rtb_Lane_Display_Mode_4 = 67U;
      } else {
        rtb_Lane_Display_Mode_1 = 127U;
        rtb_Lane_Display_Mode_2 = 248U;
        rtb_Lane_Display_Mode_3 = 186U;
        rtb_Lane_Display_Mode_4 = 84U;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Lane_DisplayUnit' */

  /* Switch: '<S1>/Switch' incorporates:
   *  Inport: '<Root>/Highway_Input_Signal'
   *  Switch: '<S1>/Switch1'
   *  Switch: '<S1>/Switch2'
   *  Switch: '<S1>/Switch3'
   */
  tmp =
    Rte_IRead_Highway_Assistant_Step_Highway_Input_Signal_Highway_Input_Signal();
  if (tmp != 0) {
    rtb_Lane_Display_Mode_1 = rtb_Highway_Display_Mode_1;
  }

  /* Outport: '<Root>/Display_Mode_1' incorporates:
   *  Switch: '<S1>/Switch'
   */
  Rte_IWrite_Highway_Assistant_Step_Display_Mode_1_Display_Mode_1
    (rtb_Lane_Display_Mode_1);

  /* Switch: '<S1>/Switch1' */
  if (tmp != 0) {
    rtb_Lane_Display_Mode_2 = rtb_Highway_Display_Mode_2;
  }

  /* Outport: '<Root>/Display_Mode_2' incorporates:
   *  Switch: '<S1>/Switch1'
   */
  Rte_IWrite_Highway_Assistant_Step_Display_Mode_2_Display_Mode_2
    (rtb_Lane_Display_Mode_2);

  /* Switch: '<S1>/Switch2' */
  if (tmp != 0) {
    rtb_Lane_Display_Mode_3 = rtb_Highway_Display_Mode_3;
  }

  /* Outport: '<Root>/Display_Mode_3' incorporates:
   *  Switch: '<S1>/Switch2'
   */
  Rte_IWrite_Highway_Assistant_Step_Display_Mode_3_Display_Mode_3
    (rtb_Lane_Display_Mode_3);

  /* Switch: '<S1>/Switch3' */
  if (tmp != 0) {
    rtb_Lane_Display_Mode_4 = rtb_Highway_Display_Mode_4;
  }

  /* Outport: '<Root>/Display_Mode_4' incorporates:
   *  Switch: '<S1>/Switch3'
   */
  Rte_IWrite_Highway_Assistant_Step_Display_Mode_4_Display_Mode_4
    (rtb_Lane_Display_Mode_4);
}

/* Model initialize function */
void Highway_Assistant_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
