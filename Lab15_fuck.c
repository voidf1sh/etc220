/*
 * File Name: Lab12_a
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 11/8/21
 *
 * Description: Display the number 8 on all for displays, one at a time
*/

int i, j; // Set Variables to drive seven segment display

// Array is built in order, so num[0] is 0, num[1] is 1, and so on
//              0  1   2   3    4    5    6  7    8    9    A    B   C   D    E    F
int hex[16] = {63, 6, 91, 79, 102, 109, 125, 7, 127, 111, 119, 124, 88, 94, 121, 113};
//                   DIS3        DIS2        DIS1        DIS0
int disp[4] = {0b00001000, 0b00000100, 0b00000010, 0b00000001};

void disp(char contents)
{
    for (i = 0; i < 4; i++)
    { // Cycle through the displays
        PORTA = disp[i];
        PORTD = contents[i]
    }
}

void main()
{
    TRISA = 0x00; // PORTA as output
    TRISD = 0x00; // PORTD as output
    PORTA = 0x00; // Clear PORTA
    PORTD = 0x00; // Clear PORTD

    PORTA = disp[0];

    while (1)
    { // Loop forever
        for (i = 0; i < 16; i++)
        {
            PORTD = hex[i];
            delay_ms(500);
        }
    }
}