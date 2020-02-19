/*******************************************************************************
* File Name: led5.h  
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

#if !defined(CY_PINS_led5_H) /* Pins led5_H */
#define CY_PINS_led5_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "led5_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 led5__PORT == 15 && ((led5__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    led5_Write(uint8 value);
void    led5_SetDriveMode(uint8 mode);
uint8   led5_ReadDataReg(void);
uint8   led5_Read(void);
void    led5_SetInterruptMode(uint16 position, uint16 mode);
uint8   led5_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the led5_SetDriveMode() function.
     *  @{
     */
        #define led5_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define led5_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define led5_DM_RES_UP          PIN_DM_RES_UP
        #define led5_DM_RES_DWN         PIN_DM_RES_DWN
        #define led5_DM_OD_LO           PIN_DM_OD_LO
        #define led5_DM_OD_HI           PIN_DM_OD_HI
        #define led5_DM_STRONG          PIN_DM_STRONG
        #define led5_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define led5_MASK               led5__MASK
#define led5_SHIFT              led5__SHIFT
#define led5_WIDTH              1u

/* Interrupt constants */
#if defined(led5__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in led5_SetInterruptMode() function.
     *  @{
     */
        #define led5_INTR_NONE      (uint16)(0x0000u)
        #define led5_INTR_RISING    (uint16)(0x0001u)
        #define led5_INTR_FALLING   (uint16)(0x0002u)
        #define led5_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define led5_INTR_MASK      (0x01u) 
#endif /* (led5__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define led5_PS                     (* (reg8 *) led5__PS)
/* Data Register */
#define led5_DR                     (* (reg8 *) led5__DR)
/* Port Number */
#define led5_PRT_NUM                (* (reg8 *) led5__PRT) 
/* Connect to Analog Globals */                                                  
#define led5_AG                     (* (reg8 *) led5__AG)                       
/* Analog MUX bux enable */
#define led5_AMUX                   (* (reg8 *) led5__AMUX) 
/* Bidirectional Enable */                                                        
#define led5_BIE                    (* (reg8 *) led5__BIE)
/* Bit-mask for Aliased Register Access */
#define led5_BIT_MASK               (* (reg8 *) led5__BIT_MASK)
/* Bypass Enable */
#define led5_BYP                    (* (reg8 *) led5__BYP)
/* Port wide control signals */                                                   
#define led5_CTL                    (* (reg8 *) led5__CTL)
/* Drive Modes */
#define led5_DM0                    (* (reg8 *) led5__DM0) 
#define led5_DM1                    (* (reg8 *) led5__DM1)
#define led5_DM2                    (* (reg8 *) led5__DM2) 
/* Input Buffer Disable Override */
#define led5_INP_DIS                (* (reg8 *) led5__INP_DIS)
/* LCD Common or Segment Drive */
#define led5_LCD_COM_SEG            (* (reg8 *) led5__LCD_COM_SEG)
/* Enable Segment LCD */
#define led5_LCD_EN                 (* (reg8 *) led5__LCD_EN)
/* Slew Rate Control */
#define led5_SLW                    (* (reg8 *) led5__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define led5_PRTDSI__CAPS_SEL       (* (reg8 *) led5__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define led5_PRTDSI__DBL_SYNC_IN    (* (reg8 *) led5__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define led5_PRTDSI__OE_SEL0        (* (reg8 *) led5__PRTDSI__OE_SEL0) 
#define led5_PRTDSI__OE_SEL1        (* (reg8 *) led5__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define led5_PRTDSI__OUT_SEL0       (* (reg8 *) led5__PRTDSI__OUT_SEL0) 
#define led5_PRTDSI__OUT_SEL1       (* (reg8 *) led5__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define led5_PRTDSI__SYNC_OUT       (* (reg8 *) led5__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(led5__SIO_CFG)
    #define led5_SIO_HYST_EN        (* (reg8 *) led5__SIO_HYST_EN)
    #define led5_SIO_REG_HIFREQ     (* (reg8 *) led5__SIO_REG_HIFREQ)
    #define led5_SIO_CFG            (* (reg8 *) led5__SIO_CFG)
    #define led5_SIO_DIFF           (* (reg8 *) led5__SIO_DIFF)
#endif /* (led5__SIO_CFG) */

/* Interrupt Registers */
#if defined(led5__INTSTAT)
    #define led5_INTSTAT            (* (reg8 *) led5__INTSTAT)
    #define led5_SNAP               (* (reg8 *) led5__SNAP)
    
	#define led5_0_INTTYPE_REG 		(* (reg8 *) led5__0__INTTYPE)
#endif /* (led5__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_led5_H */


/* [] END OF FILE */
