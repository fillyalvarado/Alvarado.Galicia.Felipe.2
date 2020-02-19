/*******************************************************************************
* File Name: sw3.h  
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

#if !defined(CY_PINS_sw3_H) /* Pins sw3_H */
#define CY_PINS_sw3_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "sw3_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 sw3__PORT == 15 && ((sw3__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    sw3_Write(uint8 value);
void    sw3_SetDriveMode(uint8 mode);
uint8   sw3_ReadDataReg(void);
uint8   sw3_Read(void);
void    sw3_SetInterruptMode(uint16 position, uint16 mode);
uint8   sw3_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the sw3_SetDriveMode() function.
     *  @{
     */
        #define sw3_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define sw3_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define sw3_DM_RES_UP          PIN_DM_RES_UP
        #define sw3_DM_RES_DWN         PIN_DM_RES_DWN
        #define sw3_DM_OD_LO           PIN_DM_OD_LO
        #define sw3_DM_OD_HI           PIN_DM_OD_HI
        #define sw3_DM_STRONG          PIN_DM_STRONG
        #define sw3_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define sw3_MASK               sw3__MASK
#define sw3_SHIFT              sw3__SHIFT
#define sw3_WIDTH              1u

/* Interrupt constants */
#if defined(sw3__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in sw3_SetInterruptMode() function.
     *  @{
     */
        #define sw3_INTR_NONE      (uint16)(0x0000u)
        #define sw3_INTR_RISING    (uint16)(0x0001u)
        #define sw3_INTR_FALLING   (uint16)(0x0002u)
        #define sw3_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define sw3_INTR_MASK      (0x01u) 
#endif /* (sw3__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define sw3_PS                     (* (reg8 *) sw3__PS)
/* Data Register */
#define sw3_DR                     (* (reg8 *) sw3__DR)
/* Port Number */
#define sw3_PRT_NUM                (* (reg8 *) sw3__PRT) 
/* Connect to Analog Globals */                                                  
#define sw3_AG                     (* (reg8 *) sw3__AG)                       
/* Analog MUX bux enable */
#define sw3_AMUX                   (* (reg8 *) sw3__AMUX) 
/* Bidirectional Enable */                                                        
#define sw3_BIE                    (* (reg8 *) sw3__BIE)
/* Bit-mask for Aliased Register Access */
#define sw3_BIT_MASK               (* (reg8 *) sw3__BIT_MASK)
/* Bypass Enable */
#define sw3_BYP                    (* (reg8 *) sw3__BYP)
/* Port wide control signals */                                                   
#define sw3_CTL                    (* (reg8 *) sw3__CTL)
/* Drive Modes */
#define sw3_DM0                    (* (reg8 *) sw3__DM0) 
#define sw3_DM1                    (* (reg8 *) sw3__DM1)
#define sw3_DM2                    (* (reg8 *) sw3__DM2) 
/* Input Buffer Disable Override */
#define sw3_INP_DIS                (* (reg8 *) sw3__INP_DIS)
/* LCD Common or Segment Drive */
#define sw3_LCD_COM_SEG            (* (reg8 *) sw3__LCD_COM_SEG)
/* Enable Segment LCD */
#define sw3_LCD_EN                 (* (reg8 *) sw3__LCD_EN)
/* Slew Rate Control */
#define sw3_SLW                    (* (reg8 *) sw3__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define sw3_PRTDSI__CAPS_SEL       (* (reg8 *) sw3__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define sw3_PRTDSI__DBL_SYNC_IN    (* (reg8 *) sw3__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define sw3_PRTDSI__OE_SEL0        (* (reg8 *) sw3__PRTDSI__OE_SEL0) 
#define sw3_PRTDSI__OE_SEL1        (* (reg8 *) sw3__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define sw3_PRTDSI__OUT_SEL0       (* (reg8 *) sw3__PRTDSI__OUT_SEL0) 
#define sw3_PRTDSI__OUT_SEL1       (* (reg8 *) sw3__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define sw3_PRTDSI__SYNC_OUT       (* (reg8 *) sw3__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(sw3__SIO_CFG)
    #define sw3_SIO_HYST_EN        (* (reg8 *) sw3__SIO_HYST_EN)
    #define sw3_SIO_REG_HIFREQ     (* (reg8 *) sw3__SIO_REG_HIFREQ)
    #define sw3_SIO_CFG            (* (reg8 *) sw3__SIO_CFG)
    #define sw3_SIO_DIFF           (* (reg8 *) sw3__SIO_DIFF)
#endif /* (sw3__SIO_CFG) */

/* Interrupt Registers */
#if defined(sw3__INTSTAT)
    #define sw3_INTSTAT            (* (reg8 *) sw3__INTSTAT)
    #define sw3_SNAP               (* (reg8 *) sw3__SNAP)
    
	#define sw3_0_INTTYPE_REG 		(* (reg8 *) sw3__0__INTTYPE)
#endif /* (sw3__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_sw3_H */


/* [] END OF FILE */
