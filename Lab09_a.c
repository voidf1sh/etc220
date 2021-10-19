/*
 * File Name: Lab09_a
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 10/11/2021
 *
 * Description: Demonstration of the onboard piezo buzzer
*/

void main() {
	TRISC = 0xFF;	// Set Port C as output
	ANSELC = 0x00;	// Port C as digital
	PORTC = 0x00;	// Clear Port C

	TRISE = 0x00;	// Port E as output
	ANSELE = 0xFF;	// Port E as analog
	PORTE = 0x00;	// Clear Port C

	Sound_Init(&PORTE, 1);	// Initialize the buzzer, Port E, bit 1

	while (1)
	{
		if (RC0_bit == 1)	// If Port C Bit 0 is HIGH/pressed
		{
			// Simulate a phone ringing
			Sound_Play(440, 2000);		// Play a 440Hz tone for 2 seconds
			delay_ms(4000);				// Wait for 4 seconds
			Sound_Play(440, 2000);		// Play a 440Hz tone for 2 seconds
		}
	}
}