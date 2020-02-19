/*******************************************************************************
* File Name: Pre.h  
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

#if !defined(CY_PINS_Pre_H) /* Pins Pre_H */
#define CY_PINS_Pre_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Pre_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Pre__PORT == 15 && ((Pre__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Pre_Write(uint8 value);
void    Pre_SetDriveMode(uint8 mode);
uint8   Pre_ReadDataReg(void);
uint8   Pre_Read(void);
void    Pre_SetInterruptMode(uint16 position, uint16 mode);
uint8   Pre_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Pre_SetDriveMode() function.
     *  @{
     */
        #define Pre_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Pre_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Pre_DM_RES_UP          PIN_DM_RES_UP
        #define Pre_DM_RES_DWN         PIN_DM_RES_DWN
        #define Pre_DM_OD_LO           PIN_DM_OD_LO
        #define Pre_DM_OD_HI           PIN_DM_OD_HI
        #define Pre_DM_STRONG          PIN_DM_STRONG
        #define Pre_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Pre_MASK               Pre__MASK
#define Pre_SHIFT              Pre__SHIFT
#define Pre_WIDTH              1u

/* Interrupt constants */
#if defined(Pre__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Pre_SetInterruptMode() function.
     *  @{
     */
        #define Pre_INTR_NONE      (uint16)(0x0000u)
        #define Pre_INTR_RISING    (uint16)(0x0001u)
        #define Pre_INTR_FALLING   (uint16)(0x0002u)
        #define Pre_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Pre_INTR_MASK      (0x01u) 
#endif /* (Pre__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Pre_PS                     (* (reg8 *) Pre__PS)
/* Data Register */
#define Pre_DR                     (* (reg8 *) Pre__DR)
/* Port Number */
#define Pre_PRT_NUM                (* (reg8 *) Pre__PRT) 
/* Connect to Analog Globals */                                                  
#define Pre_AG                     (* (reg8 *) Pre__AG)                       
/* Analog MUX bux enable */
#define Pre_AMUX                   (* (reg8 *) Pre__AMUX) 
/* Bidirectional Enable */                                                        
#define Pre_BIE                    (* (reg8 *) Pre__BIE)
/* Bit-mask for Aliased Register Access */
#define Pre_BIT_MASK               (* (reg8 *) Pre__BIT_MASK)
/* Bypass Enable */
#define Pre_BYP                    (* (reg8 *) Pre__BYP)
/* Port wide control signals */                                                   
#define Pre_CTL                    (* (reg8 *) Pre__CTL)
/* Drive Modes */
#define Pre_DM0                    (* (reg8 *) Pre__DM0) 
#define Pre_DM1                    (* (reg8 *) Pre__DM1)
#define Pre_DM2                    (* (reg8 *) Pre__DM2) 
/* Input Buffer Disable Override */
#define Pre_INP_DIS                (* (reg8 *) Pre__INP_DIS)
/* LCD Common or Segment Drive */
#define Pre_LCD_COM_SEG            (* (reg8 *) Pre__LCD_COM_SEG)
/* Enable Segment LCD */
#define Pre_LCD_EN                 (* (reg8 *) Pre__LCD_EN)
/* Slew Rate Control */
#define Pre_SLW                    (* (reg8 *) Pre__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Pre_PRTDSI__CAPS_SEL       (* (reg8 *) Pre__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Pre_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Pre__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Pre_PRTDSI__OE_SEL0        (* (reg8 *) Pre__PRTDSI__OE_SEL0) 
#define Pre_PRTDSI__OE_SEL1        (* (reg8 *) Pre__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Pre_PRTDSI__OUT_SEL0       (* (reg8 *) Pre__PRTDSI__OUT_SEL0) 
#define Pre_PRTDSI__OUT_SEL1       (* (reg8 *) Pre__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Pre_PRTDSI__SYNC_OUT       (* (reg8 *) Pre__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Pre__SIO_CFG)
    #define Pre_SIO_HYST_EN        (* (reg8 *) Pre__SIO_HYST_EN)
    #define Pre_SIO_REG_HIFREQ     (* (reg8 *) Pre__SIO_REG_HIFREQ)
    #define Pre_SIO_CFG            (* (reg8 *) Pre__SIO_CFG)
    #define Pre_SIO_DIFF           (* (reg8 *) Pre__SIO_DIFF)
#endif /* (Pre__SIO_CFG) */

/* Interrupt Registers */
#if defined(Pre__INTSTAT)
    #define Pre_INTSTAT            (* (reg8 *) Pre__INTSTAT)
    #define Pre_SNAP               (* (reg8 *) Pre__SNAP)
    
	#define Pre_0_INTTYPE_REG 		(* (reg8 *) Pre__0__INTTYPE)
#endif /* (Pre__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Pre_H */


/* [] END OF FILE */
