/*******************************************************************************
* File Name: Button_10.h  
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

#if !defined(CY_PINS_Button_10_H) /* Pins Button_10_H */
#define CY_PINS_Button_10_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Button_10_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v2_10 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Button_10__PORT == 15 && ((Button_10__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    Button_10_Write(uint8 value) ;
void    Button_10_SetDriveMode(uint8 mode) ;
uint8   Button_10_ReadDataReg(void) ;
uint8   Button_10_Read(void) ;
uint8   Button_10_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Button_10_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Button_10_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Button_10_DM_RES_UP          PIN_DM_RES_UP
#define Button_10_DM_RES_DWN         PIN_DM_RES_DWN
#define Button_10_DM_OD_LO           PIN_DM_OD_LO
#define Button_10_DM_OD_HI           PIN_DM_OD_HI
#define Button_10_DM_STRONG          PIN_DM_STRONG
#define Button_10_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Button_10_MASK               Button_10__MASK
#define Button_10_SHIFT              Button_10__SHIFT
#define Button_10_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Button_10_PS                     (* (reg8 *) Button_10__PS)
/* Data Register */
#define Button_10_DR                     (* (reg8 *) Button_10__DR)
/* Port Number */
#define Button_10_PRT_NUM                (* (reg8 *) Button_10__PRT) 
/* Connect to Analog Globals */                                                  
#define Button_10_AG                     (* (reg8 *) Button_10__AG)                       
/* Analog MUX bux enable */
#define Button_10_AMUX                   (* (reg8 *) Button_10__AMUX) 
/* Bidirectional Enable */                                                        
#define Button_10_BIE                    (* (reg8 *) Button_10__BIE)
/* Bit-mask for Aliased Register Access */
#define Button_10_BIT_MASK               (* (reg8 *) Button_10__BIT_MASK)
/* Bypass Enable */
#define Button_10_BYP                    (* (reg8 *) Button_10__BYP)
/* Port wide control signals */                                                   
#define Button_10_CTL                    (* (reg8 *) Button_10__CTL)
/* Drive Modes */
#define Button_10_DM0                    (* (reg8 *) Button_10__DM0) 
#define Button_10_DM1                    (* (reg8 *) Button_10__DM1)
#define Button_10_DM2                    (* (reg8 *) Button_10__DM2) 
/* Input Buffer Disable Override */
#define Button_10_INP_DIS                (* (reg8 *) Button_10__INP_DIS)
/* LCD Common or Segment Drive */
#define Button_10_LCD_COM_SEG            (* (reg8 *) Button_10__LCD_COM_SEG)
/* Enable Segment LCD */
#define Button_10_LCD_EN                 (* (reg8 *) Button_10__LCD_EN)
/* Slew Rate Control */
#define Button_10_SLW                    (* (reg8 *) Button_10__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Button_10_PRTDSI__CAPS_SEL       (* (reg8 *) Button_10__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Button_10_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Button_10__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Button_10_PRTDSI__OE_SEL0        (* (reg8 *) Button_10__PRTDSI__OE_SEL0) 
#define Button_10_PRTDSI__OE_SEL1        (* (reg8 *) Button_10__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Button_10_PRTDSI__OUT_SEL0       (* (reg8 *) Button_10__PRTDSI__OUT_SEL0) 
#define Button_10_PRTDSI__OUT_SEL1       (* (reg8 *) Button_10__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Button_10_PRTDSI__SYNC_OUT       (* (reg8 *) Button_10__PRTDSI__SYNC_OUT) 


#if defined(Button_10__INTSTAT)  /* Interrupt Registers */

    #define Button_10_INTSTAT                (* (reg8 *) Button_10__INTSTAT)
    #define Button_10_SNAP                   (* (reg8 *) Button_10__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Button_10_H */


/* [] END OF FILE */
