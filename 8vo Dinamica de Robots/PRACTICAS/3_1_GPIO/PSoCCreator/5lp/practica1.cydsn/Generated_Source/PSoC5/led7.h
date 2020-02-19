/*******************************************************************************
* File Name: led7.h  
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

#if !defined(CY_PINS_led7_H) /* Pins led7_H */
#define CY_PINS_led7_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "led7_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 led7__PORT == 15 && ((led7__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    led7_Write(uint8 value);
void    led7_SetDriveMode(uint8 mode);
uint8   led7_ReadDataReg(void);
uint8   led7_Read(void);
void    led7_SetInterruptMode(uint16 position, uint16 mode);
uint8   led7_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the led7_SetDriveMode() function.
     *  @{
     */
        #define led7_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define led7_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define led7_DM_RES_UP          PIN_DM_RES_UP
        #define led7_DM_RES_DWN         PIN_DM_RES_DWN
        #define led7_DM_OD_LO           PIN_DM_OD_LO
        #define led7_DM_OD_HI           PIN_DM_OD_HI
        #define led7_DM_STRONG          PIN_DM_STRONG
        #define led7_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define led7_MASK               led7__MASK
#define led7_SHIFT              led7__SHIFT
#define led7_WIDTH              1u

/* Interrupt constants */
#if defined(led7__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in led7_SetInterruptMode() function.
     *  @{
     */
        #define led7_INTR_NONE      (uint16)(0x0000u)
        #define led7_INTR_RISING    (uint16)(0x0001u)
        #define led7_INTR_FALLING   (uint16)(0x0002u)
        #define led7_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define led7_INTR_MASK      (0x01u) 
#endif /* (led7__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define led7_PS                     (* (reg8 *) led7__PS)
/* Data Register */
#define led7_DR                     (* (reg8 *) led7__DR)
/* Port Number */
#define led7_PRT_NUM                (* (reg8 *) led7__PRT) 
/* Connect to Analog Globals */                                                  
#define led7_AG                     (* (reg8 *) led7__AG)                       
/* Analog MUX bux enable */
#define led7_AMUX                   (* (reg8 *) led7__AMUX) 
/* Bidirectional Enable */                                                        
#define led7_BIE                    (* (reg8 *) led7__BIE)
/* Bit-mask for Aliased Register Access */
#define led7_BIT_MASK               (* (reg8 *) led7__BIT_MASK)
/* Bypass Enable */
#define led7_BYP                    (* (reg8 *) led7__BYP)
/* Port wide control signals */                                                   
#define led7_CTL                    (* (reg8 *) led7__CTL)
/* Drive Modes */
#define led7_DM0                    (* (reg8 *) led7__DM0) 
#define led7_DM1                    (* (reg8 *) led7__DM1)
#define led7_DM2                    (* (reg8 *) led7__DM2) 
/* Input Buffer Disable Override */
#define led7_INP_DIS                (* (reg8 *) led7__INP_DIS)
/* LCD Common or Segment Drive */
#define led7_LCD_COM_SEG            (* (reg8 *) led7__LCD_COM_SEG)
/* Enable Segment LCD */
#define led7_LCD_EN                 (* (reg8 *) led7__LCD_EN)
/* Slew Rate Control */
#define led7_SLW                    (* (reg8 *) led7__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define led7_PRTDSI__CAPS_SEL       (* (reg8 *) led7__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define led7_PRTDSI__DBL_SYNC_IN    (* (reg8 *) led7__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define led7_PRTDSI__OE_SEL0        (* (reg8 *) led7__PRTDSI__OE_SEL0) 
#define led7_PRTDSI__OE_SEL1        (* (reg8 *) led7__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define led7_PRTDSI__OUT_SEL0       (* (reg8 *) led7__PRTDSI__OUT_SEL0) 
#define led7_PRTDSI__OUT_SEL1       (* (reg8 *) led7__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define led7_PRTDSI__SYNC_OUT       (* (reg8 *) led7__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(led7__SIO_CFG)
    #define led7_SIO_HYST_EN        (* (reg8 *) led7__SIO_HYST_EN)
    #define led7_SIO_REG_HIFREQ     (* (reg8 *) led7__SIO_REG_HIFREQ)
    #define led7_SIO_CFG            (* (reg8 *) led7__SIO_CFG)
    #define led7_SIO_DIFF           (* (reg8 *) led7__SIO_DIFF)
#endif /* (led7__SIO_CFG) */

/* Interrupt Registers */
#if defined(led7__INTSTAT)
    #define led7_INTSTAT            (* (reg8 *) led7__INTSTAT)
    #define led7_SNAP               (* (reg8 *) led7__SNAP)
    
	#define led7_0_INTTYPE_REG 		(* (reg8 *) led7__0__INTTYPE)
#endif /* (led7__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_led7_H */


/* [] END OF FILE */
