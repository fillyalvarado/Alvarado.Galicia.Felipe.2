/* ================================================================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ================================================================================
*/
#include "project.h"


int getValue(int sw1, int sw2, int sw3, int sw4, int sw5){
    if(sw1==0&&sw2==0&&sw3==0&&sw4==0&&sw5==0) return 0;
    if(sw1==1&&sw2==0&&sw3==0&&sw4==0&&sw5==0) return 1;
    if(sw1==0&&sw2==1&&sw3==0&&sw4==0&&sw5==0) return 2;
    if(sw1==1&&sw2==1&&sw3==0&&sw4==0&&sw5==0) return 3;
    if(sw1==0&&sw2==0&&sw3==1&&sw4==0&&sw5==0) return 4;
    if(sw1==1&&sw2==0&&sw3==1&&sw4==0&&sw5==0) return 5;
    if(sw1==0&&sw2==1&&sw3==1&&sw4==0&&sw5==0) return 6;
    if(sw1==1&&sw2==1&&sw3==1&&sw4==0&&sw5==0) return 7;
    if(sw1==0&&sw2==0&&sw3==0&&sw4==1&&sw5==0) return 8;
    if(sw1==1&&sw2==0&&sw3==0&&sw4==1&&sw5==0) return 9;
    if(sw1==0&&sw2==1&&sw3==0&&sw4==1&&sw5==0) return 10;
    if(sw1==1&&sw2==1&&sw3==0&&sw4==1&&sw5==0) return 11;
    if(sw1==0&&sw2==0&&sw3==1&&sw4==1&&sw5==0) return 12;
    if(sw1==1&&sw2==0&&sw3==1&&sw4==1&&sw5==0) return 13;
    if(sw1==0&&sw2==1&&sw3==1&&sw4==1&&sw5==0) return 14;
    if(sw1==1&&sw2==1&&sw3==1&&sw4==1&&sw5==0) return 15;
    if(sw1==0&&sw2==0&&sw3==0&&sw4==0&&sw5==1) return 16;
    if(sw1==1&&sw2==0&&sw3==0&&sw4==0&&sw5==1) return 17;
    if(sw1==0&&sw2==1&&sw3==0&&sw4==0&&sw5==1) return 18;
    if(sw1==1&&sw2==1&&sw3==0&&sw4==0&&sw5==1) return 19;
    if(sw1==0&&sw2==0&&sw3==1&&sw4==0&&sw5==1) return 20;
    if(sw1==1&&sw2==0&&sw3==1&&sw4==0&&sw5==1) return 21;
    if(sw1==0&&sw2==1&&sw3==1&&sw4==0&&sw5==1) return 22;
    if(sw1==1&&sw2==1&&sw3==1&&sw4==0&&sw5==1) return 23;
    if(sw1==0&&sw2==0&&sw3==0&&sw4==1&&sw5==1) return 24;
    if(sw1==1&&sw2==0&&sw3==0&&sw4==1&&sw5==1) return 25;
    if(sw1==0&&sw2==1&&sw3==0&&sw4==1&&sw5==1) return 26;
    if(sw1==1&&sw2==1&&sw3==0&&sw4==1&&sw5==1) return 27;
    if(sw1==0&&sw2==0&&sw3==1&&sw4==1&&sw5==1) return 28;
    if(sw1==1&&sw2==0&&sw3==1&&sw4==1&&sw5==1) return 29;
    if(sw1==0&&sw2==1&&sw3==1&&sw4==1&&sw5==1) return 30;
    if(sw1==1&&sw2==1&&sw3==1&&sw4==1&&sw5==1) return 31;
    return -1;
}


