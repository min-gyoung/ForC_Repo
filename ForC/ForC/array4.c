#include <stdio.h>

int main() {
    int list[3][4] = { 0 };
    int i = 0, j = 0, counter = 0;

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 4; ++j) {
            list[i][j] = ++counter;
        }
    }

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 4; ++j) {
            printf("%d\t", list[i][j]);
        }
        putchar("\n");
    }

    return 0;
}