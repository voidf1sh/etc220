/*
 * File Name: Lab00
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 10/2021
 *
 * Description: Tests functionality of all bits across all ports.
*/

void main() {
    TRISA = 0x00;  // Set Port A as output
    TRISB = 0x00;  // Set Port B as output
    TRISC = 0x00;  // Set Port C as output
    TRISD = 0x00;  // Set Port D as output
    TRISE = 0x00;  // Set Port E as output

    while(1) {     // Endless loop
            // Clear Ports A-E
            PORTA = 0x00;
            PORTB = 0x00;
            PORTC = 0x00;
            PORTD = 0x00;
            PORTE = 0x00;
            // Wait for 1 second
            delay_ms(1000);
            
            // Turn all bits in Ports A-E on
            PORTA = 0xFF;
            PORTB = 0xFF;
            PORTC = 0xFF;
            PORTD = 0xFF;
            PORTE = 0xFF;
            // Wait for 1 second
            delay_ms(1000);
    }
}