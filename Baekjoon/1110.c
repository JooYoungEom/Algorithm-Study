#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, ans, cycle=0;
	scanf("%d", &a);
	ans = a;
	
	while(1){
		b = a / 10;
		c = a % 10;
		a = c * 10 + (b + c)%10;
		cycle += 1;
		if (ans == a) {
			printf("%d", cycle);
			break;
		}
			
	}
}
