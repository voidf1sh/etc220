/*
 * File Name: Lab02_b
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 10/2021
 *
 * Description: Shifts a single bit from LSB to MSB and back.
*/

void main()
{
    int refVal = 0b00000001; // Reference Value variable
    int i;                   // Variable to use for iteration in the for loop later
    TRISD = 0x00;            // Port D as output
    ANSELD = 0x00;           // Set Port D to digital
    PORTD = refVal;          // Set Port D to the initial reference value (0b00000001)

    while (1)
    { // Loop forever
        for (i = 0; i < 7; i++)
        {                         // Loop 7 times
            refVal = refVal << 1; // Shift the bits in refVal to the left by one
            PORTD = refVal;       // Set Port D to the new refVal
            delay_ms(500);        // Wait for half a second
        }

        for (i = 0; i < 7; i++)
        {                         // Loop 7 times
            refVal = refVal >> 1; // Shift the bits in refVal to the right by one
            PORTD = refVal;       // Set Port D to the new refVal
            delay_ms(500);        // Wait for half a second
        }
    }
}