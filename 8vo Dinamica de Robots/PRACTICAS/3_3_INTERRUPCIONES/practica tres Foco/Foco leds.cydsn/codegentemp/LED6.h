/*******************************************************************************
* File Name: LED6.h  
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

#if !defined(CY_PINS_LED6_H) /* Pins LED6_H */
#define CY_PINS_LED6_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "LED6_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 LED6__PORT == 15 && ((LED6__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    LED6_Write(uint8 value);
void    LED6_SetDriveMode(uint8 mode);
uint8   LED6_ReadDataReg(void);
uint8   LED6_Read(void);
void    LED6_SetInterruptMode(uint16 position, uint16 mode);
uint8   LED6_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the LED6_SetDriveMode() function.
     *  @{
     */
        #define LED6_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define LED6_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define LED6_DM_RES_UP          PIN_DM_RES_UP
        #define LED6_DM_RES_DWN         PIN_DM_RES_DWN
        #define LED6_DM_OD_LO           PIN_DM_OD_LO
        #define LED6_DM_OD_HI           PIN_DM_OD_HI
        #define LED6_DM_STRONG          PIN_DM_STRONG
        #define LED6_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define LED6_MASK               LED6__MASK
#define LED6_SHIFT              LED6__SHIFT
#define LED6_WIDTH              1u

/* Interrupt constants */
#if defined(LED6__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in LED6_SetInterruptMode() function.
     *  @{
     */
        #define LED6_INTR_NONE      (uint16)(0x0000u)
        #define LED6_INTR_RISING    (uint16)(0x0001u)
        #define LED6_INTR_FALLING   (uint16)(0x0002u)
        #define LED6_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define LED6_INTR_MASK      (0x01u) 
#endif /* (LED6__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define LED6_PS                     (* (reg8 *) LED6__PS)
/* Data Register */
#define LED6_DR                     (* (reg8 *) LED6__DR)
/* Port Number */
#define LED6_PRT_NUM                (* (reg8 *) LED6__PRT) 
/* Connect to Analog Globals */                                                  
#define LED6_AG                     (* (reg8 *) LED6__AG)                       
/* Analog MUX bux enable */
#define LED6_AMUX                   (* (reg8 *) LED6__AMUX) 
/* Bidirectional Enable */                                                        
#define LED6_BIE                    (* (reg8 *) LED6__BIE)
/* Bit-mask for Aliased Register Access */
#define LED6_BIT_MASK               (* (reg8 *) LED6__BIT_MASK)
/* Bypass Enable */
#define LED6_BYP                    (* (reg8 *) LED6__BYP)
/* Port wide control signals */                                                   
#define LED6_CTL                    (* (reg8 *) LED6__CTL)
/* Drive Modes */
#define LED6_DM0                    (* (reg8 *) LED6__DM0) 
#define LED6_DM1                    (* (reg8 *) LED6__DM1)
#define LED6_DM2                    (* (reg8 *) LED6__DM2) 
/* Input Buffer Disable Override */
#define LED6_INP_DIS                (* (reg8 *) LED6__INP_DIS)
/* LCD Common or Segment Drive */
#define LED6_LCD_COM_SEG            (* (reg8 *) LED6__LCD_COM_SEG)
/* Enable Segment LCD */
#define LED6_LCD_EN                 (* (reg8 *) LED6__LCD_EN)
/* Slew Rate Control */
#define LED6_SLW                    (* (reg8 *) LED6__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define LED6_PRTDSI__CAPS_SEL       (* (reg8 *) LED6__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define LED6_PRTDSI__DBL_SYNC_IN    (* (reg8 *) LED6__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define LED6_PRTDSI__OE_SEL0        (* (reg8 *) LED6__PRTDSI__OE_SEL0) 
#define LED6_PRTDSI__OE_SEL1        (* (reg8 *) LED6__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define LED6_PRTDSI__OUT_SEL0       (* (reg8 *) LED6__PRTDSI__OUT_SEL0) 
#define LED6_PRTDSI__OUT_SEL1       (* (reg8 *) LED6__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define LED6_PRTDSI__SYNC_OUT       (* (reg8 *) LED6__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(LED6__SIO_CFG)
    #define LED6_SIO_HYST_EN        (* (reg8 *) LED6__SIO_HYST_EN)
    #define LED6_SIO_REG_HIFREQ     (* (reg8 *) LED6__SIO_REG_HIFREQ)
    #define LED6_SIO_CFG            (* (reg8 *) LED6__SIO_CFG)
    #define LED6_SIO_DIFF           (* (reg8 *) LED6__SIO_DIFF)
#endif /* (LED6__SIO_CFG) */

/* Interrupt Registers */
#if defined(LED6__INTSTAT)
    #define LED6_INTSTAT            (* (reg8 *) LED6__INTSTAT)
    #define LED6_SNAP               (* (reg8 *) LED6__SNAP)
    
	#define LED6_0_INTTYPE_REG 		(* (reg8 *) LED6__0__INTTYPE)
#endif /* (LED6__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_LED6_H */


/* [] END OF FILE */
