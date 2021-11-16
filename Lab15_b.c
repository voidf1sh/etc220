/*
 * File Name: 
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 
 *
 * Description: 
*/

int i;
int addr[12] = {0x0A, 0x15, 0x2c, 0x3f, 0x40, 0x55, 0x6f, 0xa5, 0xcd, 0xd7, 0xe4, 0xff}

void
wait()
{
	delay_ms(10000);
}

void main()
{
	TRISB = 0xFF;
	TRISC = 0x00;
	PORTB = 0x00;
	PORTC = 0x00;

	for (i = 0; i < 11; i++)
	{
		PORTC = addr[i];
		wait();
	}
}