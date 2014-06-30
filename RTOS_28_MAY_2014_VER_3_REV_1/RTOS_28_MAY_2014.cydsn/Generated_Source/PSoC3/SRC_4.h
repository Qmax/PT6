/*******************************************************************************
* File Name: SRC_4.h  
* Version 1.90
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_SRC_4_H) /* Pins SRC_4_H */
#define CY_PINS_SRC_4_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "SRC_4_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    SRC_4_Write(uint8 value) ;
void    SRC_4_SetDriveMode(uint8 mode) ;
uint8   SRC_4_ReadDataReg(void) ;
uint8   SRC_4_Read(void) ;
uint8   SRC_4_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define SRC_4_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define SRC_4_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define SRC_4_DM_RES_UP          PIN_DM_RES_UP
#define SRC_4_DM_RES_DWN         PIN_DM_RES_DWN
#define SRC_4_DM_OD_LO           PIN_DM_OD_LO
#define SRC_4_DM_OD_HI           PIN_DM_OD_HI
#define SRC_4_DM_STRONG          PIN_DM_STRONG
#define SRC_4_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define SRC_4_MASK               SRC_4__MASK
#define SRC_4_SHIFT              SRC_4__SHIFT
#define SRC_4_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define SRC_4_PS                     (* (reg8 *) SRC_4__PS)
/* Data Register */
#define SRC_4_DR                     (* (reg8 *) SRC_4__DR)
/* Port Number */
#define SRC_4_PRT_NUM                (* (reg8 *) SRC_4__PRT) 
/* Connect to Analog Globals */                                                  
#define SRC_4_AG                     (* (reg8 *) SRC_4__AG)                       
/* Analog MUX bux enable */
#define SRC_4_AMUX                   (* (reg8 *) SRC_4__AMUX) 
/* Bidirectional Enable */                                                        
#define SRC_4_BIE                    (* (reg8 *) SRC_4__BIE)
/* Bit-mask for Aliased Register Access */
#define SRC_4_BIT_MASK               (* (reg8 *) SRC_4__BIT_MASK)
/* Bypass Enable */
#define SRC_4_BYP                    (* (reg8 *) SRC_4__BYP)
/* Port wide control signals */                                                   
#define SRC_4_CTL                    (* (reg8 *) SRC_4__CTL)
/* Drive Modes */
#define SRC_4_DM0                    (* (reg8 *) SRC_4__DM0) 
#define SRC_4_DM1                    (* (reg8 *) SRC_4__DM1)
#define SRC_4_DM2                    (* (reg8 *) SRC_4__DM2) 
/* Input Buffer Disable Override */
#define SRC_4_INP_DIS                (* (reg8 *) SRC_4__INP_DIS)
/* LCD Common or Segment Drive */
#define SRC_4_LCD_COM_SEG            (* (reg8 *) SRC_4__LCD_COM_SEG)
/* Enable Segment LCD */
#define SRC_4_LCD_EN                 (* (reg8 *) SRC_4__LCD_EN)
/* Slew Rate Control */
#define SRC_4_SLW                    (* (reg8 *) SRC_4__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define SRC_4_PRTDSI__CAPS_SEL       (* (reg8 *) SRC_4__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define SRC_4_PRTDSI__DBL_SYNC_IN    (* (reg8 *) SRC_4__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define SRC_4_PRTDSI__OE_SEL0        (* (reg8 *) SRC_4__PRTDSI__OE_SEL0) 
#define SRC_4_PRTDSI__OE_SEL1        (* (reg8 *) SRC_4__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define SRC_4_PRTDSI__OUT_SEL0       (* (reg8 *) SRC_4__PRTDSI__OUT_SEL0) 
#define SRC_4_PRTDSI__OUT_SEL1       (* (reg8 *) SRC_4__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define SRC_4_PRTDSI__SYNC_OUT       (* (reg8 *) SRC_4__PRTDSI__SYNC_OUT) 


#if defined(SRC_4__INTSTAT)  /* Interrupt Registers */

    #define SRC_4_INTSTAT                (* (reg8 *) SRC_4__INTSTAT)
    #define SRC_4_SNAP                   (* (reg8 *) SRC_4__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins SRC_4_H */


/* [] END OF FILE */
