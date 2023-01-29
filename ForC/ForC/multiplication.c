#include <stdio.h>

int main() {

    int input = 0, i = 1;

    scanf_s("%d", &input);
    
    if (input >= 2 && input <= 9) {
        while (i < 10) {
            printf("%d * %d = %d\n", input, i, input * i);
            i++;
        }
    }
    else {
        puts("ERROR");
    }
    return 0;
}