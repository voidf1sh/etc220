/*
 * ETC 220 Lab Project 07 - LCD Display 2x16
 *
 *
 *
 *
*/

int i;     // For looping

// Map the LCD pins to the chips port pins
sbit LCD_RS at RB4_bit;
sbit LCD_EN at RB5_bit;
sbit LCD_D4 at RB0_bit;
sbit LCD_D5 at RB1_bit;
sbit LCD_D6 at RB2_bit;
sbit LCD_D7 at RB3_bit;

sbit LCD_RS_Direction at TRISB4_bit;
sbit LCD_EN_Direction at TRISB5_bit;
sbit LCD_D4_Direction at TRISB0_bit;
sbit LCD_D5_Direction at TRISB1_bit;
sbit LCD_D6_Direction at TRISB2_bit;
sbit LCD_D7_Direction at TRISB3_bit;

void main() {
    ANSELB = 0;    // PORTB as digital
    C1ON_bit = 0;  // Turn off comparitors
    C2ON_bit = 0;
    
    // Initialize and clear the LCD then turn the blinking cursor off.
    Lcd_Init();
    Lcd_Cmd(_LCD_CLEAR);
    Lcd_Cmd(_LCD_CURSOR_OFF);
    // Step 1
    Lcd_Out(1,1,"LCD is Working.");         // Row 1 Col 1
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);
    // Step 2
    Lcd_Out(2,1,"LCD is Working.");         // Row 2 Col 1
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);
    // Step 3
    Lcd_Out(1,1,"LCD is Working.");         // Row 1 Col 1
    Lcd_Out(2,1,"LCD is Working.");         // Row 2 Col 1
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);
    // Step 4
    Lcd_Out(1,16,"LCD is Working.");        // Row 1 Col 16
    for (i = 0; i < 64; i++) {
        Lcd_Cmd(_LCD_SHIFT_LEFT);           // Shift left, 64 times will be enough to loop twice
        delay_ms(250);
    }
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);
    // Step 5
    Lcd_Out(1,1,"LCD is Working.");         // Row 1 Col 1
    for (i = 0; i < 64; i++) {              // 64 times to loop twice (16x2x2)
        Lcd_Cmd(_LCD_SHIFT_RIGHT);          // Shift Right
        delay_ms(250);
    }
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);
    // Step 6
    while (1) {                             // Loop forever
        Lcd_Out(1,1,"The Lab is Done!");     // Write the text R1, C1
        delay_ms(1000);                     // Wait 1 second
        Lcd_Cmd(_LCD_CLEAR);                // Clear the screen
        delay_ms(1000);                     // Wait 1 second
    }
}