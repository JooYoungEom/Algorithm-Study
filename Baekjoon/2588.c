
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	
	int a, b, c, d, e = 0;
	int x, y, z = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	c = b % 10;
	b = b - c;
	d = (b % 100) / 10;
	e = b / 100;
	x = a * c;
	y = a * d;
	z = a * e;
	printf("%d\n%d\n%d\n", x, y, z);
	printf("%d", x + y * 10 + z * 100);
	
}
