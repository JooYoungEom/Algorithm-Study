#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, n;
	scanf("%d", &a);
	for ( n=1; n<= a; n++) {
		for (b = 0; b < n; b++) {
			printf("*");
		}
		printf("\n");
	}
}
