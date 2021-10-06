/*
  * U1, U2 are identical 74138s using the same inputs, and separate enable pins
 * PORTB: RB0, RB1, RB2 as A, B, C input on 74138
 * PORTC: RC0, RC1 as Enable1 and Enable2 for U1 and U2
 * Step 3: Turn on & off various ports
*/


void main() {
     TRISB = 0;      // PORTB output
     TRISC = 0;      // PORTC output
     PORTB = 0;      // Clear PORTB
     PORTC = 0;      // Clear PORTC
     
     // Desk Light (U1, L0)
     PORTC = 1; //U1
     PORTB = 0; //L0
     delay_ms(3000);
     
     // Printer (U2, L7)
     PORTC = 2; //U2
     PORTB = 7; //L7
     delay_ms(5000);
     
     // Keyboard (U1, L3)
     PORTC = 1;
     PORTB = 3;
     delay_ms(10000);
     
     // Hard Drive (U2, L4)
     PORTC = 2;
     PORTB = 4;
     delay_ms(8000);
     
     // Photo Coper (U1, L5)
     PORTC = 1;
     PORTB = 5;
     delay_ms(1000);
     
     // Outside Spot Light (U2, L1)
     PORTC = 2;
     PORTB = 1;
     delay_ms(7000);
}