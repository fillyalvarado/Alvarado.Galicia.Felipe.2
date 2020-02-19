/*******************************************************************************
* File Name: LED7.h  
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

#if !defined(CY_PINS_LED7_H) /* Pins LED7_H */
#define CY_PINS_LED7_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "LED7_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 LED7__PORT == 15 && ((LED7__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    LED7_Write(uint8 value);
void    LED7_SetDriveMode(uint8 mode);
uint8   LED7_ReadDataReg(void);
uint8   LED7_Read(void);
void    LED7_SetInterruptMode(uint16 position, uint16 mode);
uint8   LED7_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the LED7_SetDriveMode() function.
     *  @{
     */
        #define LED7_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define LED7_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define LED7_DM_RES_UP          PIN_DM_RES_UP
        #define LED7_DM_RES_DWN         PIN_DM_RES_DWN
        #define LED7_DM_OD_LO           PIN_DM_OD_LO
        #define LED7_DM_OD_HI           PIN_DM_OD_HI
        #define LED7_DM_STRONG          PIN_DM_STRONG
        #define LED7_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define LED7_MASK               LED7__MASK
#define LED7_SHIFT              LED7__SHIFT
#define LED7_WIDTH              1u

/* Interrupt constants */
#if defined(LED7__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in LED7_SetInterruptMode() function.
     *  @{
     */
        #define LED7_INTR_NONE      (uint16)(0x0000u)
        #define LED7_INTR_RISING    (uint16)(0x0001u)
        #define LED7_INTR_FALLING   (uint16)(0x0002u)
        #define LED7_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define LED7_INTR_MASK      (0x01u) 
#endif /* (LED7__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define LED7_PS                     (* (reg8 *) LED7__PS)
/* Data Register */
#define LED7_DR                     (* (reg8 *) LED7__DR)
/* Port Number */
#define LED7_PRT_NUM                (* (reg8 *) LED7__PRT) 
/* Connect to Analog Globals */                                                  
#define LED7_AG                     (* (reg8 *) LED7__AG)                       
/* Analog MUX bux enable */
#define LED7_AMUX                   (* (reg8 *) LED7__AMUX) 
/* Bidirectional Enable */                                                        
#define LED7_BIE                    (* (reg8 *) LED7__BIE)
/* Bit-mask for Aliased Register Access */
#define LED7_BIT_MASK               (* (reg8 *) LED7__BIT_MASK)
/* Bypass Enable */
#define LED7_BYP                    (* (reg8 *) LED7__BYP)
/* Port wide control signals */                                                   
#define LED7_CTL                    (* (reg8 *) LED7__CTL)
/* Drive Modes */
#define LED7_DM0                    (* (reg8 *) LED7__DM0) 
#define LED7_DM1                    (* (reg8 *) LED7__DM1)
#define LED7_DM2                    (* (reg8 *) LED7__DM2) 
/* Input Buffer Disable Override */
#define LED7_INP_DIS                (* (reg8 *) LED7__INP_DIS)
/* LCD Common or Segment Drive */
#define LED7_LCD_COM_SEG            (* (reg8 *) LED7__LCD_COM_SEG)
/* Enable Segment LCD */
#define LED7_LCD_EN                 (* (reg8 *) LED7__LCD_EN)
/* Slew Rate Control */
#define LED7_SLW                    (* (reg8 *) LED7__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define LED7_PRTDSI__CAPS_SEL       (* (reg8 *) LED7__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define LED7_PRTDSI__DBL_SYNC_IN    (* (reg8 *) LED7__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define LED7_PRTDSI__OE_SEL0        (* (reg8 *) LED7__PRTDSI__OE_SEL0) 
#define LED7_PRTDSI__OE_SEL1        (* (reg8 *) LED7__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define LED7_PRTDSI__OUT_SEL0       (* (reg8 *) LED7__PRTDSI__OUT_SEL0) 
#define LED7_PRTDSI__OUT_SEL1       (* (reg8 *) LED7__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define LED7_PRTDSI__SYNC_OUT       (* (reg8 *) LED7__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(LED7__SIO_CFG)
    #define LED7_SIO_HYST_EN        (* (reg8 *) LED7__SIO_HYST_EN)
    #define LED7_SIO_REG_HIFREQ     (* (reg8 *) LED7__SIO_REG_HIFREQ)
    #define LED7_SIO_CFG            (* (reg8 *) LED7__SIO_CFG)
    #define LED7_SIO_DIFF           (* (reg8 *) LED7__SIO_DIFF)
#endif /* (LED7__SIO_CFG) */

/* Interrupt Registers */
#if defined(LED7__INTSTAT)
    #define LED7_INTSTAT            (* (reg8 *) LED7__INTSTAT)
    #define LED7_SNAP               (* (reg8 *) LED7__SNAP)
    
	#define LED7_0_INTTYPE_REG 		(* (reg8 *) LED7__0__INTTYPE)
#endif /* (LED7__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_LED7_H */


/* [] END OF FILE */
