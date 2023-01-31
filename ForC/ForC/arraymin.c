#include <stdio.h>

int main() {
    int list[5] = { 30, 40, 10, 50, 20 };
    int i = 0, tmp = 0;

    for (i = 0; i < 5; ++i) {
        if (list[i] < list[0]) {
            tmp = list[0];
            list[0] = list[i];
            list[i] = tmp;
        }
    }

    for (i = 0; i < 5; ++i) {
        printf("%d\t", list[i]);
    }
    putchar("\n");

    printf("MIN : %d\n", list[0]);

    return 0;
}