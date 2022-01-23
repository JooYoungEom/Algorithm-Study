#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int x, y = 0;
	
	scanf("%d %d", &x, &y);
	y = y - 45;
	if (y < 0) {
		y=y + 60;
		x = x - 1;
		if (x < 0) {
			x = 23;
		}
	}
	printf("%d %d", x, y);
	
}
