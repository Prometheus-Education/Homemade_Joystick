/*******************************************************************************
* File Name: Button_9_16.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Button_9_16_H) /* Pins Button_9_16_H */
#define CY_PINS_Button_9_16_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Button_9_16_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Button_9_16__PORT == 15 && ((Button_9_16__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Button_9_16_Write(uint8 value);
void    Button_9_16_SetDriveMode(uint8 mode);
uint8   Button_9_16_ReadDataReg(void);
uint8   Button_9_16_Read(void);
void    Button_9_16_SetInterruptMode(uint16 position, uint16 mode);
uint8   Button_9_16_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Button_9_16_SetDriveMode() function.
     *  @{
     */
        #define Button_9_16_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Button_9_16_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Button_9_16_DM_RES_UP          PIN_DM_RES_UP
        #define Button_9_16_DM_RES_DWN         PIN_DM_RES_DWN
        #define Button_9_16_DM_OD_LO           PIN_DM_OD_LO
        #define Button_9_16_DM_OD_HI           PIN_DM_OD_HI
        #define Button_9_16_DM_STRONG          PIN_DM_STRONG
        #define Button_9_16_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Button_9_16_MASK               Button_9_16__MASK
#define Button_9_16_SHIFT              Button_9_16__SHIFT
#define Button_9_16_WIDTH              8u

/* Interrupt constants */
#if defined(Button_9_16__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Button_9_16_SetInterruptMode() function.
     *  @{
     */
        #define Button_9_16_INTR_NONE      (uint16)(0x0000u)
        #define Button_9_16_INTR_RISING    (uint16)(0x0001u)
        #define Button_9_16_INTR_FALLING   (uint16)(0x0002u)
        #define Button_9_16_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Button_9_16_INTR_MASK      (0x01u) 
#endif /* (Button_9_16__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Button_9_16_PS                     (* (reg8 *) Button_9_16__PS)
/* Data Register */
#define Button_9_16_DR                     (* (reg8 *) Button_9_16__DR)
/* Port Number */
#define Button_9_16_PRT_NUM                (* (reg8 *) Button_9_16__PRT) 
/* Connect to Analog Globals */                                                  
#define Button_9_16_AG                     (* (reg8 *) Button_9_16__AG)                       
/* Analog MUX bux enable */
#define Button_9_16_AMUX                   (* (reg8 *) Button_9_16__AMUX) 
/* Bidirectional Enable */                                                        
#define Button_9_16_BIE                    (* (reg8 *) Button_9_16__BIE)
/* Bit-mask for Aliased Register Access */
#define Button_9_16_BIT_MASK               (* (reg8 *) Button_9_16__BIT_MASK)
/* Bypass Enable */
#define Button_9_16_BYP                    (* (reg8 *) Button_9_16__BYP)
/* Port wide control signals */                                                   
#define Button_9_16_CTL                    (* (reg8 *) Button_9_16__CTL)
/* Drive Modes */
#define Button_9_16_DM0                    (* (reg8 *) Button_9_16__DM0) 
#define Button_9_16_DM1                    (* (reg8 *) Button_9_16__DM1)
#define Button_9_16_DM2                    (* (reg8 *) Button_9_16__DM2) 
/* Input Buffer Disable Override */
#define Button_9_16_INP_DIS                (* (reg8 *) Button_9_16__INP_DIS)
/* LCD Common or Segment Drive */
#define Button_9_16_LCD_COM_SEG            (* (reg8 *) Button_9_16__LCD_COM_SEG)
/* Enable Segment LCD */
#define Button_9_16_LCD_EN                 (* (reg8 *) Button_9_16__LCD_EN)
/* Slew Rate Control */
#define Button_9_16_SLW                    (* (reg8 *) Button_9_16__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Button_9_16_PRTDSI__CAPS_SEL       (* (reg8 *) Button_9_16__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Button_9_16_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Button_9_16__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Button_9_16_PRTDSI__OE_SEL0        (* (reg8 *) Button_9_16__PRTDSI__OE_SEL0) 
#define Button_9_16_PRTDSI__OE_SEL1        (* (reg8 *) Button_9_16__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Button_9_16_PRTDSI__OUT_SEL0       (* (reg8 *) Button_9_16__PRTDSI__OUT_SEL0) 
#define Button_9_16_PRTDSI__OUT_SEL1       (* (reg8 *) Button_9_16__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Button_9_16_PRTDSI__SYNC_OUT       (* (reg8 *) Button_9_16__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Button_9_16__SIO_CFG)
    #define Button_9_16_SIO_HYST_EN        (* (reg8 *) Button_9_16__SIO_HYST_EN)
    #define Button_9_16_SIO_REG_HIFREQ     (* (reg8 *) Button_9_16__SIO_REG_HIFREQ)
    #define Button_9_16_SIO_CFG            (* (reg8 *) Button_9_16__SIO_CFG)
    #define Button_9_16_SIO_DIFF           (* (reg8 *) Button_9_16__SIO_DIFF)
#endif /* (Button_9_16__SIO_CFG) */

/* Interrupt Registers */
#if defined(Button_9_16__INTSTAT)
    #define Button_9_16_INTSTAT            (* (reg8 *) Button_9_16__INTSTAT)
    #define Button_9_16_SNAP               (* (reg8 *) Button_9_16__SNAP)
    
	#define Button_9_16_0_INTTYPE_REG 		(* (reg8 *) Button_9_16__0__INTTYPE)
	#define Button_9_16_1_INTTYPE_REG 		(* (reg8 *) Button_9_16__1__INTTYPE)
	#define Button_9_16_2_INTTYPE_REG 		(* (reg8 *) Button_9_16__2__INTTYPE)
	#define Button_9_16_3_INTTYPE_REG 		(* (reg8 *) Button_9_16__3__INTTYPE)
	#define Button_9_16_4_INTTYPE_REG 		(* (reg8 *) Button_9_16__4__INTTYPE)
	#define Button_9_16_5_INTTYPE_REG 		(* (reg8 *) Button_9_16__5__INTTYPE)
	#define Button_9_16_6_INTTYPE_REG 		(* (reg8 *) Button_9_16__6__INTTYPE)
	#define Button_9_16_7_INTTYPE_REG 		(* (reg8 *) Button_9_16__7__INTTYPE)
#endif /* (Button_9_16__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Button_9_16_H */


/* [] END OF FILE */
