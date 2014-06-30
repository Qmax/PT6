/*******************************************************************************
* File Name: uart_isr.c  
* Version 1.50
*
*  Description:
*   API for controlling the state of an interrupt.
*
*
*  Note:
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/


#include <CYDEVICE.H>
#include <CYDEVICE_TRM.H>
#include <CYLIB.H>
#include <uart_isr.H>


/*******************************************************************************
*  Place your includes, defines and code here 
********************************************************************************/
/* `#START uart_isr_intc` */

/* `#END` */


/*******************************************************************************
* Function Name: uart_isr_Start
********************************************************************************
* Summary:
*  Set up the interrupt and enable it.
*
* Parameters:  
*   void.
*
*
* Return:
*   void.
*
*******************************************************************************/
void uart_isr_Start(void)
{
    /* For all we know the interrupt is active. */
    uart_isr_Disable();

    /* Set the ISR to point to the uart_isr Interrupt. */
    uart_isr_SetVector(uart_isr_Interrupt);

    /* Set the priority. */
    uart_isr_SetPriority(uart_isr_INTC_PRIOR_NUMBER);

    /* Enable it. */
    uart_isr_Enable();
}

/*******************************************************************************
* Function Name: uart_isr_StartEx
********************************************************************************
* Summary:
*  Set up the interrupt and enable it.
*
* Parameters:  
*   address: Address of the ISR to set in the interrupt vector table.
*
*
* Return:
*   void.
*
*******************************************************************************/
void uart_isr_StartEx(cyisraddress address)
{
    /* For all we know the interrupt is active. */
    uart_isr_Disable();

    /* Set the ISR to point to the uart_isr Interrupt. */
    uart_isr_SetVector(address);

    /* Set the priority. */
    uart_isr_SetPriority(uart_isr_INTC_PRIOR_NUMBER);

    /* Enable it. */
    uart_isr_Enable();
}

/*******************************************************************************
* Function Name: uart_isr_Stop
********************************************************************************
* Summary:
*   Disables and removes the interrupt.
*
* Parameters:  
*
*
* Return:
*   void.
*
*******************************************************************************/
void uart_isr_Stop(void) 
{
    /* Disable this interrupt. */
    uart_isr_Disable();
}

/*******************************************************************************
* Function Name: uart_isr_Interrupt
********************************************************************************
* Summary:
*   The default Interrupt Service Routine for uart_isr.
*
*   Add custom code between the coments to keep the next version of this file
*   from over writting your code.
*
*
*
* Parameters:  
*
*
* Return:
*   void.
*
*******************************************************************************/
CY_ISR(uart_isr_Interrupt)
{
    /*  Place your Interrupt code here. */
    /* `#START uart_isr_Interrupt` */

    /* `#END` */

    /* PSoC3 ES1, ES2 RTC ISR PATCH  */ 
    #if(CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC3)
        #if((CYDEV_CHIP_REVISION_USED <= CYDEV_CHIP_REVISION_3A_ES2) && (uart_isr__ES2_PATCH ))      
            uart_isr_ISR_PATCH();
        #endif
    #endif
}

/*******************************************************************************
* Function Name: uart_isr_SetVector
********************************************************************************
* Summary:
*   Change the ISR vector for the Interrupt. Note calling uart_isr_Start
*   will override any effect this method would have had. To set the vector before
*   the component has been started use uart_isr_StartEx instead.
*
*
* Parameters:
*   address: Address of the ISR to set in the interrupt vector table.
*
*
* Return:
*   void.
*
*
*******************************************************************************/
void uart_isr_SetVector(cyisraddress address) 
{
    CY_SET_REG16(uart_isr_INTC_VECTOR, (uint16) address);
}

/*******************************************************************************
* Function Name: uart_isr_GetVector
********************************************************************************
* Summary:
*   Gets the "address" of the current ISR vector for the Interrupt.
*
*
* Parameters:
*   void.
*
*
* Return:
*   Address of the ISR in the interrupt vector table.
*
*
*******************************************************************************/
cyisraddress uart_isr_GetVector(void) 
{
    return (cyisraddress) CY_GET_REG16(uart_isr_INTC_VECTOR);
}

/*******************************************************************************
* Function Name: uart_isr_SetPriority
********************************************************************************
* Summary:
*   Sets the Priority of the Interrupt. Note calling uart_isr_Start
*   or uart_isr_StartEx will override any effect this method would have had. 
*	This method should only be called after uart_isr_Start or 
*	uart_isr_StartEx has been called. To set the initial
*	priority for the component use the cydwr file in the tool.
*
*
* Parameters:
*   priority: Priority of the interrupt. 0 - 7, 0 being the highest.
*
*
* Return:
*   void.
*
*
*******************************************************************************/
void uart_isr_SetPriority(uint8 priority) 
{
    *uart_isr_INTC_PRIOR = priority << 5;
}

/*******************************************************************************
* Function Name: uart_isr_GetPriority
********************************************************************************
* Summary:
*   Gets the Priority of the Interrupt.
*
*
* Parameters:
*   void.
*
*
* Return:
*   Priority of the interrupt. 0 - 7, 0 being the highest.
*
*
*******************************************************************************/
uint8 uart_isr_GetPriority(void) 
{
    uint8 priority;


    priority = *uart_isr_INTC_PRIOR >> 5;

    return priority;
}

/*******************************************************************************
* Function Name: uart_isr_Enable
********************************************************************************
* Summary:
*   Enables the interrupt.
*
*
* Parameters:
*   void.
*
*
* Return:
*   void.
*
*
*******************************************************************************/
void uart_isr_Enable(void) 
{
    /* Enable the general interrupt. */
    *uart_isr_INTC_SET_EN = uart_isr__INTC_MASK;
}

/*******************************************************************************
* Function Name: uart_isr_GetState
********************************************************************************
* Summary:
*   Gets the state (enabled, disabled) of the Interrupt.
*
*
* Parameters:
*   void.
*
*
* Return:
*   1 if enabled, 0 if disabled.
*
*
*******************************************************************************/
uint8 uart_isr_GetState(void) 
{
    /* Get the state of the general interrupt. */
    return (*uart_isr_INTC_SET_EN & uart_isr__INTC_MASK) ? 1:0;
}

/*******************************************************************************
* Function Name: uart_isr_Disable
********************************************************************************
* Summary:
*   Disables the Interrupt.
*
*
* Parameters:
*   void.
*
*
* Return:
*   void.
*
*
*******************************************************************************/
void uart_isr_Disable(void) 
{
    /* Disable the general interrupt. */
    *uart_isr_INTC_CLR_EN = uart_isr__INTC_MASK;
}

/*******************************************************************************
* Function Name: uart_isr_SetPending
********************************************************************************
* Summary:
*   Causes the Interrupt to enter the pending state, a software method of
*   generating the interrupt.
*
*
* Parameters:
*   void.
*
*
* Return:
*   void.
*
*
*******************************************************************************/
void uart_isr_SetPending(void) 
{
    *uart_isr_INTC_SET_PD = uart_isr__INTC_MASK;
}

/*******************************************************************************
* Function Name: uart_isr_ClearPending
********************************************************************************
* Summary:
*   Clears a pending interrupt.
*
* Parameters:
*   void.
*
*
* Return:
*   void.
*
*
*******************************************************************************/
void uart_isr_ClearPending(void) 
{
    *uart_isr_INTC_CLR_PD = uart_isr__INTC_MASK;
}
