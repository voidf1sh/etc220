/*
  * U1, U2 are identical 74138s using the same inputs, and separate enable pins
 * PORTB: RB0, RB1, RB2 as A, B, C input on 74138
 * PORTC: RC0, RC1 as Enable1 and Enable2 for U1 and U2
 * Step 1: Knight Rider KITT effect on U1
 * Step 2: Knight Rider KITT effect on U1 and U2
*/



void main() {
     int i;            // Variable for indexing/iteration
     TRISB = 0;        // PORTB as output
     TRISC = 0;        // PORTC as outpout
     PORTB = 0;        // PORTB clear
     PORTC = 0;        // PORTC clear

     PORTC = 0b00000001;           // Enable U1
     // Count up from 0-7 on U1
     for(i = 0; i < 8; i++) {
           PORTB = i;
           delay_ms(100);
     }
     // Count down 7-0 on U1
     for(i = 7; i >= 0; i--) {
          PORTB = i;
          delay_ms(100);
     }
     // One second delay between steps
     delay_ms(1000);
     // Count up 0-7 on U1
     for(i = 0; i < 8; i++) {
           PORTB = i;
           delay_ms(100);
     }
     // Switch to U2
     PORTC = 0b00000010;    // Enable U2
     // Count up from 0-7 on U2
     for(i = 0; i < 8; i++) {
           PORTB = i;
           delay_ms(100);
     }
     // Count down 7-0 on U2
     for(i = 7; i >= 0; i--) {
          PORTB = i;
          delay_ms(100);
     }
     // Switch to U1
     PORTC = 0b00000001;
     for(i = 7; i >= 0; i--) {
           PORTB = i;
           delay_ms(100);
     }
}