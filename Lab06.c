/*
 * PORTB: Output to U1 (74373)
 * PORTC: RC0 to U1 latch enable
 *
 * Step 1: Count up to 1111 1111
 *      -- Stop and latch at 0101 0101 (85) (64+16+4+1)
        -- Stop and latch at 1010 1010 (170) (128+32+8+2)
*/

void main() {
     int i;               // Indexing variable
     TRISB = 0;           // PORTB output
     TRISC = 0;           // PORTC output
     PORTB = 0;           // PORTB clear
     PORTC = 0;           // PORTC clear
     
     while(1) {
              for (i = 0; i < 256; i++) {
                  PORTB = i;
                  delay_ms(100);
                  if (i == 85) {
                     PORTC = 1;
                     delay_ms(500);
                     PORTC = 0;
                  }
                  if (i == 170) {
                     PORTC = 1;
                     delay_ms(500);
                     PORTC = 0;
                  }
              }
     }
}