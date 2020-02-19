/*******************************************************************************
* File Name: sw.h  
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

#if !defined(CY_PINS_sw_H) /* Pins sw_H */
#define CY_PINS_sw_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "sw_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 sw__PORT == 15 && ((sw__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    sw_Write(uint8 value);
void    sw_SetDriveMode(uint8 mode);
uint8   sw_ReadDataReg(void);
uint8   sw_Read(void);
void    sw_SetInterruptMode(uint16 position, uint16 mode);
uint8   sw_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the sw_SetDriveMode() function.
     *  @{
     */
        #define sw_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define sw_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define sw_DM_RES_UP          PIN_DM_RES_UP
        #define sw_DM_RES_DWN         PIN_DM_RES_DWN
        #define sw_DM_OD_LO           PIN_DM_OD_LO
        #define sw_DM_OD_HI           PIN_DM_OD_HI
        #define sw_DM_STRONG          PIN_DM_STRONG
        #define sw_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define sw_MASK               sw__MASK
#define sw_SHIFT              sw__SHIFT
#define sw_WIDTH              1u

/* Interrupt constants */
#if defined(sw__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in sw_SetInterruptMode() function.
     *  @{
     */
        #define sw_INTR_NONE      (uint16)(0x0000u)
        #define sw_INTR_RISING    (uint16)(0x0001u)
        #define sw_INTR_FALLING   (uint16)(0x0002u)
        #define sw_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define sw_INTR_MASK      (0x01u) 
#endif /* (sw__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define sw_PS                     (* (reg8 *) sw__PS)
/* Data Register */
#define sw_DR                     (* (reg8 *) sw__DR)
/* Port Number */
#define sw_PRT_NUM                (* (reg8 *) sw__PRT) 
/* Connect to Analog Globals */                                                  
#define sw_AG                     (* (reg8 *) sw__AG)                       
/* Analog MUX bux enable */
#define sw_AMUX                   (* (reg8 *) sw__AMUX) 
/* Bidirectional Enable */                                                        
#define sw_BIE                    (* (reg8 *) sw__BIE)
/* Bit-mask for Aliased Register Access */
#define sw_BIT_MASK               (* (reg8 *) sw__BIT_MASK)
/* Bypass Enable */
#define sw_BYP                    (* (reg8 *) sw__BYP)
/* Port wide control signals */                                                   
#define sw_CTL                    (* (reg8 *) sw__CTL)
/* Drive Modes */
#define sw_DM0                    (* (reg8 *) sw__DM0) 
#define sw_DM1                    (* (reg8 *) sw__DM1)
#define sw_DM2                    (* (reg8 *) sw__DM2) 
/* Input Buffer Disable Override */
#define sw_INP_DIS                (* (reg8 *) sw__INP_DIS)
/* LCD Common or Segment Drive */
#define sw_LCD_COM_SEG            (* (reg8 *) sw__LCD_COM_SEG)
/* Enable Segment LCD */
#define sw_LCD_EN                 (* (reg8 *) sw__LCD_EN)
/* Slew Rate Control */
#define sw_SLW                    (* (reg8 *) sw__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define sw_PRTDSI__CAPS_SEL       (* (reg8 *) sw__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define sw_PRTDSI__DBL_SYNC_IN    (* (reg8 *) sw__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define sw_PRTDSI__OE_SEL0        (* (reg8 *) sw__PRTDSI__OE_SEL0) 
#define sw_PRTDSI__OE_SEL1        (* (reg8 *) sw__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define sw_PRTDSI__OUT_SEL0       (* (reg8 *) sw__PRTDSI__OUT_SEL0) 
#define sw_PRTDSI__OUT_SEL1       (* (reg8 *) sw__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define sw_PRTDSI__SYNC_OUT       (* (reg8 *) sw__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(sw__SIO_CFG)
    #define sw_SIO_HYST_EN        (* (reg8 *) sw__SIO_HYST_EN)
    #define sw_SIO_REG_HIFREQ     (* (reg8 *) sw__SIO_REG_HIFREQ)
    #define sw_SIO_CFG            (* (reg8 *) sw__SIO_CFG)
    #define sw_SIO_DIFF           (* (reg8 *) sw__SIO_DIFF)
#endif /* (sw__SIO_CFG) */

/* Interrupt Registers */
#if defined(sw__INTSTAT)
    #define sw_INTSTAT            (* (reg8 *) sw__INTSTAT)
    #define sw_SNAP               (* (reg8 *) sw__SNAP)
    
	#define sw_0_INTTYPE_REG 		(* (reg8 *) sw__0__INTTYPE)
#endif /* (sw__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_sw_H */


/* [] END OF FILE */
