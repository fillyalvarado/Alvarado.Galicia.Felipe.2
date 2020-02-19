/*******************************************************************************
* File Name: led6.h  
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

#if !defined(CY_PINS_led6_H) /* Pins led6_H */
#define CY_PINS_led6_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "led6_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 led6__PORT == 15 && ((led6__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    led6_Write(uint8 value);
void    led6_SetDriveMode(uint8 mode);
uint8   led6_ReadDataReg(void);
uint8   led6_Read(void);
void    led6_SetInterruptMode(uint16 position, uint16 mode);
uint8   led6_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the led6_SetDriveMode() function.
     *  @{
     */
        #define led6_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define led6_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define led6_DM_RES_UP          PIN_DM_RES_UP
        #define led6_DM_RES_DWN         PIN_DM_RES_DWN
        #define led6_DM_OD_LO           PIN_DM_OD_LO
        #define led6_DM_OD_HI           PIN_DM_OD_HI
        #define led6_DM_STRONG          PIN_DM_STRONG
        #define led6_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define led6_MASK               led6__MASK
#define led6_SHIFT              led6__SHIFT
#define led6_WIDTH              1u

/* Interrupt constants */
#if defined(led6__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in led6_SetInterruptMode() function.
     *  @{
     */
        #define led6_INTR_NONE      (uint16)(0x0000u)
        #define led6_INTR_RISING    (uint16)(0x0001u)
        #define led6_INTR_FALLING   (uint16)(0x0002u)
        #define led6_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define led6_INTR_MASK      (0x01u) 
#endif /* (led6__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define led6_PS                     (* (reg8 *) led6__PS)
/* Data Register */
#define led6_DR                     (* (reg8 *) led6__DR)
/* Port Number */
#define led6_PRT_NUM                (* (reg8 *) led6__PRT) 
/* Connect to Analog Globals */                                                  
#define led6_AG                     (* (reg8 *) led6__AG)                       
/* Analog MUX bux enable */
#define led6_AMUX                   (* (reg8 *) led6__AMUX) 
/* Bidirectional Enable */                                                        
#define led6_BIE                    (* (reg8 *) led6__BIE)
/* Bit-mask for Aliased Register Access */
#define led6_BIT_MASK               (* (reg8 *) led6__BIT_MASK)
/* Bypass Enable */
#define led6_BYP                    (* (reg8 *) led6__BYP)
/* Port wide control signals */                                                   
#define led6_CTL                    (* (reg8 *) led6__CTL)
/* Drive Modes */
#define led6_DM0                    (* (reg8 *) led6__DM0) 
#define led6_DM1                    (* (reg8 *) led6__DM1)
#define led6_DM2                    (* (reg8 *) led6__DM2) 
/* Input Buffer Disable Override */
#define led6_INP_DIS                (* (reg8 *) led6__INP_DIS)
/* LCD Common or Segment Drive */
#define led6_LCD_COM_SEG            (* (reg8 *) led6__LCD_COM_SEG)
/* Enable Segment LCD */
#define led6_LCD_EN                 (* (reg8 *) led6__LCD_EN)
/* Slew Rate Control */
#define led6_SLW                    (* (reg8 *) led6__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define led6_PRTDSI__CAPS_SEL       (* (reg8 *) led6__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define led6_PRTDSI__DBL_SYNC_IN    (* (reg8 *) led6__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define led6_PRTDSI__OE_SEL0        (* (reg8 *) led6__PRTDSI__OE_SEL0) 
#define led6_PRTDSI__OE_SEL1        (* (reg8 *) led6__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define led6_PRTDSI__OUT_SEL0       (* (reg8 *) led6__PRTDSI__OUT_SEL0) 
#define led6_PRTDSI__OUT_SEL1       (* (reg8 *) led6__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define led6_PRTDSI__SYNC_OUT       (* (reg8 *) led6__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(led6__SIO_CFG)
    #define led6_SIO_HYST_EN        (* (reg8 *) led6__SIO_HYST_EN)
    #define led6_SIO_REG_HIFREQ     (* (reg8 *) led6__SIO_REG_HIFREQ)
    #define led6_SIO_CFG            (* (reg8 *) led6__SIO_CFG)
    #define led6_SIO_DIFF           (* (reg8 *) led6__SIO_DIFF)
#endif /* (led6__SIO_CFG) */

/* Interrupt Registers */
#if defined(led6__INTSTAT)
    #define led6_INTSTAT            (* (reg8 *) led6__INTSTAT)
    #define led6_SNAP               (* (reg8 *) led6__SNAP)
    
	#define led6_0_INTTYPE_REG 		(* (reg8 *) led6__0__INTTYPE)
#endif /* (led6__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_led6_H */


/* [] END OF FILE */
