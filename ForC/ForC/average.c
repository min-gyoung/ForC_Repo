#include <stdio.h>

int main() {

    int x, y;
    printf("두 정수를 입력하세요.: ");

    scanf_s("%d %d", &x, &y);
    printf("%AVG: %.2f\n", (x + y) /2.0);

    return 0;
}