/*******************************************************************************
* File Name: Analog_RX.h  
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

#if !defined(CY_PINS_Analog_RX_H) /* Pins Analog_RX_H */
#define CY_PINS_Analog_RX_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Analog_RX_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Analog_RX__PORT == 15 && ((Analog_RX__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Analog_RX_Write(uint8 value);
void    Analog_RX_SetDriveMode(uint8 mode);
uint8   Analog_RX_ReadDataReg(void);
uint8   Analog_RX_Read(void);
void    Analog_RX_SetInterruptMode(uint16 position, uint16 mode);
uint8   Analog_RX_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Analog_RX_SetDriveMode() function.
     *  @{
     */
        #define Analog_RX_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Analog_RX_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Analog_RX_DM_RES_UP          PIN_DM_RES_UP
        #define Analog_RX_DM_RES_DWN         PIN_DM_RES_DWN
        #define Analog_RX_DM_OD_LO           PIN_DM_OD_LO
        #define Analog_RX_DM_OD_HI           PIN_DM_OD_HI
        #define Analog_RX_DM_STRONG          PIN_DM_STRONG
        #define Analog_RX_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Analog_RX_MASK               Analog_RX__MASK
#define Analog_RX_SHIFT              Analog_RX__SHIFT
#define Analog_RX_WIDTH              1u

/* Interrupt constants */
#if defined(Analog_RX__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Analog_RX_SetInterruptMode() function.
     *  @{
     */
        #define Analog_RX_INTR_NONE      (uint16)(0x0000u)
        #define Analog_RX_INTR_RISING    (uint16)(0x0001u)
        #define Analog_RX_INTR_FALLING   (uint16)(0x0002u)
        #define Analog_RX_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Analog_RX_INTR_MASK      (0x01u) 
#endif /* (Analog_RX__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Analog_RX_PS                     (* (reg8 *) Analog_RX__PS)
/* Data Register */
#define Analog_RX_DR                     (* (reg8 *) Analog_RX__DR)
/* Port Number */
#define Analog_RX_PRT_NUM                (* (reg8 *) Analog_RX__PRT) 
/* Connect to Analog Globals */                                                  
#define Analog_RX_AG                     (* (reg8 *) Analog_RX__AG)                       
/* Analog MUX bux enable */
#define Analog_RX_AMUX                   (* (reg8 *) Analog_RX__AMUX) 
/* Bidirectional Enable */                                                        
#define Analog_RX_BIE                    (* (reg8 *) Analog_RX__BIE)
/* Bit-mask for Aliased Register Access */
#define Analog_RX_BIT_MASK               (* (reg8 *) Analog_RX__BIT_MASK)
/* Bypass Enable */
#define Analog_RX_BYP                    (* (reg8 *) Analog_RX__BYP)
/* Port wide control signals */                                                   
#define Analog_RX_CTL                    (* (reg8 *) Analog_RX__CTL)
/* Drive Modes */
#define Analog_RX_DM0                    (* (reg8 *) Analog_RX__DM0) 
#define Analog_RX_DM1                    (* (reg8 *) Analog_RX__DM1)
#define Analog_RX_DM2                    (* (reg8 *) Analog_RX__DM2) 
/* Input Buffer Disable Override */
#define Analog_RX_INP_DIS                (* (reg8 *) Analog_RX__INP_DIS)
/* LCD Common or Segment Drive */
#define Analog_RX_LCD_COM_SEG            (* (reg8 *) Analog_RX__LCD_COM_SEG)
/* Enable Segment LCD */
#define Analog_RX_LCD_EN                 (* (reg8 *) Analog_RX__LCD_EN)
/* Slew Rate Control */
#define Analog_RX_SLW                    (* (reg8 *) Analog_RX__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Analog_RX_PRTDSI__CAPS_SEL       (* (reg8 *) Analog_RX__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Analog_RX_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Analog_RX__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Analog_RX_PRTDSI__OE_SEL0        (* (reg8 *) Analog_RX__PRTDSI__OE_SEL0) 
#define Analog_RX_PRTDSI__OE_SEL1        (* (reg8 *) Analog_RX__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Analog_RX_PRTDSI__OUT_SEL0       (* (reg8 *) Analog_RX__PRTDSI__OUT_SEL0) 
#define Analog_RX_PRTDSI__OUT_SEL1       (* (reg8 *) Analog_RX__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Analog_RX_PRTDSI__SYNC_OUT       (* (reg8 *) Analog_RX__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Analog_RX__SIO_CFG)
    #define Analog_RX_SIO_HYST_EN        (* (reg8 *) Analog_RX__SIO_HYST_EN)
    #define Analog_RX_SIO_REG_HIFREQ     (* (reg8 *) Analog_RX__SIO_REG_HIFREQ)
    #define Analog_RX_SIO_CFG            (* (reg8 *) Analog_RX__SIO_CFG)
    #define Analog_RX_SIO_DIFF           (* (reg8 *) Analog_RX__SIO_DIFF)
#endif /* (Analog_RX__SIO_CFG) */

/* Interrupt Registers */
#if defined(Analog_RX__INTSTAT)
    #define Analog_RX_INTSTAT            (* (reg8 *) Analog_RX__INTSTAT)
    #define Analog_RX_SNAP               (* (reg8 *) Analog_RX__SNAP)
    
	#define Analog_RX_0_INTTYPE_REG 		(* (reg8 *) Analog_RX__0__INTTYPE)
#endif /* (Analog_RX__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Analog_RX_H */


/* [] END OF FILE */
