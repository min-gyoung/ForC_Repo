#include <stdio.h>

int main() {
    char szBuffer[32] = { 0 };
    int length = 0;

    printf("Input your name: ");
    gets(szBuffer);

    while (szBuffer[length] != '\0') {
        length++;
    }

    printf("Your name is %s(%d).\n", szBuffer, length);
    return 0;
}