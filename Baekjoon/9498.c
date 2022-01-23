#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int a= 0;
	
	scanf("%d", &a);
	if (a >=90 && a<=100) {
		printf("A");
	}
	else if (a <=89 && a>=80) {
		printf("B");
	}
	else if (a<=79 && a>=70) {
		printf("C");
	}
	else if (a <= 69 && a >= 60) {
		printf("D");
	}
	else {
		printf("F");
	}
	
}
