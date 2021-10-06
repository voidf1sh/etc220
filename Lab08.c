/*
 * ETC 220 Lab Project 08 - C Operator Presidence
*/
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

//void show(int result) {
//    char *txt;
//    IntToStr(result,txt);
//    Lcd_Out(2,1,txt);
//    delay_ms(1000);
//    Lcd_Cmd(_LCD_CLEAR);
//}

void main() {
    char *txt;
    int a,b,c,d,e,f,g,h,i,j,k,m,x,y,z;
    // variables for each of the problems outlines in the lab
    int p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17;

    ANSELB = 0;    // PORTB as digital
    C1ON_bit = 0;  // Turn off comparitors
    C2ON_bit = 0;

    // Initialize and clear the LCD then turn the blinking cursor off.
    Lcd_Init();
    Lcd_Cmd(_LCD_CLEAR);
    Lcd_Cmd(_LCD_CURSOR_OFF);

    a = 1;
    b = 2;
    c = 3;
    d = 4;
    e = 5;
    
    p1 = (a+b+c+d+e)/5;
    IntToStr(p1,txt);
    Lcd_Out(1,1,"Problem 1:");
    Lcd_Out(2,1,txt);
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);
//    show(p1);
    
    m = 15;
    x = 12;
    b = 26;
    
    p2 = (m * x) + b;
    IntToStr(p2,txt);
    Lcd_Out(1,1,"Problem 2:");
    Lcd_Out(2,1,txt);
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);
    
    a = 5;
    b = 6;
    c = 7;
    d = 12;
    
    p3 = a * b * b + c * b + d;
    IntToStr(p3,txt);
    Lcd_Out(1,1,"Problem 3:");
    Lcd_Out(2,1,txt);
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);
    
    p4 = 7 + 3 * 6 / (2 - 1);
    IntToStr(p4,txt);
    Lcd_Out(1,1,"Problem 4:");
    Lcd_Out(2,1,txt);
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);
    
    p5 = 2 % 2 + 2 * 2 - 2 / 2;
    IntToStr(p5,txt);
    Lcd_Out(1,1,"Problem 5:");
    Lcd_Out(2,1,txt);
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);
    
    p6 = (3*9*(3+(9*3/(3))));
    IntToStr(p6,txt);
    Lcd_Out(1,1,"Problem 6:");
    Lcd_Out(2,1,txt);
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);
    
    p7 = ++a | 10 & 15;
    IntToStr(p7,txt);
    Lcd_Out(1,1,"Problem 7:");
    Lcd_Out(2,1,txt);
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);
    
    p8 = ~14 & 7 | 8;
    IntToStr(p8,txt);
    Lcd_Out(1,1,"Problem 8:");
    Lcd_Out(2,1,txt);
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);
    
    p9 = 6 >> 16 / 3 % 3 ^ 4;
    IntToStr(p9,txt);
    Lcd_Out(1,1,"Problem 9:");
    Lcd_Out(2,1,txt);
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);

    p10 = 5 | 4 || 3 < 2 > 1;
    IntToStr(p10,txt);
    Lcd_Out(1,1,"Problem 10:");
    Lcd_Out(2,1,txt);
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);
    
    x = 5;
    y = 4;
    z = 3;
    
    p11 = x << !y * z++;
    IntToStr(p11,txt);
    Lcd_Out(1,1,"Problem 11:");
    Lcd_Out(2,1,txt);
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);
    
    p12 = 0xFF & 0x77;
    IntToStr(p12,txt);
    Lcd_Out(1,1,"Problem 12:");
    Lcd_Out(2,1,txt);
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);
    
    p13 = 0x5A | 0xA5;
    IntToStr(p13,txt);
    Lcd_Out(1,1,"Problem 13:");
    Lcd_Out(2,1,txt);
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);

    p14 = 0x2C ^ 0xAB;
    IntToStr(p14,txt);
    Lcd_Out(1,1,"Problem 14:");
    Lcd_Out(2,1,txt);
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);
    
    p15 = ~0xAA & 0x55;
    IntToStr(p15,txt);
    Lcd_Out(1,1,"Problem 15:");
    Lcd_Out(2,1,txt);
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);
    
    p16 = 0x0F << 2 | 0x15;
    IntToStr(p16,txt);
    Lcd_Out(1,1,"Problem 16:");
    Lcd_Out(2,1,txt);
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);
    
    p17 = 2 | 7 & 6 ^ 3 * 2;
IntToStr(p17,txt);
    Lcd_Out(1,1,"Problem 17:");
    Lcd_Out(2,1,txt);
    delay_ms(3000);
    Lcd_Cmd(_LCD_CLEAR);
}