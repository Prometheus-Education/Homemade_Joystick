/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "uart_handler.h"
#include "Joystick_Inputs.h"


#define DEBUG_ENABLE TRUE

#define EP1 1u

static int8 USB_Input_Report_Data[ANALOG_INPUT_SIZE + BUTTON_INPUT_SIZE]; /* USB data to send to the PC */

void debug_uart_sendUSBreport(void)
{
    uint16_t loop_index;
    
    //UART Debug interface will stream out the contents of the USB report
    #if(DEBUG_ENABLE == TRUE)
    //Transmit USB_Input_Data over debug
    for(loop_index = 0; loop_index < sizeof(USB_Input_Report_Data); loop_index++)
    {
        uart_put_hex_8bit(USB_Input_Report_Data[loop_index]);
        debug_putc(0x09);
    }
    debug_putc(0x0A);
    debug_putc(0x0D);
    #endif
}

void reset_USB_Report(void)
{
    uint16_t loop_index;
    for(loop_index = 0; loop_index < sizeof(USB_Input_Report_Data); loop_index++)
    {
        USB_Input_Report_Data[loop_index] = 0x00u;
    }
    
}


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    DEBUG_UART_Start();
    ADC_SAR_Seq_1_Start();
    ADC_SAR_Seq_1_StartConvert();
    
    USBFS_1_Start(0, USBFS_1_DWR_VDDD_OPERATION);	/* Start USBFS operation/device 0 and with 5V operation */
	
    while(!USBFS_1_bGetConfiguration())
    {
        /* Wait for Device to enumerate */
    }
    
    /* Loads an inital value into EP1 and sends it out to the PC */
    USBFS_1_LoadInEP(EP1, (uint8 *)USB_Input_Report_Data, sizeof(USB_Input_Report_Data)); 
    
    for(;;)
    {
        
        while(!USBFS_1_bGetEPAckState(EP1)); 	/* Wait for ACK before loading data */
        
        ///////////////////////////////////////////////////////////////////////////////////////////
        //
        //                  Read MCU inputs (analog, digital, external sensors) below
        //
        ///////////////////////////////////////////////////////////////////////////////////////////
        reset_USB_Report();  //reset the USB report to zero
        
        //Get analog results
        USB_Input_Report_Data[ANALOG_ARRAY_START] = (uint8_t)(ADC_SAR_Seq_1_GetResult16(X_AXIS_CHANNEL) + 0x80u);
        USB_Input_Report_Data[ANALOG_ARRAY_START+1] = (uint8_t)(ADC_SAR_Seq_1_GetResult16(Y_AXIS_CHANNEL) + 0x80u);
        
        //Write the status of ABXY button to the ABXY bit fields
        USB_Input_Report_Data[A_BUTTON_INDEX] |= (A_Button_Read()<< A_BUTTON_BIT);
        USB_Input_Report_Data[B_BUTTON_INDEX] |= (B_Button_Read()<< B_BUTTON_BIT);
        USB_Input_Report_Data[X_BUTTON_INDEX] |= (X_Button_Read()<< X_BUTTON_BIT);
        USB_Input_Report_Data[Y_BUTTON_INDEX] |= (Y_Button_Read()<< Y_BUTTON_BIT);
        
        //Write the status of Start,Select button to the Start,Select bit fields
        USB_Input_Report_Data[START_BUTTON_INDEX] |= (Start_Button_Read()<< START_BUTTON_BIT);
        USB_Input_Report_Data[SELECT_BUTTON_INDEX] |= (Select_Button_Read()<< SELECT_BUTTON_BIT);
        
        //Write the status of LR button to the LR bit fields
        USB_Input_Report_Data[L_BUTTON_INDEX] |= (L_Button_Read()<< L_BUTTON_BIT);
        USB_Input_Report_Data[R_BUTTON_INDEX] |= (R_Button_Read()<< R_BUTTON_BIT);
        
        
        ///////////////////////////////////////////////////////////////////////////////////////////
        //
        //                  Report USB HID inputs to host computer below
        //
        ///////////////////////////////////////////////////////////////////////////////////////////
        
        /*Check to see if the IN Endpoint is empty. If so, load it with Input data to be tranfered */
        if(USBFS_1_GetEPState(EP1) == USBFS_1_IN_BUFFER_EMPTY)
        {
            //UART Debug interface will stream out the contents of the USB report
            debug_uart_sendUSBreport();
            
		    /* Load latest analog and button data into the IN EP and send */
            USBFS_1_LoadInEP(EP1, (uint8 *)USB_Input_Report_Data, sizeof(USB_Input_Report_Data));   
        }
        
    }
}

/* [] END OF FILE */
