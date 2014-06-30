/*******************************************************************************
* File Name: PC_VI_2SEL0.h  
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

#if !defined(CY_PINS_PC_VI_2SEL0_H) /* Pins PC_VI_2SEL0_H */
#define CY_PINS_PC_VI_2SEL0_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "PC_VI_2SEL0_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    PC_VI_2SEL0_Write(uint8 value) ;
void    PC_VI_2SEL0_SetDriveMode(uint8 mode) ;
uint8   PC_VI_2SEL0_ReadDataReg(void) ;
uint8   PC_VI_2SEL0_Read(void) ;
uint8   PC_VI_2SEL0_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define PC_VI_2SEL0_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define PC_VI_2SEL0_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define PC_VI_2SEL0_DM_RES_UP          PIN_DM_RES_UP
#define PC_VI_2SEL0_DM_RES_DWN         PIN_DM_RES_DWN
#define PC_VI_2SEL0_DM_OD_LO           PIN_DM_OD_LO
#define PC_VI_2SEL0_DM_OD_HI           PIN_DM_OD_HI
#define PC_VI_2SEL0_DM_STRONG          PIN_DM_STRONG
#define PC_VI_2SEL0_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define PC_VI_2SEL0_MASK               PC_VI_2SEL0__MASK
#define PC_VI_2SEL0_SHIFT              PC_VI_2SEL0__SHIFT
#define PC_VI_2SEL0_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define PC_VI_2SEL0_PS                     (* (reg8 *) PC_VI_2SEL0__PS)
/* Data Register */
#define PC_VI_2SEL0_DR                     (* (reg8 *) PC_VI_2SEL0__DR)
/* Port Number */
#define PC_VI_2SEL0_PRT_NUM                (* (reg8 *) PC_VI_2SEL0__PRT) 
/* Connect to Analog Globals */                                                  
#define PC_VI_2SEL0_AG                     (* (reg8 *) PC_VI_2SEL0__AG)                       
/* Analog MUX bux enable */
#define PC_VI_2SEL0_AMUX                   (* (reg8 *) PC_VI_2SEL0__AMUX) 
/* Bidirectional Enable */                                                        
#define PC_VI_2SEL0_BIE                    (* (reg8 *) PC_VI_2SEL0__BIE)
/* Bit-mask for Aliased Register Access */
#define PC_VI_2SEL0_BIT_MASK               (* (reg8 *) PC_VI_2SEL0__BIT_MASK)
/* Bypass Enable */
#define PC_VI_2SEL0_BYP                    (* (reg8 *) PC_VI_2SEL0__BYP)
/* Port wide control signals */                                                   
#define PC_VI_2SEL0_CTL                    (* (reg8 *) PC_VI_2SEL0__CTL)
/* Drive Modes */
#define PC_VI_2SEL0_DM0                    (* (reg8 *) PC_VI_2SEL0__DM0) 
#define PC_VI_2SEL0_DM1                    (* (reg8 *) PC_VI_2SEL0__DM1)
#define PC_VI_2SEL0_DM2                    (* (reg8 *) PC_VI_2SEL0__DM2) 
/* Input Buffer Disable Override */
#define PC_VI_2SEL0_INP_DIS                (* (reg8 *) PC_VI_2SEL0__INP_DIS)
/* LCD Common or Segment Drive */
#define PC_VI_2SEL0_LCD_COM_SEG            (* (reg8 *) PC_VI_2SEL0__LCD_COM_SEG)
/* Enable Segment LCD */
#define PC_VI_2SEL0_LCD_EN                 (* (reg8 *) PC_VI_2SEL0__LCD_EN)
/* Slew Rate Control */
#define PC_VI_2SEL0_SLW                    (* (reg8 *) PC_VI_2SEL0__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define PC_VI_2SEL0_PRTDSI__CAPS_SEL       (* (reg8 *) PC_VI_2SEL0__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define PC_VI_2SEL0_PRTDSI__DBL_SYNC_IN    (* (reg8 *) PC_VI_2SEL0__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define PC_VI_2SEL0_PRTDSI__OE_SEL0        (* (reg8 *) PC_VI_2SEL0__PRTDSI__OE_SEL0) 
#define PC_VI_2SEL0_PRTDSI__OE_SEL1        (* (reg8 *) PC_VI_2SEL0__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define PC_VI_2SEL0_PRTDSI__OUT_SEL0       (* (reg8 *) PC_VI_2SEL0__PRTDSI__OUT_SEL0) 
#define PC_VI_2SEL0_PRTDSI__OUT_SEL1       (* (reg8 *) PC_VI_2SEL0__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define PC_VI_2SEL0_PRTDSI__SYNC_OUT       (* (reg8 *) PC_VI_2SEL0__PRTDSI__SYNC_OUT) 


#if defined(PC_VI_2SEL0__INTSTAT)  /* Interrupt Registers */

    #define PC_VI_2SEL0_INTSTAT                (* (reg8 *) PC_VI_2SEL0__INTSTAT)
    #define PC_VI_2SEL0_SNAP                   (* (reg8 *) PC_VI_2SEL0__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins PC_VI_2SEL0_H */


/* [] END OF FILE */
