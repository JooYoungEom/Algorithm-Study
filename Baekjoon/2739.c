#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d", &a);
	for (b = 1; b <= 9; b++) {
		printf("%d * %d = %d\n", a, b, a * b);
	}
}
