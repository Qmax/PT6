/*******************************************************************************
* File Name: EN_SW1.h  
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

#if !defined(CY_PINS_EN_SW1_H) /* Pins EN_SW1_H */
#define CY_PINS_EN_SW1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "EN_SW1_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    EN_SW1_Write(uint8 value) ;
void    EN_SW1_SetDriveMode(uint8 mode) ;
uint8   EN_SW1_ReadDataReg(void) ;
uint8   EN_SW1_Read(void) ;
uint8   EN_SW1_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define EN_SW1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define EN_SW1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define EN_SW1_DM_RES_UP          PIN_DM_RES_UP
#define EN_SW1_DM_RES_DWN         PIN_DM_RES_DWN
#define EN_SW1_DM_OD_LO           PIN_DM_OD_LO
#define EN_SW1_DM_OD_HI           PIN_DM_OD_HI
#define EN_SW1_DM_STRONG          PIN_DM_STRONG
#define EN_SW1_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define EN_SW1_MASK               EN_SW1__MASK
#define EN_SW1_SHIFT              EN_SW1__SHIFT
#define EN_SW1_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define EN_SW1_PS                     (* (reg8 *) EN_SW1__PS)
/* Data Register */
#define EN_SW1_DR                     (* (reg8 *) EN_SW1__DR)
/* Port Number */
#define EN_SW1_PRT_NUM                (* (reg8 *) EN_SW1__PRT) 
/* Connect to Analog Globals */                                                  
#define EN_SW1_AG                     (* (reg8 *) EN_SW1__AG)                       
/* Analog MUX bux enable */
#define EN_SW1_AMUX                   (* (reg8 *) EN_SW1__AMUX) 
/* Bidirectional Enable */                                                        
#define EN_SW1_BIE                    (* (reg8 *) EN_SW1__BIE)
/* Bit-mask for Aliased Register Access */
#define EN_SW1_BIT_MASK               (* (reg8 *) EN_SW1__BIT_MASK)
/* Bypass Enable */
#define EN_SW1_BYP                    (* (reg8 *) EN_SW1__BYP)
/* Port wide control signals */                                                   
#define EN_SW1_CTL                    (* (reg8 *) EN_SW1__CTL)
/* Drive Modes */
#define EN_SW1_DM0                    (* (reg8 *) EN_SW1__DM0) 
#define EN_SW1_DM1                    (* (reg8 *) EN_SW1__DM1)
#define EN_SW1_DM2                    (* (reg8 *) EN_SW1__DM2) 
/* Input Buffer Disable Override */
#define EN_SW1_INP_DIS                (* (reg8 *) EN_SW1__INP_DIS)
/* LCD Common or Segment Drive */
#define EN_SW1_LCD_COM_SEG            (* (reg8 *) EN_SW1__LCD_COM_SEG)
/* Enable Segment LCD */
#define EN_SW1_LCD_EN                 (* (reg8 *) EN_SW1__LCD_EN)
/* Slew Rate Control */
#define EN_SW1_SLW                    (* (reg8 *) EN_SW1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define EN_SW1_PRTDSI__CAPS_SEL       (* (reg8 *) EN_SW1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define EN_SW1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) EN_SW1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define EN_SW1_PRTDSI__OE_SEL0        (* (reg8 *) EN_SW1__PRTDSI__OE_SEL0) 
#define EN_SW1_PRTDSI__OE_SEL1        (* (reg8 *) EN_SW1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define EN_SW1_PRTDSI__OUT_SEL0       (* (reg8 *) EN_SW1__PRTDSI__OUT_SEL0) 
#define EN_SW1_PRTDSI__OUT_SEL1       (* (reg8 *) EN_SW1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define EN_SW1_PRTDSI__SYNC_OUT       (* (reg8 *) EN_SW1__PRTDSI__SYNC_OUT) 


#if defined(EN_SW1__INTSTAT)  /* Interrupt Registers */

    #define EN_SW1_INTSTAT                (* (reg8 *) EN_SW1__INTSTAT)
    #define EN_SW1_SNAP                   (* (reg8 *) EN_SW1__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins EN_SW1_H */


/* [] END OF FILE */