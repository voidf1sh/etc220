/*
 * File Name: Lab01
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 10/2021
 *
 * Description: Counts from 0 to 3 then 3 to 0 to provide
 * changing inputs to use for logic gate testing.
*/

void main() {
    int i;             // Variable for iteration in for loop later
    TRISB = 0x00;      // Set PORTB to output
    TRISC = 0xFF;      // Set PORTC to input
    
    // Clear Ports B and C
    PORTB = 0x00;
    PORTC = 0x00;
    
    while(1) {         // Loop forever
        // Count from 0 to 3
        for (i = 0; i < 4; i++) {
            PORTB = i;        // Set Port B to the current count
            delay_ms(500);    // Wait for half a second before increasing count
        }
        // Count from 2 to 1
        for (i = 2; i > 0; i--) {
            PORTB = i;        // Set Port B to the current count
            delay_ms(500);    // Wait for half a second before increasing count
        }
    }
}