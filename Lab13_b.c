/*
 * File Name: Lab13_demo
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 11/15/2021
 *
 * Description: Demonstration of 8x8x1 LED matrix
 * PORTB = col
 * PORTC = row
*/

// Variable for counting
int i, j;
int col[8] = {1, 2, 4, 8, 16, 32, 64, 128};
int row[8] = {1,2,4,8,16,32,64,128};

void draw(int x, int y)
{
    PORTB = ~col[x-1];
    PORTC = row[y-1];
	delay_ms(500);
    return;
}

void demo() {
    for (i = 1; i < 9; i++)
    {
        draw(i,1);
    }
    for (i = 1; i < 9; i++)
    {
        draw(8,i);
    }
    for (i = 8; i >= 0; i--)
    {
        draw(i,8);
    }
    for (i = 8; i >= 0; i--)
    {
        draw(1,i);
    }
}

void main()
{
    // Set Ports B and C for output and clear them
    TRISB = 0;
    TRISC = 0;
    PORTB = 0;
    PORTC = 0;
    while (1)
    {
        demo();
    }
}