void main() {
     TRISA = 0x00;
     TRISB = 0x00;
     TRISC = 0x00;
     TRISD = 0x00;
     TRISE = 0x00;

     while(1) {
              PORTA = 0x00;
              PORTB = 0x00;
              PORTC = 0x00;
              PORTD = 0x00;
              PORTE = 0x00;
              delay_ms(1000);
              
              PORTA = 0xFF;
              PORTB = 0xFF;
              PORTC = 0xFF;
              PORTD = 0xFF;
              PORTE = 0xFF;
              delay_ms(1000);
     }
}