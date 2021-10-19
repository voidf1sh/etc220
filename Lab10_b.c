/*
 * File Name: Lab10_b
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 10/19/2021
 *
 * Description: Show a Knight Rider effect on an LED array using for loops and an array
*/

void main()
{
    int c[8] = {1,2,4,8,16,32,64,128};      // Set 8 elements in the array c, valued of individual bits
    int i;          // Iteration variable
    TRISC = 0x00;       // Port C as Output
    PORTC = 0x00;       // Clear Port C

    for (i = 0; i < 8; i++)
    {
        PORTC = c[i];
        delay_ms(500);
    }

    for (i = 7; i >= 0; i--)
    {
        PORTC = c[i];
        delay_ms(500);
    }
}