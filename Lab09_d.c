/*
 * File Name: Lab09_d
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 10/11/2021
 *
 * Description: Uses functions and the piezo buzzer to play a two octave major scale
*/

// Function for playing a tone, which tone to play is passed as a variable (i)

void tone(int i)
{
    Sound_Init(&PORTE,1);
    switch (i) // Check the variable that was passed to the function
    {
    case 1:                   // If it is 1
        Sound_Play(220, 200); // Play a 220Hz tone for 200ms
        break;
    case 2:                   // If it is 2
        Sound_Play(246, 200); // Play a 698Hz tone for 250ms
        break;
    case 3: // etc...
        Sound_Play(277, 200);
        break;
    case 4:
        Sound_Play(293, 200);
        break;
    case 5:
        Sound_Play(329, 200);
        break;
    case 6:
        Sound_Play(369, 200);
        break;
    case 7:
        Sound_Play(392, 200);
        break;
    case 8:
        Sound_Play(440, 200);
        break;
    case 9:
        Sound_Play(493, 200);
        break;
    case 10:
        Sound_Play(554, 200);
        break;
    case 11:
        Sound_Play(587, 200);
        break;
    case 12:
        Sound_Play(659, 200);
        break;
    case 13:
        Sound_Play(740, 200);
        break;
    case 14:
        Sound_Play(783, 200);
        break;
    default:
        break;
    }
}

// Melody functions using the tone functions above
void melody()
{
    int i; // Upcount variable
    // Ascending
    for (i = 1; i < 15; i++)
    {
        tone(i);
    }

    // Descending
    for (i = 14; i > 0; i--)
    {
        tone(i);
    }
}

// Main function
void main()
{
    TRISB = 0xff;  // Port B as input
    ANSELB = 0x00; // Port B as digital
    C1ON_bit = 0;  // Disable comparators
    C2ON_bit = 0;

    while (1)
    {
        if (Button(&PORTB, 1, 1, 1))
        {
            melody();
            while (RB1_bit);
        }
    }
}