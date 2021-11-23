/*
 * File Name: Lab15_extra
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 11/19/2021
 *
 * Description: Read the first 256 addresses from the chip and display the contents on the LCD
 * PORTB - For LCD
 * PORTC - Address select
 * PORTD - Output
 *
 * void wait() - Delay function, 30s
 * void read() - Read 16 bytes from the chip
 * void disp(char data[]) - Display 16 bytes of the data on the LCD in hex
*/

int i, j;
char output, temp_out, joined, hex_output, raw_output;
int addr = 0;

// Map the LCD pins to the chips port pins
sbit LCD_RS at RB4_bit;
sbit LCD_EN at RB5_bit;
sbit LCD_D4 at RB0_bit;
sbit LCD_D5 at RB1_bit;
sbit LCD_D6 at RB2_bit;
sbit LCD_D7 at RB3_bit;

sbit LCD_RS_Direction at TRISB4_bit;
sbit LCD_EN_Direction at TRISB5_bit;
sbit LCD_D4_Direction at TRISB0_bit;
sbit LCD_D5_Direction at TRISB1_bit;
sbit LCD_D6_Direction at TRISB2_bit;
sbit LCD_D7_Direction at TRISB3_bit;

void wait()
{
	delay_ms(3000);
}

void read()
{
	for (i = addr; i < addr + 16; i++)
	{
		PORTC = i;
		delay_ms(50); // Slight delay to make sure the chip has responded
		strcat(raw_output, "1");
		strcat(raw_output, "0");
		strcat(raw_output, "1");
		strcat(raw_output, "0");
		strcat(raw_output, "1");
		strcat(raw_output, "1");
		strcat(raw_output, "0");
		strcat(raw_output, "1");
		// strcat(raw_output, PORTD.RD0);
		strcat(raw_output, PORTD);
		ByteToHex(raw_output, hex_output);
		Lcd_Out(1, 1, hex_output);
		delay_ms(5000);
		hex_output = "";
		raw_output = "";
		Lcd_Cmd(_LCD_CLEAR);)
	}
	addr = addr + 16;
}

void main()
{
	ANSELB = 0;
	// Turn off the comparitors
	C1ON_bit = 0;
	C2ON_bit = 0;
	// Set up port states
	TRISB = 0;	  // Output
	TRISC = 0;	  // Output
	TRISD = 0xFF; // Input
	// Clear the ports for clean initialization
	PORTB = 0;
	PORTC = 0;
	PORTD = 0;

	// Initialize and clear the LCD, then turn the blinking cursor off
	Lcd_Init();
	Lcd_Cmd(_LCD_CLEAR);
	Lcd_Cmd(_LCD_CURSOR_OFF);

	while (1)
	{
		read();
	}
}