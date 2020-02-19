/*******************************************************************************
* File Name: sw2.h  
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

#if !defined(CY_PINS_sw2_H) /* Pins sw2_H */
#define CY_PINS_sw2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "sw2_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 sw2__PORT == 15 && ((sw2__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    sw2_Write(uint8 value);
void    sw2_SetDriveMode(uint8 mode);
uint8   sw2_ReadDataReg(void);
uint8   sw2_Read(void);
void    sw2_SetInterruptMode(uint16 position, uint16 mode);
uint8   sw2_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the sw2_SetDriveMode() function.
     *  @{
     */
        #define sw2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define sw2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define sw2_DM_RES_UP          PIN_DM_RES_UP
        #define sw2_DM_RES_DWN         PIN_DM_RES_DWN
        #define sw2_DM_OD_LO           PIN_DM_OD_LO
        #define sw2_DM_OD_HI           PIN_DM_OD_HI
        #define sw2_DM_STRONG          PIN_DM_STRONG
        #define sw2_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define sw2_MASK               sw2__MASK
#define sw2_SHIFT              sw2__SHIFT
#define sw2_WIDTH              1u

/* Interrupt constants */
#if defined(sw2__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in sw2_SetInterruptMode() function.
     *  @{
     */
        #define sw2_INTR_NONE      (uint16)(0x0000u)
        #define sw2_INTR_RISING    (uint16)(0x0001u)
        #define sw2_INTR_FALLING   (uint16)(0x0002u)
        #define sw2_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define sw2_INTR_MASK      (0x01u) 
#endif /* (sw2__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define sw2_PS                     (* (reg8 *) sw2__PS)
/* Data Register */
#define sw2_DR                     (* (reg8 *) sw2__DR)
/* Port Number */
#define sw2_PRT_NUM                (* (reg8 *) sw2__PRT) 
/* Connect to Analog Globals */                                                  
#define sw2_AG                     (* (reg8 *) sw2__AG)                       
/* Analog MUX bux enable */
#define sw2_AMUX                   (* (reg8 *) sw2__AMUX) 
/* Bidirectional Enable */                                                        
#define sw2_BIE                    (* (reg8 *) sw2__BIE)
/* Bit-mask for Aliased Register Access */
#define sw2_BIT_MASK               (* (reg8 *) sw2__BIT_MASK)
/* Bypass Enable */
#define sw2_BYP                    (* (reg8 *) sw2__BYP)
/* Port wide control signals */                                                   
#define sw2_CTL                    (* (reg8 *) sw2__CTL)
/* Drive Modes */
#define sw2_DM0                    (* (reg8 *) sw2__DM0) 
#define sw2_DM1                    (* (reg8 *) sw2__DM1)
#define sw2_DM2                    (* (reg8 *) sw2__DM2) 
/* Input Buffer Disable Override */
#define sw2_INP_DIS                (* (reg8 *) sw2__INP_DIS)
/* LCD Common or Segment Drive */
#define sw2_LCD_COM_SEG            (* (reg8 *) sw2__LCD_COM_SEG)
/* Enable Segment LCD */
#define sw2_LCD_EN                 (* (reg8 *) sw2__LCD_EN)
/* Slew Rate Control */
#define sw2_SLW                    (* (reg8 *) sw2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define sw2_PRTDSI__CAPS_SEL       (* (reg8 *) sw2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define sw2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) sw2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define sw2_PRTDSI__OE_SEL0        (* (reg8 *) sw2__PRTDSI__OE_SEL0) 
#define sw2_PRTDSI__OE_SEL1        (* (reg8 *) sw2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define sw2_PRTDSI__OUT_SEL0       (* (reg8 *) sw2__PRTDSI__OUT_SEL0) 
#define sw2_PRTDSI__OUT_SEL1       (* (reg8 *) sw2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define sw2_PRTDSI__SYNC_OUT       (* (reg8 *) sw2__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(sw2__SIO_CFG)
    #define sw2_SIO_HYST_EN        (* (reg8 *) sw2__SIO_HYST_EN)
    #define sw2_SIO_REG_HIFREQ     (* (reg8 *) sw2__SIO_REG_HIFREQ)
    #define sw2_SIO_CFG            (* (reg8 *) sw2__SIO_CFG)
    #define sw2_SIO_DIFF           (* (reg8 *) sw2__SIO_DIFF)
#endif /* (sw2__SIO_CFG) */

/* Interrupt Registers */
#if defined(sw2__INTSTAT)
    #define sw2_INTSTAT            (* (reg8 *) sw2__INTSTAT)
    #define sw2_SNAP               (* (reg8 *) sw2__SNAP)
    
	#define sw2_0_INTTYPE_REG 		(* (reg8 *) sw2__0__INTTYPE)
#endif /* (sw2__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_sw2_H */


/* [] END OF FILE */
