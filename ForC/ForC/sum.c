#include <stdio.h>

int main() {

    int total = 0, i = 0;
    
    while (i < 10) {
        total += ++i;
    }

    printf("Total : %d\n", total);

    return 0;
}