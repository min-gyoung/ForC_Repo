#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int printMenu() {
    int input = 0;

    system("cls"); // �޴��� ����ϱ� ���� ȭ�� �����(Clear Screen)

    printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n:");
    scanf_s("%d", &input);

    return 0;
}

int main() {
    int menu = 0;

    while ((menu = printMenu()) != 0) {
        switch (menu) {
            case1:
                puts("�� �׸��� �߰��մϴ�.");
                break;
        
            case2:
                puts("���� �׸񿡼� �˻��մϴ�.");
                break;

            case3:
                puts("��ü ������ ����մϴ�.");
                break;
           
            case4:
                puts("���� �׸��� �����մϴ�.");
                break;
            
        default:
            puts("�� �� ���� ����Դϴ�.");
        }

        _getch();
    }

    puts("Bye");
    
    return 0;
}