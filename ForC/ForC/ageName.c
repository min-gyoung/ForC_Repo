/*
* 나이와 이름을 입력받아 한 행으로 출력하는 프로그램
* 사용자로부터 이름과 나이를 입력받아 한 번에 출력하는 프로그램을 작성합니다.
* 이름을 입력받을 때는 gets() 함수를 사용하고, 나이는 scanf() 함수로 입력받아야 하며,
* 두 정보를 printf() 함수로 한꺼번에 출력합니다.
*/

#include <stdio.h>

int main() {

    int age = 0;
    char name[32] = { 0 };

    printf("이름을 입력하세요: ");
    scanf_s(name);

    printf("나이를 입력하세요: ");
    scanf_s("%d%*c", &age);

    printf("이름은 %s이고 %d살 입니다.", &age, &name);

    return 0;
}