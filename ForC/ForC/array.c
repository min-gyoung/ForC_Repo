#include <stdio.h>

int main() {
    int list[5] = { 10, 20, 30, 40, 50 };
    int i = 0;

    for (i = 0; i < 5; ++i) {
        printf("%d\t", list[i]);
    }
    putchar("\n");

    list[0] = 100;
    list[3] = 200;

    for (i = 0; i < 5; ++i) {
        printf("%d\t", list[i]);
    }
    putchar("\n");

    return 0;
}