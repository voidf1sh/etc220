/*
 * File Name: Lab03_a
 * Developed By: Skylar Grant
 * Submission To: Bill Dolan (ETC-220)
 * Development Date: 10/2021
 *
 * Description: Sets off an alarm (Port C bit 0 HIGH) if the following conditions are met:
 *    * Door open (Port B bit 0 HIGH) AND
 *          * Headlights on (Port B bit 1 HIGH) OR
 *          * Key is in ignition (Port B bit 2 HIGH)
*/

void main() {
     TRISB = 0x0F;      // RB_0 thru RB_3 as input
     ANSELB = 0x00;     // Set Port B to digital
     PORTB = 0x00;      // Clear Port B
     
     TRISC = 0x00;      // Port C as output
     PORTC = 0x00;      // Clear Port C
     
     while (1) {
           int door, lights, key, alarm;    // Create needed variables
           PORTC = 0x00;         // Reset the port
           
           // Assign RB0-RB3 to the variables we created earlier
           // Match with the description above
           door = RB0_bit;
           lights = RB1_bit;
           key = RB2_bit;
           
           // Do the logic
           alarm = (door & (key | lights));
           
           if (alarm == 1) {    // If the logic comes out true
              PORTC = 0x01;     // Trigger the alarm
              delay_ms(1000);   // Wait one second before resetting the alarm.
           }
     }
}