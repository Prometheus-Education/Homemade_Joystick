/*******************************************************************************
* File Name: Button_14.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Button_14_H) /* Pins Button_14_H */
#define CY_PINS_Button_14_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Button_14_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v2_10 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Button_14__PORT == 15 && ((Button_14__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    Button_14_Write(uint8 value) ;
void    Button_14_SetDriveMode(uint8 mode) ;
uint8   Button_14_ReadDataReg(void) ;
uint8   Button_14_Read(void) ;
uint8   Button_14_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Button_14_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Button_14_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Button_14_DM_RES_UP          PIN_DM_RES_UP
#define Button_14_DM_RES_DWN         PIN_DM_RES_DWN
#define Button_14_DM_OD_LO           PIN_DM_OD_LO
#define Button_14_DM_OD_HI           PIN_DM_OD_HI
#define Button_14_DM_STRONG          PIN_DM_STRONG
#define Button_14_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Button_14_MASK               Button_14__MASK
#define Button_14_SHIFT              Button_14__SHIFT
#define Button_14_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Button_14_PS                     (* (reg8 *) Button_14__PS)
/* Data Register */
#define Button_14_DR                     (* (reg8 *) Button_14__DR)
/* Port Number */
#define Button_14_PRT_NUM                (* (reg8 *) Button_14__PRT) 
/* Connect to Analog Globals */                                                  
#define Button_14_AG                     (* (reg8 *) Button_14__AG)                       
/* Analog MUX bux enable */
#define Button_14_AMUX                   (* (reg8 *) Button_14__AMUX) 
/* Bidirectional Enable */                                                        
#define Button_14_BIE                    (* (reg8 *) Button_14__BIE)
/* Bit-mask for Aliased Register Access */
#define Button_14_BIT_MASK               (* (reg8 *) Button_14__BIT_MASK)
/* Bypass Enable */
#define Button_14_BYP                    (* (reg8 *) Button_14__BYP)
/* Port wide control signals */                                                   
#define Button_14_CTL                    (* (reg8 *) Button_14__CTL)
/* Drive Modes */
#define Button_14_DM0                    (* (reg8 *) Button_14__DM0) 
#define Button_14_DM1                    (* (reg8 *) Button_14__DM1)
#define Button_14_DM2                    (* (reg8 *) Button_14__DM2) 
/* Input Buffer Disable Override */
#define Button_14_INP_DIS                (* (reg8 *) Button_14__INP_DIS)
/* LCD Common or Segment Drive */
#define Button_14_LCD_COM_SEG            (* (reg8 *) Button_14__LCD_COM_SEG)
/* Enable Segment LCD */
#define Button_14_LCD_EN                 (* (reg8 *) Button_14__LCD_EN)
/* Slew Rate Control */
#define Button_14_SLW                    (* (reg8 *) Button_14__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Button_14_PRTDSI__CAPS_SEL       (* (reg8 *) Button_14__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Button_14_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Button_14__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Button_14_PRTDSI__OE_SEL0        (* (reg8 *) Button_14__PRTDSI__OE_SEL0) 
#define Button_14_PRTDSI__OE_SEL1        (* (reg8 *) Button_14__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Button_14_PRTDSI__OUT_SEL0       (* (reg8 *) Button_14__PRTDSI__OUT_SEL0) 
#define Button_14_PRTDSI__OUT_SEL1       (* (reg8 *) Button_14__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Button_14_PRTDSI__SYNC_OUT       (* (reg8 *) Button_14__PRTDSI__SYNC_OUT) 


#if defined(Button_14__INTSTAT)  /* Interrupt Registers */

    #define Button_14_INTSTAT                (* (reg8 *) Button_14__INTSTAT)
    #define Button_14_SNAP                   (* (reg8 *) Button_14__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Button_14_H */


/* [] END OF FILE */
