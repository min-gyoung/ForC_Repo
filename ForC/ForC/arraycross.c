#include <stdio.h>

int main() {
    int list[5][5] = { 0 };
    int i = 0, j = 0, counter = 0;

    for (i = 0; i < 5; ++i) {
        if (i % 2 == 0) {
            for (j = 0; j < 5; ++j) {
                list[i][j] = ++counter;
            }
        }
        else {
            for (j = 4; j >= 0; --j) {
                list[i][j] = ++counter;
            }
        }
    }
    for (i = 0; i < 5; ++i) {
        for (j = 0; j < 5; ++j) {
            printf("%d\t", list[i][j]);
        }
        putchar("\n");
    }
    
    return 0;
}