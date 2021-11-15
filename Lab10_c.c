/*
 * File Name: Lab10_c
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 10/19/2021
 *
 * Description: Repeatedly cycle LSB to MSB using for loops and an array
*/

void main()
{
    int c[8] = {1,2,4,8,16,32,64,128};
    int i;

    TRISC = 0x00;
    PORTC = 0x00;
    
    while (1)
    {
        for (i = 0; i < 8; i++)
        {
            PORTC = c[i];
            delay_ms(500);
        }
    }
}