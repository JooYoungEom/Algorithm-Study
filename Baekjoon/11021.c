#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, n;
	scanf("%d", &a);
	for ( n=1; n<= a; n++) {
		scanf("%d %d",&b,&c);
		printf("Case #%d: %d\n",n, b + c);
	}
}
