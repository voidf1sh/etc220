void main() {
     TRISB = 0x0F;      // RB_0 thru RB_3 as input
     ANSELB = 0x00;     // Set PortB to digital
     PORTB = 0x00;      // Clear the port
     
     TRISC = 0x00;      // PortC as input
     PORTC = 0x00;      // Clear PortC
     
     while (1) {
           int door, lights, key, alarm;    // Create needed variables
           int temp;
           
           PORTC = 0x00;         // Reset the port
           
           // Assign RB0-RB3 to a,b,c,d
           door = RB0_bit;
           lights = RB1_bit;
           key = RB2_bit;
           
           // Do the logic
           temp = (key | lights);
           alarm = (door & temp);
           
           if (alarm == 1) {
              PORTC = 0x01;
              delay_ms(1000);
           }
     }
}