#include <stdio.h>

int main() {

    int height = 0;

    printf("키를 입력하세요. : ");
    scanf_s("%d", &height);

    printf("결과: %s\n", height >= 150 ? "합격" : "불합격");

    return 0;
}