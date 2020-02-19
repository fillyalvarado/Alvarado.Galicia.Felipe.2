/*******************************************************************************
* File Name: FOCO.h  
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

#if !defined(CY_PINS_FOCO_H) /* Pins FOCO_H */
#define CY_PINS_FOCO_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "FOCO_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 FOCO__PORT == 15 && ((FOCO__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    FOCO_Write(uint8 value);
void    FOCO_SetDriveMode(uint8 mode);
uint8   FOCO_ReadDataReg(void);
uint8   FOCO_Read(void);
void    FOCO_SetInterruptMode(uint16 position, uint16 mode);
uint8   FOCO_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the FOCO_SetDriveMode() function.
     *  @{
     */
        #define FOCO_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define FOCO_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define FOCO_DM_RES_UP          PIN_DM_RES_UP
        #define FOCO_DM_RES_DWN         PIN_DM_RES_DWN
        #define FOCO_DM_OD_LO           PIN_DM_OD_LO
        #define FOCO_DM_OD_HI           PIN_DM_OD_HI
        #define FOCO_DM_STRONG          PIN_DM_STRONG
        #define FOCO_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define FOCO_MASK               FOCO__MASK
#define FOCO_SHIFT              FOCO__SHIFT
#define FOCO_WIDTH              1u

/* Interrupt constants */
#if defined(FOCO__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in FOCO_SetInterruptMode() function.
     *  @{
     */
        #define FOCO_INTR_NONE      (uint16)(0x0000u)
        #define FOCO_INTR_RISING    (uint16)(0x0001u)
        #define FOCO_INTR_FALLING   (uint16)(0x0002u)
        #define FOCO_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define FOCO_INTR_MASK      (0x01u) 
#endif /* (FOCO__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define FOCO_PS                     (* (reg8 *) FOCO__PS)
/* Data Register */
#define FOCO_DR                     (* (reg8 *) FOCO__DR)
/* Port Number */
#define FOCO_PRT_NUM                (* (reg8 *) FOCO__PRT) 
/* Connect to Analog Globals */                                                  
#define FOCO_AG                     (* (reg8 *) FOCO__AG)                       
/* Analog MUX bux enable */
#define FOCO_AMUX                   (* (reg8 *) FOCO__AMUX) 
/* Bidirectional Enable */                                                        
#define FOCO_BIE                    (* (reg8 *) FOCO__BIE)
/* Bit-mask for Aliased Register Access */
#define FOCO_BIT_MASK               (* (reg8 *) FOCO__BIT_MASK)
/* Bypass Enable */
#define FOCO_BYP                    (* (reg8 *) FOCO__BYP)
/* Port wide control signals */                                                   
#define FOCO_CTL                    (* (reg8 *) FOCO__CTL)
/* Drive Modes */
#define FOCO_DM0                    (* (reg8 *) FOCO__DM0) 
#define FOCO_DM1                    (* (reg8 *) FOCO__DM1)
#define FOCO_DM2                    (* (reg8 *) FOCO__DM2) 
/* Input Buffer Disable Override */
#define FOCO_INP_DIS                (* (reg8 *) FOCO__INP_DIS)
/* LCD Common or Segment Drive */
#define FOCO_LCD_COM_SEG            (* (reg8 *) FOCO__LCD_COM_SEG)
/* Enable Segment LCD */
#define FOCO_LCD_EN                 (* (reg8 *) FOCO__LCD_EN)
/* Slew Rate Control */
#define FOCO_SLW                    (* (reg8 *) FOCO__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define FOCO_PRTDSI__CAPS_SEL       (* (reg8 *) FOCO__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define FOCO_PRTDSI__DBL_SYNC_IN    (* (reg8 *) FOCO__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define FOCO_PRTDSI__OE_SEL0        (* (reg8 *) FOCO__PRTDSI__OE_SEL0) 
#define FOCO_PRTDSI__OE_SEL1        (* (reg8 *) FOCO__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define FOCO_PRTDSI__OUT_SEL0       (* (reg8 *) FOCO__PRTDSI__OUT_SEL0) 
#define FOCO_PRTDSI__OUT_SEL1       (* (reg8 *) FOCO__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define FOCO_PRTDSI__SYNC_OUT       (* (reg8 *) FOCO__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(FOCO__SIO_CFG)
    #define FOCO_SIO_HYST_EN        (* (reg8 *) FOCO__SIO_HYST_EN)
    #define FOCO_SIO_REG_HIFREQ     (* (reg8 *) FOCO__SIO_REG_HIFREQ)
    #define FOCO_SIO_CFG            (* (reg8 *) FOCO__SIO_CFG)
    #define FOCO_SIO_DIFF           (* (reg8 *) FOCO__SIO_DIFF)
#endif /* (FOCO__SIO_CFG) */

/* Interrupt Registers */
#if defined(FOCO__INTSTAT)
    #define FOCO_INTSTAT            (* (reg8 *) FOCO__INTSTAT)
    #define FOCO_SNAP               (* (reg8 *) FOCO__SNAP)
    
	#define FOCO_0_INTTYPE_REG 		(* (reg8 *) FOCO__0__INTTYPE)
#endif /* (FOCO__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_FOCO_H */


/* [] END OF FILE */
