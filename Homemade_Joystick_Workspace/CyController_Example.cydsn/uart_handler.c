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

#include <project.h>
#include "uart_handler.h"

void uart_put_hex_32bit(uint32_t data)
{
    uint8_t num_0 = 0;
    uint8_t num_1 = 0;
    uint8_t num_2 = 0;
    uint8_t num_3 = 0;
    uint8_t num_4 = 0;
    uint8_t num_5 = 0;
    uint8_t num_6 = 0;
    uint8_t num_7 = 0;
    
    num_7 = (uint8_t)((data >> 28)) & 0x0f;
    
    if( num_7 <= 9)
    {
        num_7 = (uint8_t)(num_7 + 48);
    }
    else
    {
        num_7 = (uint8_t)(num_7 + 55);
    }
    
    num_6 = (uint8_t)((data >> 24)) & 0x0f;
    
    if( num_6 <= 9)
    {
        num_6 = (uint8_t)(num_6 + 48);
    }
    else
    {
        num_6 = (uint8_t)(num_6 + 55);
    }
    
    num_5 = (uint8_t)((data >> 20)) & 0x0f;
    
    if( num_5 <=9)
    {
        num_5 = (uint8_t)(num_5 + 48);
    }
    else
    {
        num_5 = (uint8_t)(num_5 + 55);
    }
    
    num_4 = (uint8_t)((data >> 16)) & 0x0f;
    
    if( num_4 <=9)
    {
        num_4 = (uint8_t)(num_4 + 48);
    }
    else
    {
        num_4 = (uint8_t)(num_4 + 55);
    }
    
    num_3 = (uint8_t)((data >> 12)) & 0x0f;
    
    if( num_3 <=9)
    {
        num_3 = (uint8_t)(num_3 + 48);
    }
    else
    {
        num_3 = (uint8_t)(num_3 + 55);
    }
    
    num_2 = (uint8_t)((data >> 8)) & 0x0f;
    
    if( num_2 <=9)
    {
        num_2 = (uint8_t)(num_2 + 48);
    }
    else
    {
        num_2 = (uint8_t)(num_2 + 55);
    }
    
    num_1 = (uint8_t)((data >> 4) & 0x0f);
    
    if( num_1 <=9)
    {
        num_1 = (uint8_t)(num_1 + 48);
    }
    else
    {
        num_1 = (uint8_t)(num_1 + 55);
    }
    
    num_0 = (uint8_t)(data & 0x0f);
    
    if( num_0 <= 9)
    {
        num_0 = (uint8_t)(num_0 + 48);
    }
    else
    {
        num_0 = (uint8_t)(num_0 + 55);
    }
    
    debug_putc(num_7);
    debug_putc(num_6);
    debug_putc(num_5);
    debug_putc(num_4);
    debug_putc(num_3);
    debug_putc(num_2);
    debug_putc(num_1);
    debug_putc(num_0);
   
}

void uart_put_hex_16bit(uint16_t data)
{
    uint8_t num_0 = 0;
    uint8_t num_1 = 0;
    uint8_t num_2 = 0;
    uint8_t num_3 = 0;


    num_3 = (uint8_t)((data >> 12)) & 0x0f;
    
    if( num_3 <=9)
    {
        num_3 = (uint8_t)(num_3 + 48);
    }
    else
    {
        num_3 = (uint8_t)(num_3 + 55);
    }
    
    num_2 = (uint8_t)((data >> 8)) & 0x0f;
    
    if( num_2 <=9)
    {
        num_2 = (uint8_t)(num_2 + 48);
    }
    else
    {
        num_2 = (uint8_t)(num_2 + 55);
    }
    
    num_1 = (uint8_t)((data >> 4) & 0x0f);
    
    if( num_1 <=9)
    {
        num_1 = (uint8_t)(num_1 + 48);
    }
    else
    {
        num_1 = (uint8_t)(num_1 + 55);
    }
    
    num_0 = (uint8_t)(data & 0x0f);
    
    if( num_0 <= 9)
    {
        num_0 = (uint8_t)(num_0 + 48);
    }
    else
    {
        num_0 = (uint8_t)(num_0 + 55);
    }
    
    debug_putc(num_3);
    debug_putc(num_2);
    debug_putc(num_1);
    debug_putc(num_0);
   
}

void uart_put_hex_8bit(uint8_t data)
{
    uint8_t num_0 = 0;
    uint8_t num_1 = 0;

    
    num_1 = (uint8_t)((data >> 4) & 0x0f);
    
    if( num_1 <=9)
    {
        num_1 = (uint8_t)(num_1 + 48);
    }
    else
    {
        num_1 = (uint8_t)(num_1 + 55);
    }
    
    num_0 = (uint8_t)(data & 0x0f);
    
    if( num_0 <= 9)
    {
        num_0 = (uint8_t)(num_0 + 48);
    }
    else
    {
        num_0 = (uint8_t)(num_0 + 55);
    }
    
    debug_putc(num_1);
    debug_putc(num_0);
   
}

void uart_put_num16(uint16_t num2print) //todo make a function to put a decimal number
{
	uint16_t temporary_number;
	temporary_number = num2print;
	debug_putc(0x30 + temporary_number/10000);
	temporary_number = temporary_number%10000;
	debug_putc(0x30 + temporary_number/1000);
	temporary_number = temporary_number%1000;
	debug_putc(0x30 + temporary_number/100);
	temporary_number = temporary_number%100;
	debug_putc(0x30 + temporary_number/10);
	temporary_number = temporary_number%10;
	debug_putc(0x30 + temporary_number);
}

//prints a twos complement number
void uart_put_signed_num16(int16_t num2print) //todo make a function to put a decimal number
{
	uint16_t temporary_number;
	if( num2print & 0x8000) //if the number is negative
	{
		debug_putc(0x2D); //output a negative sign

		num2print = 65535 - num2print;
	}
	temporary_number = num2print;
	debug_putc(0x30 + temporary_number/10000);
	temporary_number = temporary_number%10000;
	debug_putc(0x30 + temporary_number/1000);
	temporary_number = temporary_number%1000;
	debug_putc(0x30 + temporary_number/100);
	temporary_number = temporary_number%100;
	debug_putc(0x30 + temporary_number/10);
	temporary_number = temporary_number%10;
	debug_putc(0x30 + temporary_number);

}



/* [] END OF FILE */
