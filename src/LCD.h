#ifndef LCD_H
#define LCD_H

#include <mbed.h>
void toggle_enable(void);
void LCD_init(void);
void display_to_LCD(char value);

#endif