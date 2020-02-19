/*******************************************************************************
* File Name: led8.h  
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

#if !defined(CY_PINS_led8_H) /* Pins led8_H */
#define CY_PINS_led8_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "led8_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 led8__PORT == 15 && ((led8__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    led8_Write(uint8 value);
void    led8_SetDriveMode(uint8 mode);
uint8   led8_ReadDataReg(void);
uint8   led8_Read(void);
void    led8_SetInterruptMode(uint16 position, uint16 mode);
uint8   led8_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the led8_SetDriveMode() function.
     *  @{
     */
        #define led8_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define led8_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define led8_DM_RES_UP          PIN_DM_RES_UP
        #define led8_DM_RES_DWN         PIN_DM_RES_DWN
        #define led8_DM_OD_LO           PIN_DM_OD_LO
        #define led8_DM_OD_HI           PIN_DM_OD_HI
        #define led8_DM_STRONG          PIN_DM_STRONG
        #define led8_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define led8_MASK               led8__MASK
#define led8_SHIFT              led8__SHIFT
#define led8_WIDTH              1u

/* Interrupt constants */
#if defined(led8__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in led8_SetInterruptMode() function.
     *  @{
     */
        #define led8_INTR_NONE      (uint16)(0x0000u)
        #define led8_INTR_RISING    (uint16)(0x0001u)
        #define led8_INTR_FALLING   (uint16)(0x0002u)
        #define led8_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define led8_INTR_MASK      (0x01u) 
#endif /* (led8__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define led8_PS                     (* (reg8 *) led8__PS)
/* Data Register */
#define led8_DR                     (* (reg8 *) led8__DR)
/* Port Number */
#define led8_PRT_NUM                (* (reg8 *) led8__PRT) 
/* Connect to Analog Globals */                                                  
#define led8_AG                     (* (reg8 *) led8__AG)                       
/* Analog MUX bux enable */
#define led8_AMUX                   (* (reg8 *) led8__AMUX) 
/* Bidirectional Enable */                                                        
#define led8_BIE                    (* (reg8 *) led8__BIE)
/* Bit-mask for Aliased Register Access */
#define led8_BIT_MASK               (* (reg8 *) led8__BIT_MASK)
/* Bypass Enable */
#define led8_BYP                    (* (reg8 *) led8__BYP)
/* Port wide control signals */                                                   
#define led8_CTL                    (* (reg8 *) led8__CTL)
/* Drive Modes */
#define led8_DM0                    (* (reg8 *) led8__DM0) 
#define led8_DM1                    (* (reg8 *) led8__DM1)
#define led8_DM2                    (* (reg8 *) led8__DM2) 
/* Input Buffer Disable Override */
#define led8_INP_DIS                (* (reg8 *) led8__INP_DIS)
/* LCD Common or Segment Drive */
#define led8_LCD_COM_SEG            (* (reg8 *) led8__LCD_COM_SEG)
/* Enable Segment LCD */
#define led8_LCD_EN                 (* (reg8 *) led8__LCD_EN)
/* Slew Rate Control */
#define led8_SLW                    (* (reg8 *) led8__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define led8_PRTDSI__CAPS_SEL       (* (reg8 *) led8__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define led8_PRTDSI__DBL_SYNC_IN    (* (reg8 *) led8__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define led8_PRTDSI__OE_SEL0        (* (reg8 *) led8__PRTDSI__OE_SEL0) 
#define led8_PRTDSI__OE_SEL1        (* (reg8 *) led8__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define led8_PRTDSI__OUT_SEL0       (* (reg8 *) led8__PRTDSI__OUT_SEL0) 
#define led8_PRTDSI__OUT_SEL1       (* (reg8 *) led8__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define led8_PRTDSI__SYNC_OUT       (* (reg8 *) led8__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(led8__SIO_CFG)
    #define led8_SIO_HYST_EN        (* (reg8 *) led8__SIO_HYST_EN)
    #define led8_SIO_REG_HIFREQ     (* (reg8 *) led8__SIO_REG_HIFREQ)
    #define led8_SIO_CFG            (* (reg8 *) led8__SIO_CFG)
    #define led8_SIO_DIFF           (* (reg8 *) led8__SIO_DIFF)
#endif /* (led8__SIO_CFG) */

/* Interrupt Registers */
#if defined(led8__INTSTAT)
    #define led8_INTSTAT            (* (reg8 *) led8__INTSTAT)
    #define led8_SNAP               (* (reg8 *) led8__SNAP)
    
	#define led8_0_INTTYPE_REG 		(* (reg8 *) led8__0__INTTYPE)
#endif /* (led8__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_led8_H */


/* [] END OF FILE */
