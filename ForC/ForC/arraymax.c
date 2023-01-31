#include <stdio.h>

int main() {
    int list[5] = { 30, 40, 10, 50, 20 };
    int i = 0;

    for (i = 1; i < 5; ++i) {
        if (list[i] > list[0]) {
            list[0] = list[i];
        
        }
    }
    for (i = 0; i < 5; i++) {
        printf("%d\t", list[i]);
    }
    putchar("\n");

    printf("MAX: %d\n", list[0]);

    return 0;
}