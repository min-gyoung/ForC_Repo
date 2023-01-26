#include <stdio.h>

int main() {
    int input = 0, i = 0;

    scanf_s("%d", &input);

    if (input < 1) {
        input = 1;
    }

    else if (input > 9) {
        input = 9;
    }
    
    while (i < input) {
        putchar("*");
        i++;
    }

    putchar("\n");

    return 0;
}