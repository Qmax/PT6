/*******************************************************************************
* File Name: I_SEL.h  
* Version 1.60
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#if !defined(CY_PINS_I_SEL_H) /* Pins I_SEL_H */
#define CY_PINS_I_SEL_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "I_SEL_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    I_SEL_Write(uint8 value) ;
void    I_SEL_SetDriveMode(uint8 mode) ;
uint8   I_SEL_ReadDataReg(void) ;
uint8   I_SEL_Read(void) ;
uint8   I_SEL_ClearInterrupt(void) ;

/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define I_SEL_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define I_SEL_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define I_SEL_DM_RES_UP          PIN_DM_RES_UP
#define I_SEL_DM_RES_DWN         PIN_DM_RES_DWN
#define I_SEL_DM_OD_LO           PIN_DM_OD_LO
#define I_SEL_DM_OD_HI           PIN_DM_OD_HI
#define I_SEL_DM_STRONG          PIN_DM_STRONG
#define I_SEL_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define I_SEL_MASK               I_SEL__MASK
#define I_SEL_SHIFT              I_SEL__SHIFT
#define I_SEL_WIDTH              1u

/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define I_SEL_PS                     (* (reg8 *) I_SEL__PS)
/* Data Register */
#define I_SEL_DR                     (* (reg8 *) I_SEL__DR)
/* Port Number */
#define I_SEL_PRT_NUM                (* (reg8 *) I_SEL__PRT) 
/* Connect to Analog Globals */                                                  
#define I_SEL_AG                     (* (reg8 *) I_SEL__AG)                       
/* Analog MUX bux enable */
#define I_SEL_AMUX                   (* (reg8 *) I_SEL__AMUX) 
/* Bidirectional Enable */                                                        
#define I_SEL_BIE                    (* (reg8 *) I_SEL__BIE)
/* Bit-mask for Aliased Register Access */
#define I_SEL_BIT_MASK               (* (reg8 *) I_SEL__BIT_MASK)
/* Bypass Enable */
#define I_SEL_BYP                    (* (reg8 *) I_SEL__BYP)
/* Port wide control signals */                                                   
#define I_SEL_CTL                    (* (reg8 *) I_SEL__CTL)
/* Drive Modes */
#define I_SEL_DM0                    (* (reg8 *) I_SEL__DM0) 
#define I_SEL_DM1                    (* (reg8 *) I_SEL__DM1)
#define I_SEL_DM2                    (* (reg8 *) I_SEL__DM2) 
/* Input Buffer Disable Override */
#define I_SEL_INP_DIS                (* (reg8 *) I_SEL__INP_DIS)
/* LCD Common or Segment Drive */
#define I_SEL_LCD_COM_SEG            (* (reg8 *) I_SEL__LCD_COM_SEG)
/* Enable Segment LCD */
#define I_SEL_LCD_EN                 (* (reg8 *) I_SEL__LCD_EN)
/* Slew Rate Control */
#define I_SEL_SLW                    (* (reg8 *) I_SEL__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define I_SEL_PRTDSI__CAPS_SEL       (* (reg8 *) I_SEL__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define I_SEL_PRTDSI__DBL_SYNC_IN    (* (reg8 *) I_SEL__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define I_SEL_PRTDSI__OE_SEL0        (* (reg8 *) I_SEL__PRTDSI__OE_SEL0) 
#define I_SEL_PRTDSI__OE_SEL1        (* (reg8 *) I_SEL__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define I_SEL_PRTDSI__OUT_SEL0       (* (reg8 *) I_SEL__PRTDSI__OUT_SEL0) 
#define I_SEL_PRTDSI__OUT_SEL1       (* (reg8 *) I_SEL__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define I_SEL_PRTDSI__SYNC_OUT       (* (reg8 *) I_SEL__PRTDSI__SYNC_OUT) 


#if defined(I_SEL__INTSTAT)  /* Interrupt Registers */

    #define I_SEL_INTSTAT                (* (reg8 *) I_SEL__INTSTAT)
    #define I_SEL_SNAP                   (* (reg8 *) I_SEL__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins I_SEL_H */


/* [] END OF FILE */
