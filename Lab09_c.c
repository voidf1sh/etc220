/*
 * File Name: Lab09_c
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 10/11/2021
 *
 * Description: Uses functions and the piezo buzzer to play "Gettin' Classical"
*/

// Function for playing a tone, which tone to play is passed as a variable (i)

void tone(int i)
{
    Sound_Init(&PORTE, 1); // Initialize the piezo by telling the Sound library where it is
    switch (i)             // Check the variable that was passed to the function
    {
    case 1:                   // If it is 1
        Sound_Play(800, 200); // Play a 659Hz tone for 250ms
        break;
    case 2:                   // If it is 2
        Sound_Play(775, 200); // Play a 698Hz tone for 250ms
        break;
    case 3: // etc...
        Sound_Play(600, 200);
        break;
    case 4:
        Sound_Play(725, 200);
        break;
    case 5:
        Sound_Play(675, 200);
        break;
    case 6:
        Sound_Play(525, 200);
        break;
    default:
        break;
    }
}

// Melody functions using the tone functions above
void melody()
{
    tone(1);
    tone(2);
    tone(1);
    tone(2);
    tone(1);
    tone(3);
    tone(4);
    tone(5);
    tone(6);
}

// Main function
void main()
{
    TRISB = 0xFF; // Port B as input
    ANSELB = 0x00;// Port B as analog
    C1ON_bit = 0; // Disable comparators
    C2ON_bit = 0;

    while (1)
    {
        if (Button(&PORTB, 0,1,1))
        {
            melody();
        }
    }
}