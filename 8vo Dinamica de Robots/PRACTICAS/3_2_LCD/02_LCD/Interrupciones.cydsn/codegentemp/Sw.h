/*******************************************************************************
* File Name: Sw.h  
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

#if !defined(CY_PINS_Sw_H) /* Pins Sw_H */
#define CY_PINS_Sw_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Sw_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Sw__PORT == 15 && ((Sw__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Sw_Write(uint8 value);
void    Sw_SetDriveMode(uint8 mode);
uint8   Sw_ReadDataReg(void);
uint8   Sw_Read(void);
void    Sw_SetInterruptMode(uint16 position, uint16 mode);
uint8   Sw_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Sw_SetDriveMode() function.
     *  @{
     */
        #define Sw_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Sw_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Sw_DM_RES_UP          PIN_DM_RES_UP
        #define Sw_DM_RES_DWN         PIN_DM_RES_DWN
        #define Sw_DM_OD_LO           PIN_DM_OD_LO
        #define Sw_DM_OD_HI           PIN_DM_OD_HI
        #define Sw_DM_STRONG          PIN_DM_STRONG
        #define Sw_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Sw_MASK               Sw__MASK
#define Sw_SHIFT              Sw__SHIFT
#define Sw_WIDTH              1u

/* Interrupt constants */
#if defined(Sw__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Sw_SetInterruptMode() function.
     *  @{
     */
        #define Sw_INTR_NONE      (uint16)(0x0000u)
        #define Sw_INTR_RISING    (uint16)(0x0001u)
        #define Sw_INTR_FALLING   (uint16)(0x0002u)
        #define Sw_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Sw_INTR_MASK      (0x01u) 
#endif /* (Sw__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Sw_PS                     (* (reg8 *) Sw__PS)
/* Data Register */
#define Sw_DR                     (* (reg8 *) Sw__DR)
/* Port Number */
#define Sw_PRT_NUM                (* (reg8 *) Sw__PRT) 
/* Connect to Analog Globals */                                                  
#define Sw_AG                     (* (reg8 *) Sw__AG)                       
/* Analog MUX bux enable */
#define Sw_AMUX                   (* (reg8 *) Sw__AMUX) 
/* Bidirectional Enable */                                                        
#define Sw_BIE                    (* (reg8 *) Sw__BIE)
/* Bit-mask for Aliased Register Access */
#define Sw_BIT_MASK               (* (reg8 *) Sw__BIT_MASK)
/* Bypass Enable */
#define Sw_BYP                    (* (reg8 *) Sw__BYP)
/* Port wide control signals */                                                   
#define Sw_CTL                    (* (reg8 *) Sw__CTL)
/* Drive Modes */
#define Sw_DM0                    (* (reg8 *) Sw__DM0) 
#define Sw_DM1                    (* (reg8 *) Sw__DM1)
#define Sw_DM2                    (* (reg8 *) Sw__DM2) 
/* Input Buffer Disable Override */
#define Sw_INP_DIS                (* (reg8 *) Sw__INP_DIS)
/* LCD Common or Segment Drive */
#define Sw_LCD_COM_SEG            (* (reg8 *) Sw__LCD_COM_SEG)
/* Enable Segment LCD */
#define Sw_LCD_EN                 (* (reg8 *) Sw__LCD_EN)
/* Slew Rate Control */
#define Sw_SLW                    (* (reg8 *) Sw__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Sw_PRTDSI__CAPS_SEL       (* (reg8 *) Sw__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Sw_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Sw__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Sw_PRTDSI__OE_SEL0        (* (reg8 *) Sw__PRTDSI__OE_SEL0) 
#define Sw_PRTDSI__OE_SEL1        (* (reg8 *) Sw__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Sw_PRTDSI__OUT_SEL0       (* (reg8 *) Sw__PRTDSI__OUT_SEL0) 
#define Sw_PRTDSI__OUT_SEL1       (* (reg8 *) Sw__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Sw_PRTDSI__SYNC_OUT       (* (reg8 *) Sw__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Sw__SIO_CFG)
    #define Sw_SIO_HYST_EN        (* (reg8 *) Sw__SIO_HYST_EN)
    #define Sw_SIO_REG_HIFREQ     (* (reg8 *) Sw__SIO_REG_HIFREQ)
    #define Sw_SIO_CFG            (* (reg8 *) Sw__SIO_CFG)
    #define Sw_SIO_DIFF           (* (reg8 *) Sw__SIO_DIFF)
#endif /* (Sw__SIO_CFG) */

/* Interrupt Registers */
#if defined(Sw__INTSTAT)
    #define Sw_INTSTAT            (* (reg8 *) Sw__INTSTAT)
    #define Sw_SNAP               (* (reg8 *) Sw__SNAP)
    
	#define Sw_0_INTTYPE_REG 		(* (reg8 *) Sw__0__INTTYPE)
#endif /* (Sw__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Sw_H */


/* [] END OF FILE */
