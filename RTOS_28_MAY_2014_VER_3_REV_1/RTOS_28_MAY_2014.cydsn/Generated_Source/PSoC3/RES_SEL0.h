/*******************************************************************************
* File Name: RES_SEL0.h  
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

#if !defined(CY_PINS_RES_SEL0_H) /* Pins RES_SEL0_H */
#define CY_PINS_RES_SEL0_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "RES_SEL0_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    RES_SEL0_Write(uint8 value) ;
void    RES_SEL0_SetDriveMode(uint8 mode) ;
uint8   RES_SEL0_ReadDataReg(void) ;
uint8   RES_SEL0_Read(void) ;
uint8   RES_SEL0_ClearInterrupt(void) ;

/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define RES_SEL0_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define RES_SEL0_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define RES_SEL0_DM_RES_UP          PIN_DM_RES_UP
#define RES_SEL0_DM_RES_DWN         PIN_DM_RES_DWN
#define RES_SEL0_DM_OD_LO           PIN_DM_OD_LO
#define RES_SEL0_DM_OD_HI           PIN_DM_OD_HI
#define RES_SEL0_DM_STRONG          PIN_DM_STRONG
#define RES_SEL0_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define RES_SEL0_MASK               RES_SEL0__MASK
#define RES_SEL0_SHIFT              RES_SEL0__SHIFT
#define RES_SEL0_WIDTH              1u

/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define RES_SEL0_PS                     (* (reg8 *) RES_SEL0__PS)
/* Data Register */
#define RES_SEL0_DR                     (* (reg8 *) RES_SEL0__DR)
/* Port Number */
#define RES_SEL0_PRT_NUM                (* (reg8 *) RES_SEL0__PRT) 
/* Connect to Analog Globals */                                                  
#define RES_SEL0_AG                     (* (reg8 *) RES_SEL0__AG)                       
/* Analog MUX bux enable */
#define RES_SEL0_AMUX                   (* (reg8 *) RES_SEL0__AMUX) 
/* Bidirectional Enable */                                                        
#define RES_SEL0_BIE                    (* (reg8 *) RES_SEL0__BIE)
/* Bit-mask for Aliased Register Access */
#define RES_SEL0_BIT_MASK               (* (reg8 *) RES_SEL0__BIT_MASK)
/* Bypass Enable */
#define RES_SEL0_BYP                    (* (reg8 *) RES_SEL0__BYP)
/* Port wide control signals */                                                   
#define RES_SEL0_CTL                    (* (reg8 *) RES_SEL0__CTL)
/* Drive Modes */
#define RES_SEL0_DM0                    (* (reg8 *) RES_SEL0__DM0) 
#define RES_SEL0_DM1                    (* (reg8 *) RES_SEL0__DM1)
#define RES_SEL0_DM2                    (* (reg8 *) RES_SEL0__DM2) 
/* Input Buffer Disable Override */
#define RES_SEL0_INP_DIS                (* (reg8 *) RES_SEL0__INP_DIS)
/* LCD Common or Segment Drive */
#define RES_SEL0_LCD_COM_SEG            (* (reg8 *) RES_SEL0__LCD_COM_SEG)
/* Enable Segment LCD */
#define RES_SEL0_LCD_EN                 (* (reg8 *) RES_SEL0__LCD_EN)
/* Slew Rate Control */
#define RES_SEL0_SLW                    (* (reg8 *) RES_SEL0__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define RES_SEL0_PRTDSI__CAPS_SEL       (* (reg8 *) RES_SEL0__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define RES_SEL0_PRTDSI__DBL_SYNC_IN    (* (reg8 *) RES_SEL0__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define RES_SEL0_PRTDSI__OE_SEL0        (* (reg8 *) RES_SEL0__PRTDSI__OE_SEL0) 
#define RES_SEL0_PRTDSI__OE_SEL1        (* (reg8 *) RES_SEL0__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define RES_SEL0_PRTDSI__OUT_SEL0       (* (reg8 *) RES_SEL0__PRTDSI__OUT_SEL0) 
#define RES_SEL0_PRTDSI__OUT_SEL1       (* (reg8 *) RES_SEL0__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define RES_SEL0_PRTDSI__SYNC_OUT       (* (reg8 *) RES_SEL0__PRTDSI__SYNC_OUT) 


#if defined(RES_SEL0__INTSTAT)  /* Interrupt Registers */

    #define RES_SEL0_INTSTAT                (* (reg8 *) RES_SEL0__INTSTAT)
    #define RES_SEL0_SNAP                   (* (reg8 *) RES_SEL0__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins RES_SEL0_H */


/* [] END OF FILE */
