/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

CY_ISR(Interruptor)
{
    Led_0_Write(Led_0_Read());
    Sw_ClearInterrupt();



}
    
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    
    ISR_Sw_StartEx(Interruptor);

    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
