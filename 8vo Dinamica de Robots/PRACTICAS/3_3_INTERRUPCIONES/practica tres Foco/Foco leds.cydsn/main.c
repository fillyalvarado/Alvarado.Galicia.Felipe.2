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
CY_ISR(Interrupcion){
    FOCO_Write(~FOCO_Read());
    Sw1_ClearInterrupt();
}
int main(void)
{   
    void LCD_BG();
    CyGlobalIntEnable; /* Enable global interrupts. */
    IRQ_Sw_StartEx(Interrupcion);
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    LCD_Start();
    LCD_ClearDisplay();
    LCD_Position(0,5);
    
    for(;;)
    {
        if(FOCO_Read())
        {
                LCD_ClearDisplay();
                LCD_Position(0,4);
                LCD_PrintString("LEDS  ON");
                LCD_Position(1,3);
                LCD_DrawHorizontalBG( 1, 0, 1, 160);
                LED1_Write(1);
                CyDelay(20);
                if(FOCO_Read())
                {
                    LCD_ClearDisplay();
                    LCD_Position(0,4);
                    LCD_PrintString("LEDS  ON");
                    LCD_Position(1,3);
                    LCD_DrawHorizontalBG( 1, 0, 2, 160);
                    LED2_Write(1);
                    CyDelay(100);
                }else
            {
                   LCD_ClearDisplay();
                   LCD_Position(0,4);
                   LCD_PrintString("LEDS OFF");
                   LCD_Position(1,0);
                   LCD_PrintString("------FOCO------");
                   LED1_Write(0);
                   LED2_Write(0);
                   LED3_Write(0);
                   LED4_Write(0);
                   LED5_Write(0);
                   LED6_Write(0);
                   LED7_Write(0);
                   LED8_Write(0);
                   LED9_Write(0);
                   LED10_Write(0);
                   CyDelay(500);  
            }
                if(FOCO_Read())
                {
                    LCD_ClearDisplay();
                    LCD_Position(0,4);
                    LCD_PrintString("LEDS  ON");
                    LCD_Position(1,3);
                    LCD_DrawHorizontalBG( 1, 0, 3, 160);
                    LED3_Write(1);
                    CyDelay(100);
                  }else
            {
                   LCD_ClearDisplay();
                   LCD_Position(0,4);
                   LCD_PrintString("LEDS OFF");
                   LCD_Position(1,0);
                   LCD_PrintString("------FOCO------");
                   LED1_Write(0);
                   LED2_Write(0);
                   LED3_Write(0);
                   LED4_Write(0);
                   LED5_Write(0);
                   LED6_Write(0);
                   LED7_Write(0);
                   LED8_Write(0);
                   LED9_Write(0);
                   LED10_Write(0);
                   CyDelay(500);  
            }
                if(FOCO_Read())
                {
                LCD_ClearDisplay();
                LCD_Position(0,4);
                LCD_PrintString("LEDS  ON");
                LCD_Position(1,3);
                LCD_DrawHorizontalBG( 1, 0, 4, 160);
                LED4_Write(1);
                CyDelay(100);
                }else
            {
                   LCD_ClearDisplay();
                   LCD_Position(0,0);
                   LCD_PrintString("LEDS OFF");
                   LCD_Position(1,4);
                   LCD_PrintString("------FOCO------");
                   LED1_Write(0);
                   LED2_Write(0);
                   LED3_Write(0);
                   LED4_Write(0);
                   LED5_Write(0);
                   LED6_Write(0);
                   LED7_Write(0);
                   LED8_Write(0);
                   LED9_Write(0);
                   LED10_Write(0);
                   CyDelay(500);  
            }
                if(FOCO_Read())
                {
                LCD_ClearDisplay();
                LCD_Position(0,4);
                LCD_PrintString("LEDS  ON");
                LCD_Position(1,3);
                LCD_DrawHorizontalBG( 1, 0, 5, 160);
                LED5_Write(1);
                CyDelay(100);
                }else
            {
                   LCD_ClearDisplay();
                   LCD_Position(0,0);
                   LCD_PrintString("LEDS OFF");
                   LCD_Position(1,4);
                   LCD_PrintString("------FOCO------");
                   LED1_Write(0);
                   LED2_Write(0);
                   LED3_Write(0);
                   LED4_Write(0);
                   LED5_Write(0);
                   LED6_Write(0);
                   LED7_Write(0);
                   LED8_Write(0);
                   LED9_Write(0);
                   LED10_Write(0);
                   CyDelay(500);  
            }
                if(FOCO_Read())
                {
                LCD_ClearDisplay();
                LCD_Position(0,4);
                LCD_PrintString("LEDS  ON");
                LCD_Position(1,3);
                LCD_DrawHorizontalBG( 1, 0, 6, 160);
                LED6_Write(1);
                CyDelay(100);}
                else
            {
                   LCD_ClearDisplay();
                   LCD_Position(0,4);
                   LCD_PrintString("LEDS OFF");
                   LCD_Position(1,0);
                   LCD_PrintString("------FOCO------");
                   LED1_Write(0);
                   LED2_Write(0);
                   LED3_Write(0);
                   LED4_Write(0);
                   LED5_Write(0);
                   LED6_Write(0);
                   LED7_Write(0);
                   LED8_Write(0);
                   LED9_Write(0);
                   LED10_Write(0);
                   CyDelay(500);  
            }
                if(FOCO_Read())
                {
                LCD_ClearDisplay();
                LCD_Position(0,4);
                LCD_PrintString("LEDS  ON");
                LCD_Position(1,3);
                LCD_DrawHorizontalBG( 1, 0, 7, 160);
                LED7_Write(1);
                CyDelay(100);}
                else
            {
                   LCD_ClearDisplay();
                   LCD_Position(0,4);
                   LCD_PrintString("LEDS OFF");
                   LCD_Position(1,0);
                   LCD_PrintString("------FOCO------");
                   LED1_Write(0);
                   LED2_Write(0);
                   LED3_Write(0);
                   LED4_Write(0);
                   LED5_Write(0);
                   LED6_Write(0);
                   LED7_Write(0);
                   LED8_Write(0);
                   LED9_Write(0);
                   LED10_Write(0);
                   CyDelay(500);  
            }
                if(FOCO_Read())
                {
                LCD_ClearDisplay();
                LCD_Position(0,4);
                LCD_PrintString("LEDS  ON");
                LCD_Position(1,3);
                LCD_DrawHorizontalBG( 1, 0, 8, 160);
                LED8_Write(1);
                CyDelay(100);}
                else
            {
                   LCD_ClearDisplay();
                   LCD_Position(0,4);
                   LCD_PrintString("LEDS OFF");
                   LCD_Position(1,0);
                   LCD_PrintString("------FOCO------");
                   LED1_Write(0);
                   LED2_Write(0);
                   LED3_Write(0);
                   LED4_Write(0);
                   LED5_Write(0);
                   LED6_Write(0);
                   LED7_Write(0);
                   LED8_Write(0);
                   LED9_Write(0);
                   LED10_Write(0);
                   CyDelay(500);  
            }
                if(FOCO_Read())
                {
                LCD_ClearDisplay();
                LCD_Position(0,4);
                LCD_PrintString("LEDS  ON");
                LCD_Position(1,3);
                LCD_DrawHorizontalBG( 1, 0, 9, 160);
                LED9_Write(1);
                CyDelay(100);}
                else
            {
                   LCD_ClearDisplay();
                   LCD_Position(0,4);
                   LCD_PrintString("LEDS OFF");
                   LCD_Position(1,0);
                   LCD_PrintString("------FOCO------");
                   LED1_Write(0);
                   LED2_Write(0);
                   LED3_Write(0);
                   LED4_Write(0);
                   LED5_Write(0);
                   LED6_Write(0);
                   LED7_Write(0);
                   LED8_Write(0);
                   LED9_Write(0);
                   LED10_Write(0);
                   CyDelay(500);  
            }
                if(FOCO_Read())
                {
                LCD_ClearDisplay();
                LCD_Position(0,4);
                LCD_PrintString("LEDS  ON");
                LCD_Position(1,3);
                LCD_DrawHorizontalBG( 1, 0, 10, 160);
                LED10_Write(1);
                CyDelay(100);}
                else
            {
                   LCD_ClearDisplay();
                   LCD_Position(0,4);
                   LCD_PrintString("LEDS OFF");
                   LCD_Position(1,0);
                   LCD_PrintString("------FOCO------");
                   LED1_Write(0);
                   LED2_Write(0);
                   LED3_Write(0);
                   LED4_Write(0);
                   LED5_Write(0);
                   LED6_Write(0);
                   LED7_Write(0);
                   LED8_Write(0);
                   LED9_Write(0);
                   LED10_Write(0);
                   CyDelay(500);  
            }
                if(FOCO_Read())
                {
                LCD_ClearDisplay();
                LCD_Position(0,4);
                LCD_PrintString("LEDS  ON");
                LCD_Position(1,3);
                LCD_PrintString("");
                LED1_Write(0);
                LED2_Write(0);
                LED3_Write(0);
                LED4_Write(0);
                LED5_Write(0);
                LED6_Write(0);
                LED7_Write(0);
                LED8_Write(0);
                LED9_Write(0);
                LED10_Write(0);
                CyDelay(500);}
                else
            {
                   LCD_ClearDisplay();
                   LCD_Position(0,4);
                   LCD_PrintString("LEDS OFF");
                   LCD_Position(1,0);
                   LCD_PrintString("------FOCO------");
                   LED1_Write(0);
                   LED2_Write(0);
                   LED3_Write(0);
                   LED4_Write(0);
                   LED5_Write(0);
                   LED6_Write(0);
                   LED7_Write(0);
                   LED8_Write(0);
                   LED9_Write(0);
                   LED10_Write(0);
                   CyDelay(500);  
            }
        }else
            {
                   LCD_ClearDisplay();
                   LCD_Position(0,4);
                   LCD_PrintString("LEDS OFF");
                   LCD_Position(1,0);
                   LCD_PrintString("------FOCO------");
                   LED1_Write(0);
                   LED2_Write(0);
                   LED3_Write(0);
                   LED4_Write(0);
                   LED5_Write(0);
                   LED6_Write(0);
                   LED7_Write(0);
                   LED8_Write(0);
                   LED9_Write(0);
                   LED10_Write(0);
                   CyDelay(500);  
            } 
          
    }
}

/* [] END OF FILE */
