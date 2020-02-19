/*******************************************************************************
* File Name: led9.h  
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

#if !defined(CY_PINS_led9_H) /* Pins led9_H */
#define CY_PINS_led9_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "led9_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 led9__PORT == 15 && ((led9__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    led9_Write(uint8 value);
void    led9_SetDriveMode(uint8 mode);
uint8   led9_ReadDataReg(void);
uint8   led9_Read(void);
void    led9_SetInterruptMode(uint16 position, uint16 mode);
uint8   led9_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the led9_SetDriveMode() function.
     *  @{
     */
        #define led9_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define led9_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define led9_DM_RES_UP          PIN_DM_RES_UP
        #define led9_DM_RES_DWN         PIN_DM_RES_DWN
        #define led9_DM_OD_LO           PIN_DM_OD_LO
        #define led9_DM_OD_HI           PIN_DM_OD_HI
        #define led9_DM_STRONG          PIN_DM_STRONG
        #define led9_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define led9_MASK               led9__MASK
#define led9_SHIFT              led9__SHIFT
#define led9_WIDTH              1u

/* Interrupt constants */
#if defined(led9__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in led9_SetInterruptMode() function.
     *  @{
     */
        #define led9_INTR_NONE      (uint16)(0x0000u)
        #define led9_INTR_RISING    (uint16)(0x0001u)
        #define led9_INTR_FALLING   (uint16)(0x0002u)
        #define led9_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define led9_INTR_MASK      (0x01u) 
#endif /* (led9__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define led9_PS                     (* (reg8 *) led9__PS)
/* Data Register */
#define led9_DR                     (* (reg8 *) led9__DR)
/* Port Number */
#define led9_PRT_NUM                (* (reg8 *) led9__PRT) 
/* Connect to Analog Globals */                                                  
#define led9_AG                     (* (reg8 *) led9__AG)                       
/* Analog MUX bux enable */
#define led9_AMUX                   (* (reg8 *) led9__AMUX) 
/* Bidirectional Enable */                                                        
#define led9_BIE                    (* (reg8 *) led9__BIE)
/* Bit-mask for Aliased Register Access */
#define led9_BIT_MASK               (* (reg8 *) led9__BIT_MASK)
/* Bypass Enable */
#define led9_BYP                    (* (reg8 *) led9__BYP)
/* Port wide control signals */                                                   
#define led9_CTL                    (* (reg8 *) led9__CTL)
/* Drive Modes */
#define led9_DM0                    (* (reg8 *) led9__DM0) 
#define led9_DM1                    (* (reg8 *) led9__DM1)
#define led9_DM2                    (* (reg8 *) led9__DM2) 
/* Input Buffer Disable Override */
#define led9_INP_DIS                (* (reg8 *) led9__INP_DIS)
/* LCD Common or Segment Drive */
#define led9_LCD_COM_SEG            (* (reg8 *) led9__LCD_COM_SEG)
/* Enable Segment LCD */
#define led9_LCD_EN                 (* (reg8 *) led9__LCD_EN)
/* Slew Rate Control */
#define led9_SLW                    (* (reg8 *) led9__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define led9_PRTDSI__CAPS_SEL       (* (reg8 *) led9__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define led9_PRTDSI__DBL_SYNC_IN    (* (reg8 *) led9__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define led9_PRTDSI__OE_SEL0        (* (reg8 *) led9__PRTDSI__OE_SEL0) 
#define led9_PRTDSI__OE_SEL1        (* (reg8 *) led9__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define led9_PRTDSI__OUT_SEL0       (* (reg8 *) led9__PRTDSI__OUT_SEL0) 
#define led9_PRTDSI__OUT_SEL1       (* (reg8 *) led9__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define led9_PRTDSI__SYNC_OUT       (* (reg8 *) led9__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(led9__SIO_CFG)
    #define led9_SIO_HYST_EN        (* (reg8 *) led9__SIO_HYST_EN)
    #define led9_SIO_REG_HIFREQ     (* (reg8 *) led9__SIO_REG_HIFREQ)
    #define led9_SIO_CFG            (* (reg8 *) led9__SIO_CFG)
    #define led9_SIO_DIFF           (* (reg8 *) led9__SIO_DIFF)
#endif /* (led9__SIO_CFG) */

/* Interrupt Registers */
#if defined(led9__INTSTAT)
    #define led9_INTSTAT            (* (reg8 *) led9__INTSTAT)
    #define led9_SNAP               (* (reg8 *) led9__SNAP)
    
	#define led9_0_INTTYPE_REG 		(* (reg8 *) led9__0__INTTYPE)
#endif /* (led9__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_led9_H */


/* [] END OF FILE */
