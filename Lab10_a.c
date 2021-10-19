/*
 * File Name: Lab10_a
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 10/19/2021
 *
 * Description: Show a Knight Rider effect on an LED array without using for loops
*/

void main()
{
    int c[8] = {1,2,4,8,16,32,64,128};      // Set 8 elements in the array c, valued of individual bits
    TRISC = 0x00;       // Port C as output
    PORTC = 0x00;       // Clear Port C

    while(1)
    {
        PORTC = c[0];       // Set Port C to the 1st element in the array
        delay_ms(500);      // Wait for half a second
        PORTC = c[1];       // Set Port C to the 2nd element in the array
        delay_ms(500);      // Wait for half a second
        PORTC = c[2];       // ...
        delay_ms(500);      // ...
        PORTC = c[3];
        delay_ms(500);
        PORTC = c[4];
        delay_ms(500);
        PORTC = c[5];
        delay_ms(500);
        PORTC = c[6];
        delay_ms(500);
        PORTC = c[7];
        delay_ms(500);
        PORTC = c[6];
        delay_ms(500);
        PORTC = c[5];
        delay_ms(500);
        PORTC = c[4];
        delay_ms(500);
        PORTC = c[3];
        delay_ms(500);
        PORTC = c[2];
        delay_ms(500);
        PORTC = c[1];
        delay_ms(500);
        PORTC = c[0];
        delay_ms(500);        
    }
}