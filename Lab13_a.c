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
int row[8] = {1, 2, 4, 8, 16, 32, 64, 128};

void draw(int x, int y)
{
    PORTB = ~col[x - 1];
    PORTC = row[y - 1];
    delay_ms(500);
    return;
}

void demo()
{
    draw(1, 1);
    draw(8, 1);
    draw(8, 8);
    draw(1, 8);
    draw(5, 4);
    draw(5, 5);
    draw(4, 5);
    draw(4, 4);
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