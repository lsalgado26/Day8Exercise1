#include "HostIO.h"

void HostInit(void) {
    printf("\nType two digit numbers to be displayed\n");
}

char GetKeyInput(void) {
    char c;
    c = getchar();
    putchar(c);
    return (c & 0x0F);
}