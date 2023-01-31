#include <stdio.h>

int main() {
    int list[5] = { 30, 40, 10, 50, 20 };
    int i = 0, j = 0, minIndex = 0, tmp = 0;

    for (i = 0; i < 4; ++i) {
        minIndex = i;

        for (j = i + 1; j < 5; ++j) {
            if (list[minIndex] > list[j]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            tmp = list[minIndex];
            list[minIndex] = list[i];
            list[i] = tmp;
        }
    }
    for (i = 0; i < 5; ++i) {
        printf("%d\t", list[i]);
    }
    putchar("\n");

    return 0;
}