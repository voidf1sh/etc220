void main() {
     int i;             // Variable for iteration using for loop later
     TRISB = 0x00;      // Set PORTB to output
     TRISC = 0xFF;      // Set PORTC to input
     
     PORTB = 0x00;      // Clear the port
     PORTC = 0x00;
     
     while(1) {         // Loop forever
              for (i = 0; i < 4; i++) {
                  PORTB = i;
                  delay_ms(500);
              }
              for (i = 2; i > 0; i--) {
                  PORTB = i;
                  delay_ms(500);
              }
     }
}