int main(void){
    CyGlobalIntEnable; /* Enable global interrupts. */
    LCD_Start();
    int sw1,sw2,sw3,sw4,sw5;
    for(;;){
        sw1=Pin_1_Read();
        sw2=Pin_2_Read();
        sw3=Pin_3_Read();
        sw4=Pin_4_Read();
        sw5=Pin_5_Read();
        CyDelay(500);
        LCD_ClearDisplay();
      switch(getValue(sw1,sw2,sw3,sw4,sw5)){
        case 0:
            LCD_Position(0,1);
            LCD_PrintString("FELIPE ALVARADO"); 
            LCD_Position(1,4);
            LCD_PrintString("GALICIA");
            break;
            
        case 1:
            LCD_Position(0,7);
            LCD_PrintString("1");
            LCD_Position(1,6);
            LCD_PrintString("UNO");
            break;            
            
        case 2:
            LCD_Position(0,7);
            LCD_PrintString("2");
            LCD_Position(1,6);
            LCD_PrintString("DOS");
            break;  
            
        case 3:
            LCD_Position(0,7);
            LCD_PrintString("3");
            LCD_Position(1,5);
            LCD_PrintString("TRES");
            break;            
            
        case 4:
            LCD_Position(0,7);
            LCD_PrintString("4");
            LCD_Position(1,5);
            LCD_PrintString("CUATRO");
            break;            
            
        case 5:
            LCD_Position(0,7);
            LCD_PrintString("5");
            LCD_Position(1,5);
            LCD_PrintString("CINCO");
            break;            
            
        case 6:
            LCD_Position(0,7);
            LCD_PrintString("6");
            LCD_Position(1,5);
            LCD_PrintString("SEIS");
            break;            
            
        case 7:
            LCD_Position(0,7);
            LCD_PrintString("7");
            LCD_Position(1,5);
            LCD_PrintString("SIETE");
            break;            
            
        case 8:
            LCD_Position(0,7);
            LCD_PrintString("8");
            LCD_Position(1,6);
            LCD_PrintString("OCHO");
            break;            
            
        case 9:
            LCD_Position(0,7);
            LCD_PrintString("9");
            LCD_Position(1,5);
            LCD_PrintString("NUEVE");
            break;            
            
        case 10:
            LCD_Position(0,7);
            LCD_PrintString("10");
            LCD_Position(1,6);
            LCD_PrintString("DIEZ");
            break;            
            
        case 11:
            LCD_Position(0,7);
            LCD_PrintString("11");
            LCD_Position(1,6);
            LCD_PrintString("ONCE");
            break;    
            
        case 12:
            LCD_Position(0,7);
            LCD_PrintString("12");
            LCD_Position(1,6);
             LCD_PrintString("DOCE");
            break;            
            
        case 13:
            LCD_Position(0,7);
            LCD_PrintString("13");
            LCD_Position(1,5);
            LCD_PrintString("TRECE");
            break;            
            
        case 14:
            LCD_Position(0,7);
            LCD_PrintString("14");
            LCD_Position(1,5);
            LCD_PrintString("CATORCE");
            break;            
            
        case 15:
            LCD_Position(0,7);
            LCD_PrintString("15");
            LCD_Position(1,5);
            LCD_PrintString("QUINCE");
            break;            
            
        case 16:
            LCD_Position(0,7);
            LCD_PrintString("16");
            LCD_Position(1,3);
            LCD_PrintString("DIECISEIS");
            break;            
            
        case 17:
            LCD_Position(0,7);
            LCD_PrintString("17");
            LCD_Position(1,3);
            LCD_PrintString("DIECISIETE");
            break;            
            
        case 18:
            LCD_Position(0,7);
            LCD_PrintString("18");
            LCD_Position(1,3);
            LCD_PrintString("DIECIOCHO");
            break;            
            
        case 19:
            LCD_Position(0,7);
            LCD_PrintString("19");
            LCD_Position(1,3);
            LCD_PrintString("DIECINUEVE");
            break;            
            
        case 20:
            LCD_Position(0,7);
            LCD_PrintString("20");
            LCD_Position(1,5);
            LCD_PrintString("VEINTE");
            break;            
            
        case 21:
            LCD_Position(0,7);
            LCD_PrintString("21");
            LCD_Position(1,3);
            LCD_PrintString("VEINTIUNO");
            break;            
            
        case 22:
            LCD_Position(0,7);
            LCD_PrintString("22");
            LCD_Position(1,3);
            LCD_PrintString("VEINTIDOS");
            break;            
            
        case 23:
            LCD_Position(0,7);
            LCD_PrintString("23");
            LCD_Position(1,3);
            LCD_PrintString("VEINTITRES");
            break;            
            
        case 24:
            LCD_Position(0,7);
            LCD_PrintString("24");
            LCD_Position(1,2);
            LCD_PrintString("VEINTICUATRO");
            break;            
            
        case 25:
            LCD_Position(0,7);
            LCD_PrintString("25");
            LCD_Position(1,3);
            LCD_PrintString("VEINTICINCO");
            break;            
            
        case 26:
            LCD_Position(0,7);
            LCD_PrintString("26");
            LCD_Position(1,3);
            LCD_PrintString("VEINTISEIS");
            break;            
            
        case 27:
            LCD_Position(0,7);
            LCD_PrintString("27");
            LCD_Position(1,2);
            LCD_PrintString("VEINTISIETE");
            break;            
            
        case 28:
            LCD_Position(0,7);
            LCD_PrintString("28");
            LCD_Position(1,3);
            LCD_PrintString("VEINTIOCHO");
            break;            
            
        case 29:
            LCD_Position(0,7);
            LCD_PrintString("29");
            LCD_Position(1,2);
            LCD_PrintString("VEINTINUEVE");
            break;
            
        case 30:
            LCD_Position(0,7);
            LCD_PrintString("30");
            LCD_Position(1,5);
            LCD_PrintString("TREINTA");
            break;          
            
         case 31:
            LCD_Position(0,7);
            LCD_PrintString("31");
            LCD_Position(1,2);
            LCD_PrintString("TREINTAIUNO");

            
            break;  
      }
       
    }
}
/* [] END OF FILE */
