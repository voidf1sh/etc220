/*
 * File Name: Lab12_b
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 11/8/21
 *
 * Description: Display the number 8 on all four dislays simultaneously using TDM
*/

int i,j; // Set Variables to drive seven segment display

// Which segments need to be lit to make each number?
//  __g__
// |     |
// b     f
// |__a__|
// |     |
// c     e
// |__d__|
// RD0-RD6 = a-g in order

// Array is built in order, so num[0] is 0, num[1] is 1, and so on
int num[10] = {0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};
int disp[4] = {0b00000001,0b00000010,0b00000100,0b00001000};
void main()
{
    TRISA = 0x00; // PORTA as output
    TRISD = 0x00; // PORTD as output
    PORTA = 0x00; // Clear PORTA
    PORTD = 0x00; // Clear PORTD

    for (j = 0; j < 150; j++)
    { // Loop 150 times (3 seconds)
        for (i = 0; i < 4; i++)
        { // Cycle through the four displays
            PORTA = disp[i]; // Enable the display corresponding to i's current value
            PORTD = num[8];
            delay_ms(5);
        }
    }
    PORTA = 0x00; // Blank the displays
    PORTD = 0x00; // Blank the displays
}