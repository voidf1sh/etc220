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
int row[8] = {128, 64, 32, 16, 8, 4, 2, 1};

void draw(int x, int y)
{
    PORTB = ~col[x];
    PORTC = row[y];
    return;
}

void penis() {
    draw(4,1);
    draw(5,1);
    
    draw(3,2);
    draw(6,2);
    
    draw(3,3);
    draw(6,3);
    
    draw(3,4);
    draw(6,4);
    
    draw(3,5);
    draw(6,5);
    
    draw(2,6);
    draw(3,6);
    draw(6,6);
    draw(7,6);

    draw(1,7);
    draw(4,7);
    draw(5,7);
    draw(8,7);

    draw(2,8);
    draw(3,8);
    draw(6,8);
    draw(7,8);
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
        penis();
    }
}