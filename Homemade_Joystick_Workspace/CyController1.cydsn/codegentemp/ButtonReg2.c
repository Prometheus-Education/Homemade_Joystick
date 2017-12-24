/*******************************************************************************
* File Name: ButtonReg2.c  
* Version 1.90
*
* Description:
*  This file contains API to enable firmware to read the value of a Status 
*  Register.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "ButtonReg2.h"

#if !defined(ButtonReg2_sts_sts_reg__REMOVED) /* Check for removal by optimization */


/*******************************************************************************
* Function Name: ButtonReg2_Read
********************************************************************************
*
* Summary:
*  Reads the current value assigned to the Status Register.
*
* Parameters:
*  None.
*
* Return:
*  The current value in the Status Register.
*
*******************************************************************************/
uint8 ButtonReg2_Read(void) 
{ 
    return ButtonReg2_Status;
}


/*******************************************************************************
* Function Name: ButtonReg2_InterruptEnable
********************************************************************************
*
* Summary:
*  Enables the Status Register interrupt.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void ButtonReg2_InterruptEnable(void) 
{
    uint8 interruptState;
    interruptState = CyEnterCriticalSection();
    ButtonReg2_Status_Aux_Ctrl |= ButtonReg2_STATUS_INTR_ENBL;
    CyExitCriticalSection(interruptState);
}


/*******************************************************************************
* Function Name: ButtonReg2_InterruptDisable
********************************************************************************
*
* Summary:
*  Disables the Status Register interrupt.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void ButtonReg2_InterruptDisable(void) 
{
    uint8 interruptState;
    interruptState = CyEnterCriticalSection();
    ButtonReg2_Status_Aux_Ctrl &= (uint8)(~ButtonReg2_STATUS_INTR_ENBL);
    CyExitCriticalSection(interruptState);
}


/*******************************************************************************
* Function Name: ButtonReg2_WriteMask
********************************************************************************
*
* Summary:
*  Writes the current mask value assigned to the Status Register.
*
* Parameters:
*  mask:  Value to write into the mask register.
*
* Return:
*  None.
*
*******************************************************************************/
void ButtonReg2_WriteMask(uint8 mask) 
{
    #if(ButtonReg2_INPUTS < 8u)
    	mask &= ((uint8)(1u << ButtonReg2_INPUTS) - 1u);
	#endif /* End ButtonReg2_INPUTS < 8u */
    ButtonReg2_Status_Mask = mask;
}


/*******************************************************************************
* Function Name: ButtonReg2_ReadMask
********************************************************************************
*
* Summary:
*  Reads the current interrupt mask assigned to the Status Register.
*
* Parameters:
*  None.
*
* Return:
*  The value of the interrupt mask of the Status Register.
*
*******************************************************************************/
uint8 ButtonReg2_ReadMask(void) 
{
    return ButtonReg2_Status_Mask;
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
