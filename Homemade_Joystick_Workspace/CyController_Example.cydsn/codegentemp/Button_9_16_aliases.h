/*******************************************************************************
* File Name: Button_9_16.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Button_9_16_ALIASES_H) /* Pins Button_9_16_ALIASES_H */
#define CY_PINS_Button_9_16_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Button_9_16_0			(Button_9_16__0__PC)
#define Button_9_16_0_INTR	((uint16)((uint16)0x0001u << Button_9_16__0__SHIFT))

#define Button_9_16_1			(Button_9_16__1__PC)
#define Button_9_16_1_INTR	((uint16)((uint16)0x0001u << Button_9_16__1__SHIFT))

#define Button_9_16_2			(Button_9_16__2__PC)
#define Button_9_16_2_INTR	((uint16)((uint16)0x0001u << Button_9_16__2__SHIFT))

#define Button_9_16_3			(Button_9_16__3__PC)
#define Button_9_16_3_INTR	((uint16)((uint16)0x0001u << Button_9_16__3__SHIFT))

#define Button_9_16_4			(Button_9_16__4__PC)
#define Button_9_16_4_INTR	((uint16)((uint16)0x0001u << Button_9_16__4__SHIFT))

#define Button_9_16_5			(Button_9_16__5__PC)
#define Button_9_16_5_INTR	((uint16)((uint16)0x0001u << Button_9_16__5__SHIFT))

#define Button_9_16_6			(Button_9_16__6__PC)
#define Button_9_16_6_INTR	((uint16)((uint16)0x0001u << Button_9_16__6__SHIFT))

#define Button_9_16_7			(Button_9_16__7__PC)
#define Button_9_16_7_INTR	((uint16)((uint16)0x0001u << Button_9_16__7__SHIFT))

#define Button_9_16_INTR_ALL	 ((uint16)(Button_9_16_0_INTR| Button_9_16_1_INTR| Button_9_16_2_INTR| Button_9_16_3_INTR| Button_9_16_4_INTR| Button_9_16_5_INTR| Button_9_16_6_INTR| Button_9_16_7_INTR))

#endif /* End Pins Button_9_16_ALIASES_H */


/* [] END OF FILE */
