//LCD Module Connections
/*#define LCD_RS_PIN PIN_D2
#define LCD_RW_PIN PIN_D1
#define LCD_ENABLE_PIN PIN_D3
#define LCD_DATA4 PIN_D4
#define LCD_DATA5 PIN_D5
#define LCD_DATA6 PIN_D6
#define LCD_DATA7 PIN_D7*/


 #define LCD_ENABLE_PIN  PIN_E0                                    ////
 #define LCD_RS_PIN      PIN_E1                                    ////
 #define LCD_RW_PIN      PIN_E2                                    ////
 #define LCD_DATA4       PIN_D4                                    ////
 #define LCD_DATA5       PIN_D5                                    ////
 #define LCD_DATA6       PIN_D6                                    ////
 #define LCD_DATA7       PIN_D7      


//End LCD Module Connections

#include <test.h>
#include <lcd.c>
#fuses HS,NOWDT,NOPROTECT,NOLVP
#use delay (clock=16000000)

void main()
{ OUTPUT_HIGH(PIN_A0);
  int i=0;

  lcd_init();
  Delay_ms(1000);

  while(TRUE)
  { 
    lcd_putc("\f");                   //Clear Display
    lcd_putc("Hello World");
    Delay_ms(8000);
    lcd_putc("\f");                   //Clear Display
    lcd_putc("Welcome To");
    Delay_ms(8000);
    lcd_gotoxy(1,2);
    lcd_putc("LCD Library");
    Delay_ms(2000);
    lcd_putc("\f");                   //Clear Display
    printf(lcd_putc,"Count = %d", i); //Display Count
    Delay_ms(2000);
    i++;
  }
}

