#include <stdio.h>

int main() {
    int list[4][2][3] = { 0 };
    int i = 0, j = 0, k = 0, counter = 0;

    for (i = 0; i < 4; ++i) {
        printf("Plane number : %d\n", i);
        for (j = 0; i < 2; ++j) {
            for (k = 0; k < 3; ++k) {
                list[i][j][k] = ++counter;
                printf("%d\t", list[i][j][k]);
            }
            putchar("\n");
        }
        printf("\n\n");
    }

    return 0;
}