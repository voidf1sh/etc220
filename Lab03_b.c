/*
 * File Name: Lab03_b
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 10/2021
 *
 * Description: 
*/

void main() {
     TRISB = 0x0F;      // RB_0 thru RB_3 as input
     ANSELB = 0x00;     // Set PortB to digital
     PORTB = 0x00;      // Clear the port

     TRISC = 0x00;      // PortC as input
     PORTC = 0x00;      // Clear PortC

     while (1) {
           int ah, fd, vd, motion, alarm;    // Create needed variables
           int temp;

           PORTC = 0x00;         // Reset the port

           // Assign RB0-RB3 to a,b,c,d
           ah = RB3_bit;
           fd = RB2_bit;
           vd = RB1_bit;
           motion = RB0_bit;

           // Do the logic
           alarm = ( ah & ( fd | vd | motion));

           if (alarm == 1) {
              PORTC = 0x01;
              delay_ms(1000);
           }
     }
}