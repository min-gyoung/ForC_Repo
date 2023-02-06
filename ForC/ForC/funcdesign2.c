#include <stdio.h>

int GetFactorial(int param) {
    int result = 1, i = 0;

    if (param < 1 || param>10) {
        return 0;
    }

    for (i = 1; i <= param; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int result = 0, input = 0;
    
    printf("����� ���� ����(1~10)�� �Է��ϼ���. : ");
    scanf_s("%d", &input);

    result = GetFactorial(input);

    if (result == 0) {
        puts("ERROR: 1~10 ������ ������ �Է��ϼ���.");
        
        return 0;
    }

    printf("Result: %d\n", result);

    return 0;
}