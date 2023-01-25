#include <stdio.h>

int main() {
    
    int sec = 0;

    scanf_s("%d", &sec);
    pritnf("%d초는 %02d시간 %02d분 %02d초 입니다.\n",
        sec, sec / 3600, sec % 3600 / 60, sec % 60);

    return 0;
}