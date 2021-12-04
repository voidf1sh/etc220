/*
 * File Name: Lab21
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 12/4/2021
 *
 * Description: Control an external board of components using relays/TRIACs attached to the PORTs
 * Uses Libraries:
 * - Lcd
 * - Conversions
 * - Button
 * - C_String
 * 
 * RA0-4 - Relay controls 0-4
 * RC0-1 - Relay controls 5-6
 * RC3   - Relay control  7
 * PORTB - LCD Display Data
 * RC2   - LCD Backlight
 * RD0-7 - Input buttons for controlling components
 * 
 * TRISA 0b00000000 | 0x00 | 0
 * TRISB 0b00000000 | 0x00 | 0
 * TRISC 0b00000000 | 0x00 | 0
 * TRISD 0b11111111 | 0xFF | 255
 * ANSELB 0b00000000| 0x00 | 0
  
 * RA0 - VOLTMETER
   -- TURN ON WITH EACH COMPONENT
 * RA1 - FAN
   -- 10 SECONDS
 * RA2 - AC OUTLET 1
   -- 5 SECONDS
 * RA3 - AC OUTLET 2
   -- 5 SECONDS
 * RA4 - LAMP 1
   -- 10 SECONDS
 * RC0 - LAMP 2
   -- 10 SECONDS
 * RC1 - LAMP 3
   -- 10 SECONDS
 * RC3 - LAMP 4
   -- 10 SECONDS
 *
 *
 * Inputs:
 * RD0 - FAN
 * RD1 - AC OUTLET 1
 * RD2 - AC OUTLET 2
 * RD3 - LAMP 1
 * RD4 - LAMP 2
 * RD5 - LAMP 3
 * RD6 - LAMP 4
 * 
 */

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
	TRISA = 0;
	TRISB = 0;
	TRISC = 0;
	TRISD = 255;
	ANSELB = 0;
	PORTA = 0;
	PORTB = 0;
	PORTC = 0;
	PORTD = 0;

	Lcd_Init();
	Lcd_Cmd(_LCD_CLEAR);
	Lcd_Cmd(_LCD_CURSOR_OFF);

	while (1)
	{
		if (Button(&PORTD, 0, 1, 1)) // Button on PORTD, Bit RD0, with 1ms debounce time, checking for logical 1
		{
			Lcd_Out(1,1, "Fan Enabled");
			delay_ms(10000);
			Lcd_Cmd(_LCD_CLEAR);
		}
		if (Button(&PORTD, 1, 1, 1))
		{
			Lcd_Out(1,1, "AC1 Enabled");
			delay_ms(5000);
			Lcd_Cmd(_LCD_CLEAR);
		}
		if (Button(&PORTD, 2, 1, 1))
		{
			Lcd_Out(1,1, "AC2 Enabled");
			delay_ms(5000);
			Lcd_Cmd(_LCD_CLEAR);
		}
		if (Button(&PORTD, 3, 1, 1))
		{
			Lcd_Out(1,1, "Lamp 1 On");
			delay_ms(10000);
			Lcd_Cmd(_LCD_CLEAR);
		}
		if (Button(&PORTD, 4, 1, 1))
		{
			Lcd_Out(1,1, "Lamp 2 On");
			delay_ms(10000);
			Lcd_Cmd(_LCD_CLEAR);
		}
		if (Button(&PORTD, 5, 1, 1))
		{
			Lcd_Out(1,1, "Lamp 3 On");
			delay_ms(10000);
			Lcd_Cmd(_LCD_CLEAR);
		}
		if (Button(&PORTD, 6, 1, 1))
		{
			Lcd_Out(1,1, "Lamp 4 On");
			delay_ms(10000);
			Lcd_Cmd(_LCD_CLEAR);
		}
	}
}