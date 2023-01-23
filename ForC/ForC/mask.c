#include <stdio.h>

int main() {

    int data = 0x11223344;

    printf("%08X\n", data & 0xFFFF0000);
    printf("%08X\n", data & 0x00FFFF00);
    printf("%08X\n", data & 0x0000FFFF);
    printf("%08X\n", data & 0xFF0000FF);

    return 0;
}