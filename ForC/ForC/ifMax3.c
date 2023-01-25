#include <stdio.h>

int main() {

    int age = 0, busFee =1000;
    double rate = 0.0;

    scanf_s("%d", age);
    if (age < 14) {
        if (age < 4) {
            rate = 0.0;
        }
        else {
            rate = 0.5;
        }
    }

    else {
        if (age < 20) {
            rate = 0.75;
        }
        else {
            rate = 1.0;
        }
    }

    printf("최종 요금 : %d원\n", (int)(busFee * rate));

    return 0;
}