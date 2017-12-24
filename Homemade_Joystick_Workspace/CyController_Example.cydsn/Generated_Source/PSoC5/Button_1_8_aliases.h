/*******************************************************************************
* File Name: Button_1_8.h  
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

#if !defined(CY_PINS_Button_1_8_ALIASES_H) /* Pins Button_1_8_ALIASES_H */
#define CY_PINS_Button_1_8_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Button_1_8_0			(Button_1_8__0__PC)
#define Button_1_8_0_INTR	((uint16)((uint16)0x0001u << Button_1_8__0__SHIFT))

#define Button_1_8_1			(Button_1_8__1__PC)
#define Button_1_8_1_INTR	((uint16)((uint16)0x0001u << Button_1_8__1__SHIFT))

#define Button_1_8_2			(Button_1_8__2__PC)
#define Button_1_8_2_INTR	((uint16)((uint16)0x0001u << Button_1_8__2__SHIFT))

#define Button_1_8_3			(Button_1_8__3__PC)
#define Button_1_8_3_INTR	((uint16)((uint16)0x0001u << Button_1_8__3__SHIFT))

#define Button_1_8_4			(Button_1_8__4__PC)
#define Button_1_8_4_INTR	((uint16)((uint16)0x0001u << Button_1_8__4__SHIFT))

#define Button_1_8_5			(Button_1_8__5__PC)
#define Button_1_8_5_INTR	((uint16)((uint16)0x0001u << Button_1_8__5__SHIFT))

#define Button_1_8_6			(Button_1_8__6__PC)
#define Button_1_8_6_INTR	((uint16)((uint16)0x0001u << Button_1_8__6__SHIFT))

#define Button_1_8_7			(Button_1_8__7__PC)
#define Button_1_8_7_INTR	((uint16)((uint16)0x0001u << Button_1_8__7__SHIFT))

#define Button_1_8_INTR_ALL	 ((uint16)(Button_1_8_0_INTR| Button_1_8_1_INTR| Button_1_8_2_INTR| Button_1_8_3_INTR| Button_1_8_4_INTR| Button_1_8_5_INTR| Button_1_8_6_INTR| Button_1_8_7_INTR))

#endif /* End Pins Button_1_8_ALIASES_H */


/* [] END OF FILE */
