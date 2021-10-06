//void main() {
//     int refVal = 0b00000001;   // Bit Value
//     int i;                     // Index for iteration
//     TRISB = 0xFF;      // Input
//     TRISC = 0xFF;      // Input
//     TRISD = 0x00;      // Output
//
//     ANSELB = 0x00;     // Digital
//     ANSELC = 0x00;     // Digital
//     ANSELD = 0x00;     // Digital
//
//     while (1) {
//           PORTD = PORTB & PORTC;     // Question.1
//           PORTD = PORTB | PORTC;     // Question.2
//           PORTD = PORTB ^ PORTC;     // Question.3
//           PORTD = ~PORTB;            // Question.4
//     }
//}

void main() {
     int refVal = 0b00000001;
     int i;
     TRISD = 0x00;
     ANSELD = 0x00;
     PORTD = 0x00;

     while (1) {
           for (i = 0; i < 9; i++) {
                 PORTD = refVal<<1;
                 delay_ms(500);
           }

           for (i = 0; i < 0; i++) {
               PORTD = refVal>>1;
               delay_ms(500);
           }
     }
}