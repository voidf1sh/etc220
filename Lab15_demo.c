/*
 * File Name: 
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 
 *
 * Description: 
*/

int i;

void wait()
{
	delay_ms(250);
}

void main()
{
	TRISB = 0xFF;
	TRISC = 0x00;
	PORTB = 0x00;
	PORTC = 0x00;

	for (i = 0; i < 256; i++)
	{
		PORTC = i;
		wait();
	}
}