/*******************************************************************************
* File Name: LED9.h  
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

#if !defined(CY_PINS_LED9_H) /* Pins LED9_H */
#define CY_PINS_LED9_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "LED9_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 LED9__PORT == 15 && ((LED9__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    LED9_Write(uint8 value);
void    LED9_SetDriveMode(uint8 mode);
uint8   LED9_ReadDataReg(void);
uint8   LED9_Read(void);
void    LED9_SetInterruptMode(uint16 position, uint16 mode);
uint8   LED9_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the LED9_SetDriveMode() function.
     *  @{
     */
        #define LED9_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define LED9_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define LED9_DM_RES_UP          PIN_DM_RES_UP
        #define LED9_DM_RES_DWN         PIN_DM_RES_DWN
        #define LED9_DM_OD_LO           PIN_DM_OD_LO
        #define LED9_DM_OD_HI           PIN_DM_OD_HI
        #define LED9_DM_STRONG          PIN_DM_STRONG
        #define LED9_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define LED9_MASK               LED9__MASK
#define LED9_SHIFT              LED9__SHIFT
#define LED9_WIDTH              1u

/* Interrupt constants */
#if defined(LED9__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in LED9_SetInterruptMode() function.
     *  @{
     */
        #define LED9_INTR_NONE      (uint16)(0x0000u)
        #define LED9_INTR_RISING    (uint16)(0x0001u)
        #define LED9_INTR_FALLING   (uint16)(0x0002u)
        #define LED9_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define LED9_INTR_MASK      (0x01u) 
#endif /* (LED9__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define LED9_PS                     (* (reg8 *) LED9__PS)
/* Data Register */
#define LED9_DR                     (* (reg8 *) LED9__DR)
/* Port Number */
#define LED9_PRT_NUM                (* (reg8 *) LED9__PRT) 
/* Connect to Analog Globals */                                                  
#define LED9_AG                     (* (reg8 *) LED9__AG)                       
/* Analog MUX bux enable */
#define LED9_AMUX                   (* (reg8 *) LED9__AMUX) 
/* Bidirectional Enable */                                                        
#define LED9_BIE                    (* (reg8 *) LED9__BIE)
/* Bit-mask for Aliased Register Access */
#define LED9_BIT_MASK               (* (reg8 *) LED9__BIT_MASK)
/* Bypass Enable */
#define LED9_BYP                    (* (reg8 *) LED9__BYP)
/* Port wide control signals */                                                   
#define LED9_CTL                    (* (reg8 *) LED9__CTL)
/* Drive Modes */
#define LED9_DM0                    (* (reg8 *) LED9__DM0) 
#define LED9_DM1                    (* (reg8 *) LED9__DM1)
#define LED9_DM2                    (* (reg8 *) LED9__DM2) 
/* Input Buffer Disable Override */
#define LED9_INP_DIS                (* (reg8 *) LED9__INP_DIS)
/* LCD Common or Segment Drive */
#define LED9_LCD_COM_SEG            (* (reg8 *) LED9__LCD_COM_SEG)
/* Enable Segment LCD */
#define LED9_LCD_EN                 (* (reg8 *) LED9__LCD_EN)
/* Slew Rate Control */
#define LED9_SLW                    (* (reg8 *) LED9__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define LED9_PRTDSI__CAPS_SEL       (* (reg8 *) LED9__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define LED9_PRTDSI__DBL_SYNC_IN    (* (reg8 *) LED9__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define LED9_PRTDSI__OE_SEL0        (* (reg8 *) LED9__PRTDSI__OE_SEL0) 
#define LED9_PRTDSI__OE_SEL1        (* (reg8 *) LED9__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define LED9_PRTDSI__OUT_SEL0       (* (reg8 *) LED9__PRTDSI__OUT_SEL0) 
#define LED9_PRTDSI__OUT_SEL1       (* (reg8 *) LED9__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define LED9_PRTDSI__SYNC_OUT       (* (reg8 *) LED9__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(LED9__SIO_CFG)
    #define LED9_SIO_HYST_EN        (* (reg8 *) LED9__SIO_HYST_EN)
    #define LED9_SIO_REG_HIFREQ     (* (reg8 *) LED9__SIO_REG_HIFREQ)
    #define LED9_SIO_CFG            (* (reg8 *) LED9__SIO_CFG)
    #define LED9_SIO_DIFF           (* (reg8 *) LED9__SIO_DIFF)
#endif /* (LED9__SIO_CFG) */

/* Interrupt Registers */
#if defined(LED9__INTSTAT)
    #define LED9_INTSTAT            (* (reg8 *) LED9__INTSTAT)
    #define LED9_SNAP               (* (reg8 *) LED9__SNAP)
    
	#define LED9_0_INTTYPE_REG 		(* (reg8 *) LED9__0__INTTYPE)
#endif /* (LED9__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_LED9_H */


/* [] END OF FILE */
