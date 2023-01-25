#include <stdio.h>

int main() {
    
    int max = 0, input = 0;

    scanf_s("%d", &max);
    if (input > max) {
        max = input;
    }

    scanf_s("%d", &input);
    if (input > max) {
        max = input;
    }

    printf("MAX : %d\n", max);

    return 0;
}