#include <stdio.h>

int main() {

    int age = 0, busFee = 0;

    printf("���̸� �Է��ϼ���. : ");
    scanf_s("%d", age);

    if (age < 20) {
        busFee = busFee * 0.75;
    }

    printf("���� ��� : %d��\n", busFee);

    return 0;
}