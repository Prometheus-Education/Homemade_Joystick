/*******************************************************************************
* File Name: Analog_RY.h  
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

#if !defined(CY_PINS_Analog_RY_H) /* Pins Analog_RY_H */
#define CY_PINS_Analog_RY_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Analog_RY_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Analog_RY__PORT == 15 && ((Analog_RY__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Analog_RY_Write(uint8 value);
void    Analog_RY_SetDriveMode(uint8 mode);
uint8   Analog_RY_ReadDataReg(void);
uint8   Analog_RY_Read(void);
void    Analog_RY_SetInterruptMode(uint16 position, uint16 mode);
uint8   Analog_RY_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Analog_RY_SetDriveMode() function.
     *  @{
     */
        #define Analog_RY_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Analog_RY_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Analog_RY_DM_RES_UP          PIN_DM_RES_UP
        #define Analog_RY_DM_RES_DWN         PIN_DM_RES_DWN
        #define Analog_RY_DM_OD_LO           PIN_DM_OD_LO
        #define Analog_RY_DM_OD_HI           PIN_DM_OD_HI
        #define Analog_RY_DM_STRONG          PIN_DM_STRONG
        #define Analog_RY_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Analog_RY_MASK               Analog_RY__MASK
#define Analog_RY_SHIFT              Analog_RY__SHIFT
#define Analog_RY_WIDTH              1u

/* Interrupt constants */
#if defined(Analog_RY__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Analog_RY_SetInterruptMode() function.
     *  @{
     */
        #define Analog_RY_INTR_NONE      (uint16)(0x0000u)
        #define Analog_RY_INTR_RISING    (uint16)(0x0001u)
        #define Analog_RY_INTR_FALLING   (uint16)(0x0002u)
        #define Analog_RY_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Analog_RY_INTR_MASK      (0x01u) 
#endif /* (Analog_RY__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Analog_RY_PS                     (* (reg8 *) Analog_RY__PS)
/* Data Register */
#define Analog_RY_DR                     (* (reg8 *) Analog_RY__DR)
/* Port Number */
#define Analog_RY_PRT_NUM                (* (reg8 *) Analog_RY__PRT) 
/* Connect to Analog Globals */                                                  
#define Analog_RY_AG                     (* (reg8 *) Analog_RY__AG)                       
/* Analog MUX bux enable */
#define Analog_RY_AMUX                   (* (reg8 *) Analog_RY__AMUX) 
/* Bidirectional Enable */                                                        
#define Analog_RY_BIE                    (* (reg8 *) Analog_RY__BIE)
/* Bit-mask for Aliased Register Access */
#define Analog_RY_BIT_MASK               (* (reg8 *) Analog_RY__BIT_MASK)
/* Bypass Enable */
#define Analog_RY_BYP                    (* (reg8 *) Analog_RY__BYP)
/* Port wide control signals */                                                   
#define Analog_RY_CTL                    (* (reg8 *) Analog_RY__CTL)
/* Drive Modes */
#define Analog_RY_DM0                    (* (reg8 *) Analog_RY__DM0) 
#define Analog_RY_DM1                    (* (reg8 *) Analog_RY__DM1)
#define Analog_RY_DM2                    (* (reg8 *) Analog_RY__DM2) 
/* Input Buffer Disable Override */
#define Analog_RY_INP_DIS                (* (reg8 *) Analog_RY__INP_DIS)
/* LCD Common or Segment Drive */
#define Analog_RY_LCD_COM_SEG            (* (reg8 *) Analog_RY__LCD_COM_SEG)
/* Enable Segment LCD */
#define Analog_RY_LCD_EN                 (* (reg8 *) Analog_RY__LCD_EN)
/* Slew Rate Control */
#define Analog_RY_SLW                    (* (reg8 *) Analog_RY__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Analog_RY_PRTDSI__CAPS_SEL       (* (reg8 *) Analog_RY__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Analog_RY_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Analog_RY__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Analog_RY_PRTDSI__OE_SEL0        (* (reg8 *) Analog_RY__PRTDSI__OE_SEL0) 
#define Analog_RY_PRTDSI__OE_SEL1        (* (reg8 *) Analog_RY__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Analog_RY_PRTDSI__OUT_SEL0       (* (reg8 *) Analog_RY__PRTDSI__OUT_SEL0) 
#define Analog_RY_PRTDSI__OUT_SEL1       (* (reg8 *) Analog_RY__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Analog_RY_PRTDSI__SYNC_OUT       (* (reg8 *) Analog_RY__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Analog_RY__SIO_CFG)
    #define Analog_RY_SIO_HYST_EN        (* (reg8 *) Analog_RY__SIO_HYST_EN)
    #define Analog_RY_SIO_REG_HIFREQ     (* (reg8 *) Analog_RY__SIO_REG_HIFREQ)
    #define Analog_RY_SIO_CFG            (* (reg8 *) Analog_RY__SIO_CFG)
    #define Analog_RY_SIO_DIFF           (* (reg8 *) Analog_RY__SIO_DIFF)
#endif /* (Analog_RY__SIO_CFG) */

/* Interrupt Registers */
#if defined(Analog_RY__INTSTAT)
    #define Analog_RY_INTSTAT            (* (reg8 *) Analog_RY__INTSTAT)
    #define Analog_RY_SNAP               (* (reg8 *) Analog_RY__SNAP)
    
	#define Analog_RY_0_INTTYPE_REG 		(* (reg8 *) Analog_RY__0__INTTYPE)
#endif /* (Analog_RY__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Analog_RY_H */


/* [] END OF FILE */
