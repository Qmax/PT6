/*******************************************************************************
* File Name: ECS.c  
* Version 1.90
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "ECS.h"


/*******************************************************************************
* Function Name: ECS_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None 
*  
*******************************************************************************/
void ECS_Write(uint8 value) 
{
    uint8 staticBits = (ECS_DR & (uint8)(~ECS_MASK));
    ECS_DR = staticBits | ((uint8)(value << ECS_SHIFT) & ECS_MASK);
}


/*******************************************************************************
* Function Name: ECS_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to this drive mode.
*
* Return: 
*  None
*
*******************************************************************************/
void ECS_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(ECS_0, mode);
}


/*******************************************************************************
* Function Name: ECS_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro ECS_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 ECS_Read(void) 
{
    return (ECS_PS & ECS_MASK) >> ECS_SHIFT;
}


/*******************************************************************************
* Function Name: ECS_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 ECS_ReadDataReg(void) 
{
    return (ECS_DR & ECS_MASK) >> ECS_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(ECS_INTSTAT) 

    /*******************************************************************************
    * Function Name: ECS_ClearInterrupt
    ********************************************************************************
    *
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 ECS_ClearInterrupt(void) 
    {
        return (ECS_INTSTAT & ECS_MASK) >> ECS_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
