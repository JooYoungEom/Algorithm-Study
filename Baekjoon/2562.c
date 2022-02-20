#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[9];

int main(void)
{
	int n;
	int max;
	for (int i = 0;i < 9;i++) {
		scanf("%d", &arr[i]);
		if (i == 0) {
			max = arr[i];
			n = i + 1;
		}
		else if (arr[i] > max) {
			max = arr[i];
			n = i + 1;
		}
	}
	printf("%d\n%d", max, n);
	
}
