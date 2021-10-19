/*
 * File Name: Lab09_b
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 10/11/2021
 *
 * Description: Uses functions and the piezo buzzer to create more complex tones and melodies.
*/

// Function for playing a tone, which tone to play is passed as a variable (i)

void tone(int i) {
	switch (i)	// Check the variable that was passed to the function
	{
	case 1:		// If it is 1
		Sound_Play(659, 250);	// Play a 659Hz tone for 250ms
		break;
	case 2:		// If it is 2
		Sound_Play(698, 250);	// Play a 698Hz tone for 250ms
		break;
	case 3:		// etc...
		Sound_Play(784, 250);
		break;
	case 4:
		Sound_Play(880, 50);
		break;
	case 5:
		Sound_Play(1046, 50);
		break;
	case 6:
		Sound_Play(1318, 50);
		break;
	default:
		break;
	}
}

// Melody functions using the tone functions above
void melody1() {
	tone(1);
	tone(2);
	tone(3);
	tone(3);
	tone(1);
	tone(2);
	tone(3);
	tone(3);
	tone(1);
	tone(2);
	tone(3);
	tone(1);
	tone(2);
	tone(3);
	tone(3);
	tone(1);
	tone(2);
	tone(3);
	tone(3);
	tone(3);
	tone(2);
	tone(2);
	tone(1);
}

void melody2() {
	int i;		// iteration variable
	for (i = 0; i < 9; i++) {	// Loop 9 times
		tone(1);
		tone(3);
		tone(5);
	}
}

void melody3() {
	int i;		// iteration variable
	for (i = 0; i < 10; i++) {	// Loop 10 times
		tone(5);
		tone(3);
		tone(1);
	}
}

// Main function
void main() {
	TRISB = 0xFF;  // Port B as input
	ANSELB = 0x00; // Port B as digital
	C1ON_bit = 0;  // Disable comparators
	C2ON_bit = 0;

	while (1)
	{
		if (Button(&PORTB,1,1,1))
		{
			tone(1);
			while(RB1_bit);
		}
		if (Button(&PORTB,2,1,1))
		{
			tone(2);
			while(RB2_bit);
		}
		if (Button(&PORTB,3,1,1))
		{
			tone(3);
			while(RB3_bit);
		}
		if (Button(&PORTB,4,1,1))
		{
			melody1();
			while(RB4_bit);
		}
		if (Button(&PORTB,5,1,1))
		{
			melody2();
			while(RB5_bit);
		}
		if (Button(&PORTB,6,1,1))
		{
			melody3();
			while(RB6_bit);
		}
	}
}