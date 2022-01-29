#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d", &a);
	for ( a; a> 0; a--) {
		scanf("%d %d", &b, &c);
		printf("%d\n", b + c);
	}
}
