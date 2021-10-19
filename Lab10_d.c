/*
 * File Name: Lab10_d
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 10/19/2021
 *
 * Description: Repeatedly cycle MSB to LSB using for loops and an array
*/

void main()
{
    int c[8] = {1,2,4,8,16,31,64,128};
    int i;

    TRISC = 0x00;
    PORTC = 0x00;
    
    while (1)
    {
        for (i = 7; i >= 0; i--)
        {
            PORTC = c[i];
            delay_ms(500);
        }
    }
}