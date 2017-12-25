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
#ifndef __JOYSTICK_INPUTS_H
    #define __JOYSTICK_INPUTS_H
    
    //Define USB report sizes and indices
    #define ANALOG_ARRAY_START 0u
    #define ANALOG_INPUT_SIZE 2u  //# of 8-bit analog measurements to report
    #define BUTTON_ARRAY_START ANALOG_INPUT_SIZE  //start the button array just after the analog data
    #define BUTTON_INPUT_SIZE 1u  //# of digital bytes to report
    
    //Joystick Channels (analog)
    #define X_AXIS_CHANNEL 0u
    #define Y_AXIS_CHANNEL 1u
    
    //Define the byte index for each button bit
    #define BUTTON_ARRAY_BYTE_1 (BUTTON_ARRAY_START + 0)
    #define A_BUTTON_INDEX BUTTON_ARRAY_BYTE_1
    #define B_BUTTON_INDEX BUTTON_ARRAY_BYTE_1
    #define X_BUTTON_INDEX BUTTON_ARRAY_BYTE_1
    #define Y_BUTTON_INDEX BUTTON_ARRAY_BYTE_1
    #define L_BUTTON_INDEX BUTTON_ARRAY_BYTE_1
    #define R_BUTTON_INDEX BUTTON_ARRAY_BYTE_1
    #define START_BUTTON_INDEX BUTTON_ARRAY_BYTE_1
    #define SELECT_BUTTON_INDEX BUTTON_ARRAY_BYTE_1
    
    //Define the bit place of each button bit
    #define A_BUTTON_BIT 0u
    #define B_BUTTON_BIT 1u
    #define X_BUTTON_BIT 2u
    #define Y_BUTTON_BIT 3u
    #define L_BUTTON_BIT 4u
    #define R_BUTTON_BIT 5u
    #define START_BUTTON_BIT 6u
    #define SELECT_BUTTON_BIT 7u
    
    
    
#endif


/* [] END OF FILE */
