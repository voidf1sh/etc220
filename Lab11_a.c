/*
 * File Name: Lab11_a
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 11/8/21
 *
 * Description: Starter code to demo use of character arrays
*/

// Setting PORTB bits to LCD module
sbit LCD_RS at RB4_bit; //Creates pointer to PORTB bit4 named LCD_RS
sbit LCD_EN at RB5_bit; //Creates pointer to PORTB bit5 named LCD_EN
sbit LCD_D4 at RB0_bit; //Creates pointer to PORTB bit0 named LCD_D4
sbit LCD_D5 at RB1_bit; //Creates pointer to PORTB bit1 named LCD_D5
sbit LCD_D6 at RB2_bit; //Creates pointer to PORTB bit2 named LCD_D6
sbit LCD_D7 at RB3_bit; //Creates pointer to PORTB bit3 named LCD_D7

// Setting PORTB bits to LCD module
sbit LCD_RS_Direction at TRISB4_bit;
sbit LCD_EN_Direction at TRISB5_bit;
sbit LCD_D4_Direction at TRISB0_bit;
sbit LCD_D5_Direction at TRISB1_bit;
sbit LCD_D6_Direction at TRISB2_bit;
sbit LCD_D7_Direction at TRISB3_bit;

char txt1[] = "mikroElektronika"; //create char arrays, symbol enclosed by quotation marks
char txt2[] = "EasyPIC7";
char txt3[] = "LCD 4bit";
char txt4[] = "LCD Shift Test";
char i; //Loop variable "i" created

void Move_Delay()
{				   //Create function called "Move_Delay" called later in code
	Delay_ms(500); //Delay settings changed within function
}

void main()
{
	ANSELB = 0;	  //Sets PORTB as digital
	C1ON_bit = 0; //Disable Comparators on Micro
	C2ON_bit = 0;

	Lcd_Init();				  //Function Call to Initialize LCD Display
	Lcd_Cmd(_LCD_CLEAR);	  //Function Call to Clear LCD Display
	Lcd_Cmd(_LCD_CURSOR_OFF); //Function Call to turn Cursor Off

	Lcd_Out(1, 1, txt1); //"char text1" to LCD row1, column1
	Lcd_Out(2, 1, txt2); //"char text2" to LCD row2, column1
	Delay_ms(5000);

	Lcd_Cmd(_LCD_CLEAR); //Clear LCD Display

	Lcd_Out(1, 1, txt3); //"char text3" to LCD row1, column1
	Lcd_Out(2, 1, txt4); //"char text4" to LCD row1, column1
	Delay_ms(5000);

	while (1)
	{ //Endless loop for shifting text
		for (i = 0; i < 16; i++)
		{ //Shift text to the right 16 times
			Lcd_Cmd(_LCD_SHIFT_RIGHT);
			Move_Delay(); //Call Delay Function "Move_Delay"
		}

		for (i = 0; i < 16; i++)
		{ //Shift text to the left 16 times
			Lcd_Cmd(_LCD_SHIFT_LEFT);
			Move_Delay(); //Call Delay Function "Move_Delay"
		}
	}
}