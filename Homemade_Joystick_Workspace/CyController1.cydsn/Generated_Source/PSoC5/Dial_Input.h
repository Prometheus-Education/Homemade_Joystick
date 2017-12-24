/*******************************************************************************
* File Name: Dial_Input.h  
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

#if !defined(CY_PINS_Dial_Input_H) /* Pins Dial_Input_H */
#define CY_PINS_Dial_Input_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Dial_Input_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v2_10 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Dial_Input__PORT == 15 && ((Dial_Input__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    Dial_Input_Write(uint8 value) ;
void    Dial_Input_SetDriveMode(uint8 mode) ;
uint8   Dial_Input_ReadDataReg(void) ;
uint8   Dial_Input_Read(void) ;
uint8   Dial_Input_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Dial_Input_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Dial_Input_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Dial_Input_DM_RES_UP          PIN_DM_RES_UP
#define Dial_Input_DM_RES_DWN         PIN_DM_RES_DWN
#define Dial_Input_DM_OD_LO           PIN_DM_OD_LO
#define Dial_Input_DM_OD_HI           PIN_DM_OD_HI
#define Dial_Input_DM_STRONG          PIN_DM_STRONG
#define Dial_Input_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Dial_Input_MASK               Dial_Input__MASK
#define Dial_Input_SHIFT              Dial_Input__SHIFT
#define Dial_Input_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Dial_Input_PS                     (* (reg8 *) Dial_Input__PS)
/* Data Register */
#define Dial_Input_DR                     (* (reg8 *) Dial_Input__DR)
/* Port Number */
#define Dial_Input_PRT_NUM                (* (reg8 *) Dial_Input__PRT) 
/* Connect to Analog Globals */                                                  
#define Dial_Input_AG                     (* (reg8 *) Dial_Input__AG)                       
/* Analog MUX bux enable */
#define Dial_Input_AMUX                   (* (reg8 *) Dial_Input__AMUX) 
/* Bidirectional Enable */                                                        
#define Dial_Input_BIE                    (* (reg8 *) Dial_Input__BIE)
/* Bit-mask for Aliased Register Access */
#define Dial_Input_BIT_MASK               (* (reg8 *) Dial_Input__BIT_MASK)
/* Bypass Enable */
#define Dial_Input_BYP                    (* (reg8 *) Dial_Input__BYP)
/* Port wide control signals */                                                   
#define Dial_Input_CTL                    (* (reg8 *) Dial_Input__CTL)
/* Drive Modes */
#define Dial_Input_DM0                    (* (reg8 *) Dial_Input__DM0) 
#define Dial_Input_DM1                    (* (reg8 *) Dial_Input__DM1)
#define Dial_Input_DM2                    (* (reg8 *) Dial_Input__DM2) 
/* Input Buffer Disable Override */
#define Dial_Input_INP_DIS                (* (reg8 *) Dial_Input__INP_DIS)
/* LCD Common or Segment Drive */
#define Dial_Input_LCD_COM_SEG            (* (reg8 *) Dial_Input__LCD_COM_SEG)
/* Enable Segment LCD */
#define Dial_Input_LCD_EN                 (* (reg8 *) Dial_Input__LCD_EN)
/* Slew Rate Control */
#define Dial_Input_SLW                    (* (reg8 *) Dial_Input__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Dial_Input_PRTDSI__CAPS_SEL       (* (reg8 *) Dial_Input__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Dial_Input_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Dial_Input__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Dial_Input_PRTDSI__OE_SEL0        (* (reg8 *) Dial_Input__PRTDSI__OE_SEL0) 
#define Dial_Input_PRTDSI__OE_SEL1        (* (reg8 *) Dial_Input__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Dial_Input_PRTDSI__OUT_SEL0       (* (reg8 *) Dial_Input__PRTDSI__OUT_SEL0) 
#define Dial_Input_PRTDSI__OUT_SEL1       (* (reg8 *) Dial_Input__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Dial_Input_PRTDSI__SYNC_OUT       (* (reg8 *) Dial_Input__PRTDSI__SYNC_OUT) 


#if defined(Dial_Input__INTSTAT)  /* Interrupt Registers */

    #define Dial_Input_INTSTAT                (* (reg8 *) Dial_Input__INTSTAT)
    #define Dial_Input_SNAP                   (* (reg8 *) Dial_Input__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Dial_Input_H */


/* [] END OF FILE */
