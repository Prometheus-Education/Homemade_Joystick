/*******************************************************************************
* File Name: RZ_Input.c  
* Version 2.10
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "RZ_Input.h"

/* APIs are not generated for P15[7:6] on PSoC 5 */
#if !(CY_PSOC5A &&\
	 RZ_Input__PORT == 15 && ((RZ_Input__MASK & 0xC0) != 0))


/*******************************************************************************
* Function Name: RZ_Input_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None
*  
*******************************************************************************/
void RZ_Input_Write(uint8 value) 
{
    uint8 staticBits = (RZ_Input_DR & (uint8)(~RZ_Input_MASK));
    RZ_Input_DR = staticBits | ((uint8)(value << RZ_Input_SHIFT) & RZ_Input_MASK);
}


/*******************************************************************************
* Function Name: RZ_Input_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  RZ_Input_DM_STRONG     Strong Drive 
*  RZ_Input_DM_OD_HI      Open Drain, Drives High 
*  RZ_Input_DM_OD_LO      Open Drain, Drives Low 
*  RZ_Input_DM_RES_UP     Resistive Pull Up 
*  RZ_Input_DM_RES_DWN    Resistive Pull Down 
*  RZ_Input_DM_RES_UPDWN  Resistive Pull Up/Down 
*  RZ_Input_DM_DIG_HIZ    High Impedance Digital 
*  RZ_Input_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void RZ_Input_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(RZ_Input_0, mode);
}


/*******************************************************************************
* Function Name: RZ_Input_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro RZ_Input_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 RZ_Input_Read(void) 
{
    return (RZ_Input_PS & RZ_Input_MASK) >> RZ_Input_SHIFT;
}


/*******************************************************************************
* Function Name: RZ_Input_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 RZ_Input_ReadDataReg(void) 
{
    return (RZ_Input_DR & RZ_Input_MASK) >> RZ_Input_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(RZ_Input_INTSTAT) 

    /*******************************************************************************
    * Function Name: RZ_Input_ClearInterrupt
    ********************************************************************************
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 RZ_Input_ClearInterrupt(void) 
    {
        return (RZ_Input_INTSTAT & RZ_Input_MASK) >> RZ_Input_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 

#endif /* CY_PSOC5A... */

    
/* [] END OF FILE */
