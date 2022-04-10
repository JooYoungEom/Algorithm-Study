#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 123456 * 2 + 1

int main() {
	long a, b, c;
	while (1) {
		scanf("%ld %ld %ld", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;
		a *= a;
		b *= b;
		c *= c;
		if (a + b == c || a + c == b || b + c == a)
			printf("right\n");
		else
			printf("wrong\n");
	}
}

