/*******************************************************************************
* File Name: Button_17_22.h  
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

#if !defined(CY_PINS_Button_17_22_ALIASES_H) /* Pins Button_17_22_ALIASES_H */
#define CY_PINS_Button_17_22_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Button_17_22_0			(Button_17_22__0__PC)
#define Button_17_22_0_INTR	((uint16)((uint16)0x0001u << Button_17_22__0__SHIFT))

#define Button_17_22_1			(Button_17_22__1__PC)
#define Button_17_22_1_INTR	((uint16)((uint16)0x0001u << Button_17_22__1__SHIFT))

#define Button_17_22_2			(Button_17_22__2__PC)
#define Button_17_22_2_INTR	((uint16)((uint16)0x0001u << Button_17_22__2__SHIFT))

#define Button_17_22_3			(Button_17_22__3__PC)
#define Button_17_22_3_INTR	((uint16)((uint16)0x0001u << Button_17_22__3__SHIFT))

#define Button_17_22_4			(Button_17_22__4__PC)
#define Button_17_22_4_INTR	((uint16)((uint16)0x0001u << Button_17_22__4__SHIFT))

#define Button_17_22_5			(Button_17_22__5__PC)
#define Button_17_22_5_INTR	((uint16)((uint16)0x0001u << Button_17_22__5__SHIFT))

#define Button_17_22_INTR_ALL	 ((uint16)(Button_17_22_0_INTR| Button_17_22_1_INTR| Button_17_22_2_INTR| Button_17_22_3_INTR| Button_17_22_4_INTR| Button_17_22_5_INTR))

#endif /* End Pins Button_17_22_ALIASES_H */


/* [] END OF FILE */
