#include <stdio.h>

int main() {
    int list[5] = { 10, 20, 30, 40, 50 };
    int i = 0;

    list[0] = list[4];
    list[1] += list[2];
    list[4] = list[3] * 2;

    for (i = 0; i < 5; ++i) {
        printf("%d\t", list[i]);
    }
    putchar("\n");

    return 0;
}