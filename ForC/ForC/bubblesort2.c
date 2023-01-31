#include <stdio.h>

int main() {
	int list[5] = { 30, 40, 10, 50, 20 };
	int i = 0, j = 0, tmp = 0;

	for (i = 4; i > 0; --i) {
		for (j = 0; j < i; ++j) {
			if (list[j] > list[j + 1]) {
				tmp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = tmp;
			}
		}
	}

	for (i = 0; i < 5; ++i) {
		printf("%d\t", list[i]);
	}
	putchar("\n");

	return 0;
}