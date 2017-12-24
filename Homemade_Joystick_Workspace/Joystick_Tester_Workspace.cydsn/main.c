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

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    uint8_t A_Button_State;
    uint8_t B_Button_State;
    uint8_t X_Button_State;
    uint8_t Y_Button_State;
    
    uint8_t Select_Button_State;
    uint8_t Start_Button_State;
    
    uint8_t Joystick_Button_State;

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    DEBUG_UART_Start();

    for(;;)
    {
        /* Place your application code here. */
        
        //Every 100ms print out the buttons being pressed and the joystick value
        CyDelay(100);
        A_Button_State = A_Button_Read();
        B_Button_State = B_Button_Read();
        X_Button_State = X_Button_Read();
        Y_Button_State = Y_Button_Read();
        
        Select_Button_State = Select_Button_Read();
        Start_Button_State = Start_Button_Read();
        
        Joystick_Button_State = Joystick_Button_Read();
        
        //Print out via Debug the states of each button
        if( A_Button_State )
        {
            DEBUG_UART_PutString("A\t");
        }
        else
        {
            DEBUG_UART_PutString("\t");
        }
        
        if( B_Button_State )
        {
            DEBUG_UART_PutString("B\t");
        }
        else
        {
            DEBUG_UART_PutString("\t");
        }
        
        if( X_Button_State )
        {
            DEBUG_UART_PutString("X\t");
        }
        else
        {
            DEBUG_UART_PutString("\t");
        }
        
        if( Y_Button_State )
        {
            DEBUG_UART_PutString("Y\t");
        }
        else
        {
            DEBUG_UART_PutString("\t");
        }
        
        if( Select_Button_State )
        {
            DEBUG_UART_PutString("Select\t");
        }
        else
        {
            DEBUG_UART_PutString("\t");
        }
        
        if( Start_Button_State )
        {
            DEBUG_UART_PutString("Start\t");
        }
        else
        {
            DEBUG_UART_PutString("\t");
        }
        
        if( !Joystick_Button_State )
        {
            DEBUG_UART_PutString("Joy\t");
        }
        else
        {
            DEBUG_UART_PutString("\t");
        }
        
        
        DEBUG_UART_PutString("\r\n");
        
    }
}

/* [] END OF FILE */
