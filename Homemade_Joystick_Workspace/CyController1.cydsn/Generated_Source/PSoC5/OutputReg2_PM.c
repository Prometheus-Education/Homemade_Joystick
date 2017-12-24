/*******************************************************************************
* File Name: OutputReg2_PM.c
* Version 1.80
*
* Description:
*  This file contains the setup, control, and status commands to support 
*  the component operation in the low power mode. 
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "OutputReg2.h"

/* Check for removal by optimization */
#if !defined(OutputReg2_Sync_ctrl_reg__REMOVED)

static OutputReg2_BACKUP_STRUCT  OutputReg2_backup = {0u};

    
/*******************************************************************************
* Function Name: OutputReg2_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the control register value.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void OutputReg2_SaveConfig(void) 
{
    OutputReg2_backup.controlState = OutputReg2_Control;
}


/*******************************************************************************
* Function Name: OutputReg2_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the control register value.
*
* Parameters:
*  None
*
* Return:
*  None
*
*
*******************************************************************************/
void OutputReg2_RestoreConfig(void) 
{
     OutputReg2_Control = OutputReg2_backup.controlState;
}


/*******************************************************************************
* Function Name: OutputReg2_Sleep
********************************************************************************
*
* Summary:
*  Prepares the component for entering the low power mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void OutputReg2_Sleep(void) 
{
    OutputReg2_SaveConfig();
}


/*******************************************************************************
* Function Name: OutputReg2_Wakeup
********************************************************************************
*
* Summary:
*  Restores the component after waking up from the low power mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void OutputReg2_Wakeup(void)  
{
    OutputReg2_RestoreConfig();
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
