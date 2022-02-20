#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[42];

int main(void)
{
	int a,b;
	int ans = 0;
	for (int i = 0;i < 10;i++) {
		scanf("%d", &a);
		b = a % 42;
		arr[b]++;
	}
	for (int j = 0;j < 42;j++){
		if (arr[j] != 0) {
			ans++;
		}
	}
	printf("%d", ans);
   
		   
	
}
