/*******************************************************************************
* File Name: led4.h  
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

#if !defined(CY_PINS_led4_H) /* Pins led4_H */
#define CY_PINS_led4_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "led4_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 led4__PORT == 15 && ((led4__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    led4_Write(uint8 value);
void    led4_SetDriveMode(uint8 mode);
uint8   led4_ReadDataReg(void);
uint8   led4_Read(void);
void    led4_SetInterruptMode(uint16 position, uint16 mode);
uint8   led4_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the led4_SetDriveMode() function.
     *  @{
     */
        #define led4_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define led4_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define led4_DM_RES_UP          PIN_DM_RES_UP
        #define led4_DM_RES_DWN         PIN_DM_RES_DWN
        #define led4_DM_OD_LO           PIN_DM_OD_LO
        #define led4_DM_OD_HI           PIN_DM_OD_HI
        #define led4_DM_STRONG          PIN_DM_STRONG
        #define led4_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define led4_MASK               led4__MASK
#define led4_SHIFT              led4__SHIFT
#define led4_WIDTH              1u

/* Interrupt constants */
#if defined(led4__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in led4_SetInterruptMode() function.
     *  @{
     */
        #define led4_INTR_NONE      (uint16)(0x0000u)
        #define led4_INTR_RISING    (uint16)(0x0001u)
        #define led4_INTR_FALLING   (uint16)(0x0002u)
        #define led4_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define led4_INTR_MASK      (0x01u) 
#endif /* (led4__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define led4_PS                     (* (reg8 *) led4__PS)
/* Data Register */
#define led4_DR                     (* (reg8 *) led4__DR)
/* Port Number */
#define led4_PRT_NUM                (* (reg8 *) led4__PRT) 
/* Connect to Analog Globals */                                                  
#define led4_AG                     (* (reg8 *) led4__AG)                       
/* Analog MUX bux enable */
#define led4_AMUX                   (* (reg8 *) led4__AMUX) 
/* Bidirectional Enable */                                                        
#define led4_BIE                    (* (reg8 *) led4__BIE)
/* Bit-mask for Aliased Register Access */
#define led4_BIT_MASK               (* (reg8 *) led4__BIT_MASK)
/* Bypass Enable */
#define led4_BYP                    (* (reg8 *) led4__BYP)
/* Port wide control signals */                                                   
#define led4_CTL                    (* (reg8 *) led4__CTL)
/* Drive Modes */
#define led4_DM0                    (* (reg8 *) led4__DM0) 
#define led4_DM1                    (* (reg8 *) led4__DM1)
#define led4_DM2                    (* (reg8 *) led4__DM2) 
/* Input Buffer Disable Override */
#define led4_INP_DIS                (* (reg8 *) led4__INP_DIS)
/* LCD Common or Segment Drive */
#define led4_LCD_COM_SEG            (* (reg8 *) led4__LCD_COM_SEG)
/* Enable Segment LCD */
#define led4_LCD_EN                 (* (reg8 *) led4__LCD_EN)
/* Slew Rate Control */
#define led4_SLW                    (* (reg8 *) led4__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define led4_PRTDSI__CAPS_SEL       (* (reg8 *) led4__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define led4_PRTDSI__DBL_SYNC_IN    (* (reg8 *) led4__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define led4_PRTDSI__OE_SEL0        (* (reg8 *) led4__PRTDSI__OE_SEL0) 
#define led4_PRTDSI__OE_SEL1        (* (reg8 *) led4__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define led4_PRTDSI__OUT_SEL0       (* (reg8 *) led4__PRTDSI__OUT_SEL0) 
#define led4_PRTDSI__OUT_SEL1       (* (reg8 *) led4__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define led4_PRTDSI__SYNC_OUT       (* (reg8 *) led4__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(led4__SIO_CFG)
    #define led4_SIO_HYST_EN        (* (reg8 *) led4__SIO_HYST_EN)
    #define led4_SIO_REG_HIFREQ     (* (reg8 *) led4__SIO_REG_HIFREQ)
    #define led4_SIO_CFG            (* (reg8 *) led4__SIO_CFG)
    #define led4_SIO_DIFF           (* (reg8 *) led4__SIO_DIFF)
#endif /* (led4__SIO_CFG) */

/* Interrupt Registers */
#if defined(led4__INTSTAT)
    #define led4_INTSTAT            (* (reg8 *) led4__INTSTAT)
    #define led4_SNAP               (* (reg8 *) led4__SNAP)
    
	#define led4_0_INTTYPE_REG 		(* (reg8 *) led4__0__INTTYPE)
#endif /* (led4__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_led4_H */


/* [] END OF FILE */
