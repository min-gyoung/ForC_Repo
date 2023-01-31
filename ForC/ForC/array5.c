#include <stdio.h>

int main() {
    int list[3][4] = {
        {10, 20, 30},
        {40, 50, 60}
    };
    int i = 0, j = 0;

    for (i = 0; i < 2; ++i) {
        for (j = 0; i < 3; ++j) {
            list[i][3] += list[i][j];
        }
    }

    for (j = 0; j < 4; ++j) {
        for (i = 0; i < 2; ++i) {
            list[2][j] += list[i][j];
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