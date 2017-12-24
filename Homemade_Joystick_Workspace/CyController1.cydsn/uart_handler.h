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
#ifndef __UART_HANDLER_H
#define __UART_HANDLER_H

#include <project.h>
    
//function macro for assigning the uart_put_char function
#define debug_putc(X) DEBUG_UART_PutChar(X)
    
void uart_put_hex_32bit(uint32_t data);
void uart_put_hex_16bit(uint16_t data);
void uart_put_hex_8bit(uint8_t data);
void uart_put_num16(uint16_t num2print);
void uart_put_signed_num16(int16_t num2print);

#endif
/* [] END OF FILE */
