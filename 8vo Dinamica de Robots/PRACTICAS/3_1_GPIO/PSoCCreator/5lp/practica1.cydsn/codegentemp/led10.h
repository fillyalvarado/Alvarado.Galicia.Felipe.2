/*******************************************************************************
* File Name: led10.h  
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

#if !defined(CY_PINS_led10_H) /* Pins led10_H */
#define CY_PINS_led10_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "led10_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 led10__PORT == 15 && ((led10__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    led10_Write(uint8 value);
void    led10_SetDriveMode(uint8 mode);
uint8   led10_ReadDataReg(void);
uint8   led10_Read(void);
void    led10_SetInterruptMode(uint16 position, uint16 mode);
uint8   led10_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the led10_SetDriveMode() function.
     *  @{
     */
        #define led10_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define led10_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define led10_DM_RES_UP          PIN_DM_RES_UP
        #define led10_DM_RES_DWN         PIN_DM_RES_DWN
        #define led10_DM_OD_LO           PIN_DM_OD_LO
        #define led10_DM_OD_HI           PIN_DM_OD_HI
        #define led10_DM_STRONG          PIN_DM_STRONG
        #define led10_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define led10_MASK               led10__MASK
#define led10_SHIFT              led10__SHIFT
#define led10_WIDTH              1u

/* Interrupt constants */
#if defined(led10__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in led10_SetInterruptMode() function.
     *  @{
     */
        #define led10_INTR_NONE      (uint16)(0x0000u)
        #define led10_INTR_RISING    (uint16)(0x0001u)
        #define led10_INTR_FALLING   (uint16)(0x0002u)
        #define led10_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define led10_INTR_MASK      (0x01u) 
#endif /* (led10__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define led10_PS                     (* (reg8 *) led10__PS)
/* Data Register */
#define led10_DR                     (* (reg8 *) led10__DR)
/* Port Number */
#define led10_PRT_NUM                (* (reg8 *) led10__PRT) 
/* Connect to Analog Globals */                                                  
#define led10_AG                     (* (reg8 *) led10__AG)                       
/* Analog MUX bux enable */
#define led10_AMUX                   (* (reg8 *) led10__AMUX) 
/* Bidirectional Enable */                                                        
#define led10_BIE                    (* (reg8 *) led10__BIE)
/* Bit-mask for Aliased Register Access */
#define led10_BIT_MASK               (* (reg8 *) led10__BIT_MASK)
/* Bypass Enable */
#define led10_BYP                    (* (reg8 *) led10__BYP)
/* Port wide control signals */                                                   
#define led10_CTL                    (* (reg8 *) led10__CTL)
/* Drive Modes */
#define led10_DM0                    (* (reg8 *) led10__DM0) 
#define led10_DM1                    (* (reg8 *) led10__DM1)
#define led10_DM2                    (* (reg8 *) led10__DM2) 
/* Input Buffer Disable Override */
#define led10_INP_DIS                (* (reg8 *) led10__INP_DIS)
/* LCD Common or Segment Drive */
#define led10_LCD_COM_SEG            (* (reg8 *) led10__LCD_COM_SEG)
/* Enable Segment LCD */
#define led10_LCD_EN                 (* (reg8 *) led10__LCD_EN)
/* Slew Rate Control */
#define led10_SLW                    (* (reg8 *) led10__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define led10_PRTDSI__CAPS_SEL       (* (reg8 *) led10__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define led10_PRTDSI__DBL_SYNC_IN    (* (reg8 *) led10__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define led10_PRTDSI__OE_SEL0        (* (reg8 *) led10__PRTDSI__OE_SEL0) 
#define led10_PRTDSI__OE_SEL1        (* (reg8 *) led10__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define led10_PRTDSI__OUT_SEL0       (* (reg8 *) led10__PRTDSI__OUT_SEL0) 
#define led10_PRTDSI__OUT_SEL1       (* (reg8 *) led10__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define led10_PRTDSI__SYNC_OUT       (* (reg8 *) led10__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(led10__SIO_CFG)
    #define led10_SIO_HYST_EN        (* (reg8 *) led10__SIO_HYST_EN)
    #define led10_SIO_REG_HIFREQ     (* (reg8 *) led10__SIO_REG_HIFREQ)
    #define led10_SIO_CFG            (* (reg8 *) led10__SIO_CFG)
    #define led10_SIO_DIFF           (* (reg8 *) led10__SIO_DIFF)
#endif /* (led10__SIO_CFG) */

/* Interrupt Registers */
#if defined(led10__INTSTAT)
    #define led10_INTSTAT            (* (reg8 *) led10__INTSTAT)
    #define led10_SNAP               (* (reg8 *) led10__SNAP)
    
	#define led10_0_INTTYPE_REG 		(* (reg8 *) led10__0__INTTYPE)
#endif /* (led10__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_led10_H */


/* [] END OF FILE */
