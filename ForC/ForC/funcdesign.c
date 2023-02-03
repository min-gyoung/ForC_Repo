#include <stdio.h>

int GetFactorial(int param) {
    int result = 1, i = 0;
    
    if (param < 1 || param >10) {
        puts("ERROR: 1~10 사이의 정수를 입력하세요.");

        return 0;
    }
    for (i = 1; i <= param; ++i) {
        result *= i;
    }

    return result;
}

int main() {
    printf("MAX: %d\n", GetFactorial(1));
    printf("MAX: %d\n", GetFactorial(5));
    printf("MAX: %d\n", GetFactorial(11));
    printf("MAX: %d\n", GetFactorial(10));

    return 0;
}