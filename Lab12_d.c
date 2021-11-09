/*
 * File Name: Lab12_d
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 11/8/21
 *
 * Description: Count up and down 0-9-0 on DIGIT1
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


    PORTA = disp[0]; // Enable the DIS0 (DIGIT1)
    for (j = 0; j < 10; j++)
    { // Display 0-9 on the display
        PORTD = num[j]; // Get the right segment map from the array.
        delay_ms(1000); // Wait one second
    }
    for (j = 8; j >= 0; j--)
    { // Display 8-0 on the display (skip 9 as it's already been displayed)
        PORTD = num[j];
        delay_ms(1000);
    }
    
    // Blank the displays
    PORTA = 0x00;
    PORTD = 0x00;
}