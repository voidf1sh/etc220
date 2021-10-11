/*
* File Name: Lab02_a
* Developed By: Skylar Grant
* Submission To: Bill Dolan (ETC-220)
* Development Date: 10/2021
*
* Description: Applies bitwise logic to input from Ports B and C,
* displaying the output on Port D
*/

void main() {
	int refVal = 0b00000001;   // Bit Value
	TRISB = 0xFF;      // Port B as input
	TRISC = 0xFF;      // Port C as input
	TRISD = 0x00;      // Port D as output

	// Set Ports B, C, and D to digital
	ANSELB = 0x00;
	ANSELC = 0x00;
	ANSELD = 0x00;

	while (1) { // Loop forever
	/* Uncomment the line corresponding to the logic you need to use
	 * then reprogram the board. Alternatively, create a loop to cycle
	 * between the logic operation, with a delay.
	*/
		// PORTD = PORTB & PORTC;     // AND
		// PORTD = PORTB | PORTC;     // OR
		// PORTD = PORTB ^ PORTC;     // XOR
		// PORTD = ~PORTB;            // NOT
	}
}