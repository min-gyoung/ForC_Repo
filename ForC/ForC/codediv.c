#include <stdio.h>

int GetData() {
    int input = 0;
    printf("������ �Է��ϼ���. : ");
    scanf_s("%d", &input);

    return input;
}

int GetMax(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    return max;
}

void printData(int a, int b, int c, int max) {
    printf("%d, %d, %d �� ���� ū ���� %d�Դϴ�.\n", a, b, c, max);
}

int main() {
    int list[3] = { 0 };
    int max = -9999, i = 0;

    for (i = 0; i < 3; ++i) {
        list[i] = GetData();

        max = GetMax(list[0], list[1], list[2]);

        printData(list[0], list[1], list[2], max);

        return 0;
    }
}