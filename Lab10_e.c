/*
 * File Name: Lab10_e
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 10/26/2021
 *
 * Description: Display characters converted from ASCII to binary from an array on PORTB
*/

char msg[12] = "Test Message";
int i;

void main()
{
    TRISB = 0x00;
    PORTB = 0x00;

    for (i = 0; i < 12; i++)
    {
        PORTB = msg[i];
        delay_ms(1000);
    }
}