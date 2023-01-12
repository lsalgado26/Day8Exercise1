#include <mbed.h>
#include "LCD.h"

DigitalOut RS(p19);
DigitalOut E(p20);
BusOut data(p21, p22, p23, p24);

void toggle_enable(void) {
    E = 1;
    ThisThread::sleep_for(1ms);
    E = 0;
    ThisThread::sleep_for(1ms);
}

void LCD_init(void) {
    ThisThread::sleep_for(20ms);
    RS = 0;
    E = 0;


    data = 0x2;
    toggle_enable();
    data = 0x8;
    toggle_enable();


    data = 0x0;
    toggle_enable();
    data = 0x1;
    toggle_enable();
}

void display_to_LCD(char value) {
    RS = 1;
    data = value >> 4;
    toggle_enable();
    data = value;
    toggle_enable();
}