void main() {
     int refVal = 0b00000001;
     int i;
     TRISD = 0x00;
     ANSELD = 0x00;
     PORTD = refVal;

     while (1) {
           for (i = 0; i < 7; i++) {
                 refVal = refVal<<1;
                 PORTD = refVal;
                 delay_ms(500);
           }

           for (i = 0; i < 7; i++) {
               refVal = refVal>>1;
               PORTD = refVal;
               delay_ms(500);
           }
     }
}