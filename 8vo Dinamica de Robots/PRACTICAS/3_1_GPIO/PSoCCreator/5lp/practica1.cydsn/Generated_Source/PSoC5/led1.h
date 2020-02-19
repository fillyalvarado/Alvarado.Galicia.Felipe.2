/*******************************************************************************
* File Name: led1.h  
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

#if !defined(CY_PINS_led1_H) /* Pins led1_H */
#define CY_PINS_led1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "led1_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 led1__PORT == 15 && ((led1__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    led1_Write(uint8 value);
void    led1_SetDriveMode(uint8 mode);
uint8   led1_ReadDataReg(void);
uint8   led1_Read(void);
void    led1_SetInterruptMode(uint16 position, uint16 mode);
uint8   led1_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the led1_SetDriveMode() function.
     *  @{
     */
        #define led1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define led1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define led1_DM_RES_UP          PIN_DM_RES_UP
        #define led1_DM_RES_DWN         PIN_DM_RES_DWN
        #define led1_DM_OD_LO           PIN_DM_OD_LO
        #define led1_DM_OD_HI           PIN_DM_OD_HI
        #define led1_DM_STRONG          PIN_DM_STRONG
        #define led1_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define led1_MASK               led1__MASK
#define led1_SHIFT              led1__SHIFT
#define led1_WIDTH              1u

/* Interrupt constants */
#if defined(led1__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in led1_SetInterruptMode() function.
     *  @{
     */
        #define led1_INTR_NONE      (uint16)(0x0000u)
        #define led1_INTR_RISING    (uint16)(0x0001u)
        #define led1_INTR_FALLING   (uint16)(0x0002u)
        #define led1_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define led1_INTR_MASK      (0x01u) 
#endif /* (led1__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define led1_PS                     (* (reg8 *) led1__PS)
/* Data Register */
#define led1_DR                     (* (reg8 *) led1__DR)
/* Port Number */
#define led1_PRT_NUM                (* (reg8 *) led1__PRT) 
/* Connect to Analog Globals */                                                  
#define led1_AG                     (* (reg8 *) led1__AG)                       
/* Analog MUX bux enable */
#define led1_AMUX                   (* (reg8 *) led1__AMUX) 
/* Bidirectional Enable */                                                        
#define led1_BIE                    (* (reg8 *) led1__BIE)
/* Bit-mask for Aliased Register Access */
#define led1_BIT_MASK               (* (reg8 *) led1__BIT_MASK)
/* Bypass Enable */
#define led1_BYP                    (* (reg8 *) led1__BYP)
/* Port wide control signals */                                                   
#define led1_CTL                    (* (reg8 *) led1__CTL)
/* Drive Modes */
#define led1_DM0                    (* (reg8 *) led1__DM0) 
#define led1_DM1                    (* (reg8 *) led1__DM1)
#define led1_DM2                    (* (reg8 *) led1__DM2) 
/* Input Buffer Disable Override */
#define led1_INP_DIS                (* (reg8 *) led1__INP_DIS)
/* LCD Common or Segment Drive */
#define led1_LCD_COM_SEG            (* (reg8 *) led1__LCD_COM_SEG)
/* Enable Segment LCD */
#define led1_LCD_EN                 (* (reg8 *) led1__LCD_EN)
/* Slew Rate Control */
#define led1_SLW                    (* (reg8 *) led1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define led1_PRTDSI__CAPS_SEL       (* (reg8 *) led1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define led1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) led1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define led1_PRTDSI__OE_SEL0        (* (reg8 *) led1__PRTDSI__OE_SEL0) 
#define led1_PRTDSI__OE_SEL1        (* (reg8 *) led1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define led1_PRTDSI__OUT_SEL0       (* (reg8 *) led1__PRTDSI__OUT_SEL0) 
#define led1_PRTDSI__OUT_SEL1       (* (reg8 *) led1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define led1_PRTDSI__SYNC_OUT       (* (reg8 *) led1__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(led1__SIO_CFG)
    #define led1_SIO_HYST_EN        (* (reg8 *) led1__SIO_HYST_EN)
    #define led1_SIO_REG_HIFREQ     (* (reg8 *) led1__SIO_REG_HIFREQ)
    #define led1_SIO_CFG            (* (reg8 *) led1__SIO_CFG)
    #define led1_SIO_DIFF           (* (reg8 *) led1__SIO_DIFF)
#endif /* (led1__SIO_CFG) */

/* Interrupt Registers */
#if defined(led1__INTSTAT)
    #define led1_INTSTAT            (* (reg8 *) led1__INTSTAT)
    #define led1_SNAP               (* (reg8 *) led1__SNAP)
    
	#define led1_0_INTTYPE_REG 		(* (reg8 *) led1__0__INTTYPE)
#endif /* (led1__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_led1_H */


/* [] END OF FILE */
