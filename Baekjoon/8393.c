#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, sum=0;
	scanf("%d", &a);
	for ( b=1; b<=a; b++) {
		sum += b;
	}
	printf("%d\n", sum);
}
