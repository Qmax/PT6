/*******************************************************************************
* File Name: k_isr.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_ISR_k_isr_H)
#define CY_ISR_k_isr_H

#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void k_isr_Start(void) ;
void k_isr_StartEx(cyisraddress address) ;
void k_isr_Stop(void) ;

CY_ISR_PROTO(k_isr_Interrupt);

void k_isr_SetVector(cyisraddress address) ;
cyisraddress k_isr_GetVector(void) ;

void k_isr_SetPriority(uint8 priority) ;
uint8 k_isr_GetPriority(void) ;

void k_isr_Enable(void) ;
uint8 k_isr_GetState(void) ;
void k_isr_Disable(void) ;

void k_isr_SetPending(void) ;
void k_isr_ClearPending(void) ;


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the k_isr ISR. */
#define k_isr_INTC_VECTOR            ((reg16 *) k_isr__INTC_VECT)

/* Address of the k_isr ISR priority. */
#define k_isr_INTC_PRIOR             ((reg8 *) k_isr__INTC_PRIOR_REG)

/* Priority of the k_isr interrupt. */
#define k_isr_INTC_PRIOR_NUMBER      k_isr__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable k_isr interrupt. */
#define k_isr_INTC_SET_EN            ((reg8 *) k_isr__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the k_isr interrupt. */
#define k_isr_INTC_CLR_EN            ((reg8 *) k_isr__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the k_isr interrupt state to pending. */
#define k_isr_INTC_SET_PD            ((reg8 *) k_isr__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the k_isr interrupt. */
#define k_isr_INTC_CLR_PD            ((reg8 *) k_isr__INTC_CLR_PD_REG)



#endif /* CY_ISR_k_isr_H */


/* [] END OF FILE */
