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

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

   for(;;){
   switch   (sw1_Read()){
        case 1: {
        CyDelay(300);
        led10_Write (1);
        led1_Write(1);
        CyDelay(300);
        led10_Write(0);
        led1_Write(0);
        CyDelay (300);
        led9_Write(1);
        led2_Write(1);
        CyDelay (300);
        led9_Write(0);
        led2_Write(0);
        CyDelay (300);
        led8_Write(1);
        led3_Write(1);
        CyDelay (300);
        led8_Write(0);
        led3_Write(0);
        CyDelay (300);
        led7_Write(1);
        led4_Write(1);
        CyDelay (300);
        led7_Write(0);
        led4_Write(0);
        CyDelay (300);
        led6_Write(1);
        led5_Write(1);
        CyDelay (300);
        led6_Write(0);
        led5_Write(0);
        CyDelay (300);
        led7_Write (1);
        led4_Write(1);
        CyDelay(300);
        led7_Write(0);
        led4_Write(0);
        CyDelay (300);
        led8_Write(1);
        led3_Write(1);
        CyDelay (300);
        led8_Write(0);
        led3_Write(0);
        CyDelay (300);
        led9_Write(1);
        led2_Write(1);
        CyDelay (300);
        led9_Write(0);
        led2_Write(0);
        CyDelay (300);
        led10_Write(1);
        led1_Write(1);
        CyDelay (300);
        led10_Write(0);
        led1_Write(0);}
      
break;}
     switch (sw2_Read()){
        case 1:{
        CyDelay(300);
        led1_Write (1);
        CyDelay(300);
        led1_Write(0);
        CyDelay (300);
        led10_Write(1);
        CyDelay (300);
        led10_Write(0);
        CyDelay (300);
        led2_Write(1);
        CyDelay (300);
        led2_Write(0);
        CyDelay (300);
        led9_Write(1);
        CyDelay (300);
        led9_Write(0);
        CyDelay (300);
        led3_Write(1);
        CyDelay (300);
        led3_Write(0);
        CyDelay (300);
        led8_Write(1);
        CyDelay (300);
        led8_Write(0);
        CyDelay (300);
        led4_Write(1);
        CyDelay (300);
        led4_Write(0);
        CyDelay (300);
        led7_Write(1);
        CyDelay (300);
        led7_Write(0);
        CyDelay (300);
        led5_Write(1);
        CyDelay (300);
        led5_Write(0);
        CyDelay (300);
        led6_Write(1);
        CyDelay (300);
        led6_Write(0);
        CyDelay (300);}
        break;}
    switch(sw3_Read()){
        case 1:{
        CyDelay(300);
        led1_Write (1);
        led1_Read();
        CyDelay (300);
        led2_Write(1);
        led2_Read();
        CyDelay (300);
        led3_Write(1);
        led3_Read();
        CyDelay (300);
        led4_Write(1);
        led1_Write(0);
        CyDelay (300);
        led4_Read();
        led5_Write(1);
        led2_Write(0);
        CyDelay (300);
        led5_Read();
        led6_Write(1);
        led3_Write(0);
        CyDelay (300);
        led6_Read();
        led7_Write(1);
        led4_Write(0);
        CyDelay (300);
        led7_Read();
        led8_Write(1);
        led5_Write(0);
        CyDelay (300);
        led8_Read();
        led9_Write(1);
        led6_Write(0);
        CyDelay (300);
        led9_Read();
        led10_Write(1);
        led7_Write(0);
        CyDelay (300);
        led8_Write(0);
        CyDelay (300);
        led9_Write(0);
        CyDelay (300);
        led10_Write(0);
        CyDelay (300);}
    break;}
    switch(sw4_Read()){
        case 1:{
        CyDelay (300);  
        led1_Write (1);
        led10_Write (1);
        led1_Read();
        led10_Read();
        CyDelay (300);
        led2_Write(1);
        led9_Write(1);
        led2_Read();
        led9_Read();
        CyDelay (300);
        led3_Write(1);
        led8_Write(1);
        led3_Read();
        led8_Read();
        CyDelay (300);
        led4_Write(1);
        led1_Write(0);
        led7_Write(1);
        led10_Write(0);
        CyDelay (300);
        led4_Read();
        led7_Read();
        led5_Write(1);
        led2_Write(0);
        led6_Write(1);
        led9_Write(0);
        CyDelay (300);
        led8_Write(0);
        led3_Write (0);
        CyDelay (300);
        led7_Write(0);
        led4_Write(0);
        CyDelay (300);
        led6_Write(0);
        led5_Write(0);
        CyDelay (300);}
    break;}
     switch (sw5_Read()){
        case 1:{
        sw5_Write(1);
        CyDelay(300);
        led1_Write (1);
        led10_Write (1);
        CyDelay(300);
        led1_Write(0);
        led10_Write (0);
        CyDelay (300);
        led3_Write(1);
        led8_Write (1);
        CyDelay (300);
        led3_Write(0);
        led8_Write (0);
        CyDelay (300);
        led2_Write(1);
        led9_Write (1);
        CyDelay (300);
        led2_Write(0);
        led9_Write (0);
        CyDelay (300);
        led4_Write(1);
        led7_Write (1);
        CyDelay (300);
        led4_Write(0);
        led7_Write (0);
        CyDelay (300);
        led3_Write(1);
        led8_Write (1);
        CyDelay (300);
        led3_Write(0);
        led8_Write (0);
        CyDelay (300);
        led5_Write(1);
        led6_Write (1);
        CyDelay (300);
        led5_Write(0);
        led6_Write (0);
       }}

    }}