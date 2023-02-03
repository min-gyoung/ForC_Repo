#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int printMenu() {
    int input = 0;

    system("cls"); // 메뉴를 출력하기 전에 화면 지우기(Clear Screen)

    printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n:");
    scanf_s("%d", &input);

    return 0;
}

int main() {
    int menu = 0;

    while ((menu = printMenu()) != 0) {
        switch (menu) {
            case1:
                puts("새 항목을 추가합니다.");
                break;
        
            case2:
                puts("기존 항목에서 검색합니다.");
                break;

            case3:
                puts("전체 내용을 출력합니다.");
                break;
           
            case4:
                puts("기존 항목을 삭제합니다.");
                break;
            
        default:
            puts("알 수 없는 명령입니다.");
        }

        _getch();
    }

    puts("Bye");
    
    return 0;
}