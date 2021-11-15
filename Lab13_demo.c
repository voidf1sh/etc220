/*
 * File Name: Lab13_demo
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 11/15/2021
 *
 * Description: Demonstration of 8x8x1 LED matrix
*/

// Variable for counting
int i;

// Set Ports B and C for output and clear them
TRISB = 0;
TRISC = 0;
PORTB = 0;
PORTC = 0;

void main()
{
	while (1)
	{
		for (i = 0; i < 8; i++)
		{
			PORTB = pow(2,i);
			PORTC = pow(2,i);
			delay_ms(500);
		}
	}
}