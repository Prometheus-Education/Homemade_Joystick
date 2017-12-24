/*******************************************************************************
* File Name: Analog_Dial.h  
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

#if !defined(CY_PINS_Analog_Dial_H) /* Pins Analog_Dial_H */
#define CY_PINS_Analog_Dial_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Analog_Dial_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Analog_Dial__PORT == 15 && ((Analog_Dial__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Analog_Dial_Write(uint8 value);
void    Analog_Dial_SetDriveMode(uint8 mode);
uint8   Analog_Dial_ReadDataReg(void);
uint8   Analog_Dial_Read(void);
void    Analog_Dial_SetInterruptMode(uint16 position, uint16 mode);
uint8   Analog_Dial_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Analog_Dial_SetDriveMode() function.
     *  @{
     */
        #define Analog_Dial_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Analog_Dial_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Analog_Dial_DM_RES_UP          PIN_DM_RES_UP
        #define Analog_Dial_DM_RES_DWN         PIN_DM_RES_DWN
        #define Analog_Dial_DM_OD_LO           PIN_DM_OD_LO
        #define Analog_Dial_DM_OD_HI           PIN_DM_OD_HI
        #define Analog_Dial_DM_STRONG          PIN_DM_STRONG
        #define Analog_Dial_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Analog_Dial_MASK               Analog_Dial__MASK
#define Analog_Dial_SHIFT              Analog_Dial__SHIFT
#define Analog_Dial_WIDTH              1u

/* Interrupt constants */
#if defined(Analog_Dial__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Analog_Dial_SetInterruptMode() function.
     *  @{
     */
        #define Analog_Dial_INTR_NONE      (uint16)(0x0000u)
        #define Analog_Dial_INTR_RISING    (uint16)(0x0001u)
        #define Analog_Dial_INTR_FALLING   (uint16)(0x0002u)
        #define Analog_Dial_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Analog_Dial_INTR_MASK      (0x01u) 
#endif /* (Analog_Dial__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Analog_Dial_PS                     (* (reg8 *) Analog_Dial__PS)
/* Data Register */
#define Analog_Dial_DR                     (* (reg8 *) Analog_Dial__DR)
/* Port Number */
#define Analog_Dial_PRT_NUM                (* (reg8 *) Analog_Dial__PRT) 
/* Connect to Analog Globals */                                                  
#define Analog_Dial_AG                     (* (reg8 *) Analog_Dial__AG)                       
/* Analog MUX bux enable */
#define Analog_Dial_AMUX                   (* (reg8 *) Analog_Dial__AMUX) 
/* Bidirectional Enable */                                                        
#define Analog_Dial_BIE                    (* (reg8 *) Analog_Dial__BIE)
/* Bit-mask for Aliased Register Access */
#define Analog_Dial_BIT_MASK               (* (reg8 *) Analog_Dial__BIT_MASK)
/* Bypass Enable */
#define Analog_Dial_BYP                    (* (reg8 *) Analog_Dial__BYP)
/* Port wide control signals */                                                   
#define Analog_Dial_CTL                    (* (reg8 *) Analog_Dial__CTL)
/* Drive Modes */
#define Analog_Dial_DM0                    (* (reg8 *) Analog_Dial__DM0) 
#define Analog_Dial_DM1                    (* (reg8 *) Analog_Dial__DM1)
#define Analog_Dial_DM2                    (* (reg8 *) Analog_Dial__DM2) 
/* Input Buffer Disable Override */
#define Analog_Dial_INP_DIS                (* (reg8 *) Analog_Dial__INP_DIS)
/* LCD Common or Segment Drive */
#define Analog_Dial_LCD_COM_SEG            (* (reg8 *) Analog_Dial__LCD_COM_SEG)
/* Enable Segment LCD */
#define Analog_Dial_LCD_EN                 (* (reg8 *) Analog_Dial__LCD_EN)
/* Slew Rate Control */
#define Analog_Dial_SLW                    (* (reg8 *) Analog_Dial__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Analog_Dial_PRTDSI__CAPS_SEL       (* (reg8 *) Analog_Dial__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Analog_Dial_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Analog_Dial__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Analog_Dial_PRTDSI__OE_SEL0        (* (reg8 *) Analog_Dial__PRTDSI__OE_SEL0) 
#define Analog_Dial_PRTDSI__OE_SEL1        (* (reg8 *) Analog_Dial__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Analog_Dial_PRTDSI__OUT_SEL0       (* (reg8 *) Analog_Dial__PRTDSI__OUT_SEL0) 
#define Analog_Dial_PRTDSI__OUT_SEL1       (* (reg8 *) Analog_Dial__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Analog_Dial_PRTDSI__SYNC_OUT       (* (reg8 *) Analog_Dial__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Analog_Dial__SIO_CFG)
    #define Analog_Dial_SIO_HYST_EN        (* (reg8 *) Analog_Dial__SIO_HYST_EN)
    #define Analog_Dial_SIO_REG_HIFREQ     (* (reg8 *) Analog_Dial__SIO_REG_HIFREQ)
    #define Analog_Dial_SIO_CFG            (* (reg8 *) Analog_Dial__SIO_CFG)
    #define Analog_Dial_SIO_DIFF           (* (reg8 *) Analog_Dial__SIO_DIFF)
#endif /* (Analog_Dial__SIO_CFG) */

/* Interrupt Registers */
#if defined(Analog_Dial__INTSTAT)
    #define Analog_Dial_INTSTAT            (* (reg8 *) Analog_Dial__INTSTAT)
    #define Analog_Dial_SNAP               (* (reg8 *) Analog_Dial__SNAP)
    
	#define Analog_Dial_0_INTTYPE_REG 		(* (reg8 *) Analog_Dial__0__INTTYPE)
#endif /* (Analog_Dial__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Analog_Dial_H */


/* [] END OF FILE */
