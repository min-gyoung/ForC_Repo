#include <stdio.h>

int main() {

    int max = 0;
    int x, y, z;

    scanf_s("%d %d %d", &x, &y, &z);

    max = x;
    max = y > max ? y : max;
    max = z > max ? z : max;

    printf("MAX: %d\n", max);

    return 0;
}