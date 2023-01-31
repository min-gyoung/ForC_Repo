#include <stdio.h>

int main() {
    int list[5] = { 30, 40, 10, 50, 20 };
    int i = 0, j = 0, tmp = 0;

    for (i = 0; i < 4; ++i) {
        for (j = i + 1; j < 5; ++j) {
            if (list[j] < list[i]) {
                tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;
            }
        }
    }

    for (i = 0; i < 5; ++i) {
        printf("%d\t", list[i]);
    }
    putchar("\n");

    return 0;
}