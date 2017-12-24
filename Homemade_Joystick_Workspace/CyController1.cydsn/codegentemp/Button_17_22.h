/*******************************************************************************
* File Name: Button_17_22.h  
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

#if !defined(CY_PINS_Button_17_22_H) /* Pins Button_17_22_H */
#define CY_PINS_Button_17_22_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Button_17_22_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Button_17_22__PORT == 15 && ((Button_17_22__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Button_17_22_Write(uint8 value);
void    Button_17_22_SetDriveMode(uint8 mode);
uint8   Button_17_22_ReadDataReg(void);
uint8   Button_17_22_Read(void);
void    Button_17_22_SetInterruptMode(uint16 position, uint16 mode);
uint8   Button_17_22_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Button_17_22_SetDriveMode() function.
     *  @{
     */
        #define Button_17_22_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Button_17_22_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Button_17_22_DM_RES_UP          PIN_DM_RES_UP
        #define Button_17_22_DM_RES_DWN         PIN_DM_RES_DWN
        #define Button_17_22_DM_OD_LO           PIN_DM_OD_LO
        #define Button_17_22_DM_OD_HI           PIN_DM_OD_HI
        #define Button_17_22_DM_STRONG          PIN_DM_STRONG
        #define Button_17_22_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Button_17_22_MASK               Button_17_22__MASK
#define Button_17_22_SHIFT              Button_17_22__SHIFT
#define Button_17_22_WIDTH              6u

/* Interrupt constants */
#if defined(Button_17_22__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Button_17_22_SetInterruptMode() function.
     *  @{
     */
        #define Button_17_22_INTR_NONE      (uint16)(0x0000u)
        #define Button_17_22_INTR_RISING    (uint16)(0x0001u)
        #define Button_17_22_INTR_FALLING   (uint16)(0x0002u)
        #define Button_17_22_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Button_17_22_INTR_MASK      (0x01u) 
#endif /* (Button_17_22__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Button_17_22_PS                     (* (reg8 *) Button_17_22__PS)
/* Data Register */
#define Button_17_22_DR                     (* (reg8 *) Button_17_22__DR)
/* Port Number */
#define Button_17_22_PRT_NUM                (* (reg8 *) Button_17_22__PRT) 
/* Connect to Analog Globals */                                                  
#define Button_17_22_AG                     (* (reg8 *) Button_17_22__AG)                       
/* Analog MUX bux enable */
#define Button_17_22_AMUX                   (* (reg8 *) Button_17_22__AMUX) 
/* Bidirectional Enable */                                                        
#define Button_17_22_BIE                    (* (reg8 *) Button_17_22__BIE)
/* Bit-mask for Aliased Register Access */
#define Button_17_22_BIT_MASK               (* (reg8 *) Button_17_22__BIT_MASK)
/* Bypass Enable */
#define Button_17_22_BYP                    (* (reg8 *) Button_17_22__BYP)
/* Port wide control signals */                                                   
#define Button_17_22_CTL                    (* (reg8 *) Button_17_22__CTL)
/* Drive Modes */
#define Button_17_22_DM0                    (* (reg8 *) Button_17_22__DM0) 
#define Button_17_22_DM1                    (* (reg8 *) Button_17_22__DM1)
#define Button_17_22_DM2                    (* (reg8 *) Button_17_22__DM2) 
/* Input Buffer Disable Override */
#define Button_17_22_INP_DIS                (* (reg8 *) Button_17_22__INP_DIS)
/* LCD Common or Segment Drive */
#define Button_17_22_LCD_COM_SEG            (* (reg8 *) Button_17_22__LCD_COM_SEG)
/* Enable Segment LCD */
#define Button_17_22_LCD_EN                 (* (reg8 *) Button_17_22__LCD_EN)
/* Slew Rate Control */
#define Button_17_22_SLW                    (* (reg8 *) Button_17_22__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Button_17_22_PRTDSI__CAPS_SEL       (* (reg8 *) Button_17_22__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Button_17_22_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Button_17_22__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Button_17_22_PRTDSI__OE_SEL0        (* (reg8 *) Button_17_22__PRTDSI__OE_SEL0) 
#define Button_17_22_PRTDSI__OE_SEL1        (* (reg8 *) Button_17_22__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Button_17_22_PRTDSI__OUT_SEL0       (* (reg8 *) Button_17_22__PRTDSI__OUT_SEL0) 
#define Button_17_22_PRTDSI__OUT_SEL1       (* (reg8 *) Button_17_22__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Button_17_22_PRTDSI__SYNC_OUT       (* (reg8 *) Button_17_22__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Button_17_22__SIO_CFG)
    #define Button_17_22_SIO_HYST_EN        (* (reg8 *) Button_17_22__SIO_HYST_EN)
    #define Button_17_22_SIO_REG_HIFREQ     (* (reg8 *) Button_17_22__SIO_REG_HIFREQ)
    #define Button_17_22_SIO_CFG            (* (reg8 *) Button_17_22__SIO_CFG)
    #define Button_17_22_SIO_DIFF           (* (reg8 *) Button_17_22__SIO_DIFF)
#endif /* (Button_17_22__SIO_CFG) */

/* Interrupt Registers */
#if defined(Button_17_22__INTSTAT)
    #define Button_17_22_INTSTAT            (* (reg8 *) Button_17_22__INTSTAT)
    #define Button_17_22_SNAP               (* (reg8 *) Button_17_22__SNAP)
    
	#define Button_17_22_0_INTTYPE_REG 		(* (reg8 *) Button_17_22__0__INTTYPE)
	#define Button_17_22_1_INTTYPE_REG 		(* (reg8 *) Button_17_22__1__INTTYPE)
	#define Button_17_22_2_INTTYPE_REG 		(* (reg8 *) Button_17_22__2__INTTYPE)
	#define Button_17_22_3_INTTYPE_REG 		(* (reg8 *) Button_17_22__3__INTTYPE)
	#define Button_17_22_4_INTTYPE_REG 		(* (reg8 *) Button_17_22__4__INTTYPE)
	#define Button_17_22_5_INTTYPE_REG 		(* (reg8 *) Button_17_22__5__INTTYPE)
#endif /* (Button_17_22__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Button_17_22_H */


/* [] END OF FILE */
