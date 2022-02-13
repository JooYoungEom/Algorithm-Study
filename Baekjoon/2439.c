#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, n;
	scanf("%d", &a);
	for ( n=1; n<= a; n++) {
		for (b = a-n; b > 0; b--) {
			printf(" ");
		}
		for (c = n; c > 0; c--) {
			printf("*");
		}
		printf("\n");
	}
}
