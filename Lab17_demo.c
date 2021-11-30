/*
 * File Name: Lab17_demo
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 11/30/2021
 *
 * Description: Analog to digital conversion
*/

//ADC Read displayed on LCD

sbit LCD_RS at RB4_bit; //Set up library to know location of LCD connections to the MCU
sbit LCD_EN at RB5_bit;
sbit LCD_D4 at RB0_bit;
sbit LCD_D5 at RB1_bit;
sbit LCD_D6 at RB2_bit;
sbit LCD_D7 at RB3_bit;

sbit LCD_RS_Direction at TRISB4_bit; //Setup library to know the TRIS registers for data direction on display
sbit LCD_EN_Direction at TRISB5_bit;
sbit LCD_D4_Direction at TRISB0_bit;
sbit LCD_D5_Direction at TRISB1_bit;
sbit LCD_D6_Direction at TRISB2_bit;
sbit LCD_D7_Direction at TRISB3_bit;

void main()
{
    unsigned char txt;

    TRISA = 0xFF;  //Set PORTA to input
    ANSELB = 0x00; //Turns off ADC modules on PORTB so it can accept digital signals
    C1ON_bit = 0;  //Turns off comparitors 1 and 2
    C2ON_bit = 0;

    Lcd_Init(); //Tells the MCU to initialize the LCD display
    ADC_Init(); //Tells the MCU to initialize the ADC channels
                //Must make sure jumper J15 has RA0 selected

    Lcd_Cmd(_LCD_CLEAR);      //Clears the LCD display of all text and charactors
    Lcd_Cmd(_LCD_CURSOR_OFF); //Turns off the flashing cursor on the LCD display

    Lcd_Out(1, 1, "ADC Read: "); //Write text to display

    while (1)
    {
        IntToStr(ADC_Read(1), txt); //Convert the ADC_Read() integer into a usable char to display, port1
        Lcd_Out(1, 10, txt);        //Display reading starting on row 1, colum 10
        delay_ms(5);
    }
}