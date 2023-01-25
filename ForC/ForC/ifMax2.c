#include <stdio.h>

int main() {

    int age = 0, busFee = 0;

    printf("나이를 입력하세요. : ");
    scanf_s("%d", age);

    if (age < 20) {
        busFee = busFee * 0.75;
    }

    printf("최종 요금 : %d원\n", busFee);

    return 0;
}