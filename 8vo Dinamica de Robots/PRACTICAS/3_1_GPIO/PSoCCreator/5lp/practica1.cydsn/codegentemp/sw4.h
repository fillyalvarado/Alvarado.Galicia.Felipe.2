/*******************************************************************************
* File Name: sw4.h  
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

#if !defined(CY_PINS_sw4_H) /* Pins sw4_H */
#define CY_PINS_sw4_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "sw4_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 sw4__PORT == 15 && ((sw4__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    sw4_Write(uint8 value);
void    sw4_SetDriveMode(uint8 mode);
uint8   sw4_ReadDataReg(void);
uint8   sw4_Read(void);
void    sw4_SetInterruptMode(uint16 position, uint16 mode);
uint8   sw4_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the sw4_SetDriveMode() function.
     *  @{
     */
        #define sw4_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define sw4_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define sw4_DM_RES_UP          PIN_DM_RES_UP
        #define sw4_DM_RES_DWN         PIN_DM_RES_DWN
        #define sw4_DM_OD_LO           PIN_DM_OD_LO
        #define sw4_DM_OD_HI           PIN_DM_OD_HI
        #define sw4_DM_STRONG          PIN_DM_STRONG
        #define sw4_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define sw4_MASK               sw4__MASK
#define sw4_SHIFT              sw4__SHIFT
#define sw4_WIDTH              1u

/* Interrupt constants */
#if defined(sw4__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in sw4_SetInterruptMode() function.
     *  @{
     */
        #define sw4_INTR_NONE      (uint16)(0x0000u)
        #define sw4_INTR_RISING    (uint16)(0x0001u)
        #define sw4_INTR_FALLING   (uint16)(0x0002u)
        #define sw4_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define sw4_INTR_MASK      (0x01u) 
#endif /* (sw4__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define sw4_PS                     (* (reg8 *) sw4__PS)
/* Data Register */
#define sw4_DR                     (* (reg8 *) sw4__DR)
/* Port Number */
#define sw4_PRT_NUM                (* (reg8 *) sw4__PRT) 
/* Connect to Analog Globals */                                                  
#define sw4_AG                     (* (reg8 *) sw4__AG)                       
/* Analog MUX bux enable */
#define sw4_AMUX                   (* (reg8 *) sw4__AMUX) 
/* Bidirectional Enable */                                                        
#define sw4_BIE                    (* (reg8 *) sw4__BIE)
/* Bit-mask for Aliased Register Access */
#define sw4_BIT_MASK               (* (reg8 *) sw4__BIT_MASK)
/* Bypass Enable */
#define sw4_BYP                    (* (reg8 *) sw4__BYP)
/* Port wide control signals */                                                   
#define sw4_CTL                    (* (reg8 *) sw4__CTL)
/* Drive Modes */
#define sw4_DM0                    (* (reg8 *) sw4__DM0) 
#define sw4_DM1                    (* (reg8 *) sw4__DM1)
#define sw4_DM2                    (* (reg8 *) sw4__DM2) 
/* Input Buffer Disable Override */
#define sw4_INP_DIS                (* (reg8 *) sw4__INP_DIS)
/* LCD Common or Segment Drive */
#define sw4_LCD_COM_SEG            (* (reg8 *) sw4__LCD_COM_SEG)
/* Enable Segment LCD */
#define sw4_LCD_EN                 (* (reg8 *) sw4__LCD_EN)
/* Slew Rate Control */
#define sw4_SLW                    (* (reg8 *) sw4__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define sw4_PRTDSI__CAPS_SEL       (* (reg8 *) sw4__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define sw4_PRTDSI__DBL_SYNC_IN    (* (reg8 *) sw4__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define sw4_PRTDSI__OE_SEL0        (* (reg8 *) sw4__PRTDSI__OE_SEL0) 
#define sw4_PRTDSI__OE_SEL1        (* (reg8 *) sw4__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define sw4_PRTDSI__OUT_SEL0       (* (reg8 *) sw4__PRTDSI__OUT_SEL0) 
#define sw4_PRTDSI__OUT_SEL1       (* (reg8 *) sw4__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define sw4_PRTDSI__SYNC_OUT       (* (reg8 *) sw4__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(sw4__SIO_CFG)
    #define sw4_SIO_HYST_EN        (* (reg8 *) sw4__SIO_HYST_EN)
    #define sw4_SIO_REG_HIFREQ     (* (reg8 *) sw4__SIO_REG_HIFREQ)
    #define sw4_SIO_CFG            (* (reg8 *) sw4__SIO_CFG)
    #define sw4_SIO_DIFF           (* (reg8 *) sw4__SIO_DIFF)
#endif /* (sw4__SIO_CFG) */

/* Interrupt Registers */
#if defined(sw4__INTSTAT)
    #define sw4_INTSTAT            (* (reg8 *) sw4__INTSTAT)
    #define sw4_SNAP               (* (reg8 *) sw4__SNAP)
    
	#define sw4_0_INTTYPE_REG 		(* (reg8 *) sw4__0__INTTYPE)
#endif /* (sw4__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_sw4_H */


/* [] END OF FILE */
