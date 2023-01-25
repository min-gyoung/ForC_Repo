#include <stdio.h>

int main() {

    int max = -100, inputNum = 0;

    scanf_s("%d", &inputNum);
    max = inputNum > max ? inputNum : max;

    scanf_s("%d", &inputNum);
    max = inputNum > max ? inputNum : max;

    scanf_s("%d", &inputNum);
    max = inputNum > max ? inputNum : max;

    printf("MAX : %d\n", max);

    return 0;
}