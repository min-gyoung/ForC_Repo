#include <stdio.h>

int main() {
    
    int sec = 0;

    scanf_s("%d", &sec);
    pritnf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.\n",
        sec, sec / 3600, sec % 3600 / 60, sec % 60);

    return 0;
}