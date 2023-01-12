#ifndef SEGDISPLAY_H
#define SEGDISPLAY_H

#include <mbed.h>
extern BusOut Seg1;
extern BusOut Seg2;
void SegInit(void);
int SegConvert(char SegValue);

#endif