/*******************************************************************************
* File Name: sw5.h  
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

#if !defined(CY_PINS_sw5_H) /* Pins sw5_H */
#define CY_PINS_sw5_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "sw5_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 sw5__PORT == 15 && ((sw5__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    sw5_Write(uint8 value);
void    sw5_SetDriveMode(uint8 mode);
uint8   sw5_ReadDataReg(void);
uint8   sw5_Read(void);
void    sw5_SetInterruptMode(uint16 position, uint16 mode);
uint8   sw5_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the sw5_SetDriveMode() function.
     *  @{
     */
        #define sw5_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define sw5_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define sw5_DM_RES_UP          PIN_DM_RES_UP
        #define sw5_DM_RES_DWN         PIN_DM_RES_DWN
        #define sw5_DM_OD_LO           PIN_DM_OD_LO
        #define sw5_DM_OD_HI           PIN_DM_OD_HI
        #define sw5_DM_STRONG          PIN_DM_STRONG
        #define sw5_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define sw5_MASK               sw5__MASK
#define sw5_SHIFT              sw5__SHIFT
#define sw5_WIDTH              1u

/* Interrupt constants */
#if defined(sw5__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in sw5_SetInterruptMode() function.
     *  @{
     */
        #define sw5_INTR_NONE      (uint16)(0x0000u)
        #define sw5_INTR_RISING    (uint16)(0x0001u)
        #define sw5_INTR_FALLING   (uint16)(0x0002u)
        #define sw5_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define sw5_INTR_MASK      (0x01u) 
#endif /* (sw5__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define sw5_PS                     (* (reg8 *) sw5__PS)
/* Data Register */
#define sw5_DR                     (* (reg8 *) sw5__DR)
/* Port Number */
#define sw5_PRT_NUM                (* (reg8 *) sw5__PRT) 
/* Connect to Analog Globals */                                                  
#define sw5_AG                     (* (reg8 *) sw5__AG)                       
/* Analog MUX bux enable */
#define sw5_AMUX                   (* (reg8 *) sw5__AMUX) 
/* Bidirectional Enable */                                                        
#define sw5_BIE                    (* (reg8 *) sw5__BIE)
/* Bit-mask for Aliased Register Access */
#define sw5_BIT_MASK               (* (reg8 *) sw5__BIT_MASK)
/* Bypass Enable */
#define sw5_BYP                    (* (reg8 *) sw5__BYP)
/* Port wide control signals */                                                   
#define sw5_CTL                    (* (reg8 *) sw5__CTL)
/* Drive Modes */
#define sw5_DM0                    (* (reg8 *) sw5__DM0) 
#define sw5_DM1                    (* (reg8 *) sw5__DM1)
#define sw5_DM2                    (* (reg8 *) sw5__DM2) 
/* Input Buffer Disable Override */
#define sw5_INP_DIS                (* (reg8 *) sw5__INP_DIS)
/* LCD Common or Segment Drive */
#define sw5_LCD_COM_SEG            (* (reg8 *) sw5__LCD_COM_SEG)
/* Enable Segment LCD */
#define sw5_LCD_EN                 (* (reg8 *) sw5__LCD_EN)
/* Slew Rate Control */
#define sw5_SLW                    (* (reg8 *) sw5__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define sw5_PRTDSI__CAPS_SEL       (* (reg8 *) sw5__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define sw5_PRTDSI__DBL_SYNC_IN    (* (reg8 *) sw5__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define sw5_PRTDSI__OE_SEL0        (* (reg8 *) sw5__PRTDSI__OE_SEL0) 
#define sw5_PRTDSI__OE_SEL1        (* (reg8 *) sw5__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define sw5_PRTDSI__OUT_SEL0       (* (reg8 *) sw5__PRTDSI__OUT_SEL0) 
#define sw5_PRTDSI__OUT_SEL1       (* (reg8 *) sw5__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define sw5_PRTDSI__SYNC_OUT       (* (reg8 *) sw5__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(sw5__SIO_CFG)
    #define sw5_SIO_HYST_EN        (* (reg8 *) sw5__SIO_HYST_EN)
    #define sw5_SIO_REG_HIFREQ     (* (reg8 *) sw5__SIO_REG_HIFREQ)
    #define sw5_SIO_CFG            (* (reg8 *) sw5__SIO_CFG)
    #define sw5_SIO_DIFF           (* (reg8 *) sw5__SIO_DIFF)
#endif /* (sw5__SIO_CFG) */

/* Interrupt Registers */
#if defined(sw5__INTSTAT)
    #define sw5_INTSTAT            (* (reg8 *) sw5__INTSTAT)
    #define sw5_SNAP               (* (reg8 *) sw5__SNAP)
    
	#define sw5_0_INTTYPE_REG 		(* (reg8 *) sw5__0__INTTYPE)
#endif /* (sw5__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_sw5_H */


/* [] END OF FILE */
