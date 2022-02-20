#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[1000001];

int main(void)
{
	int n;
	int max, min;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		if (i == n - 1) {
			scanf("%d", &arr[i]);
		}
		else{
			scanf("%d ", &arr[i]);
		}
		
	}
	max = arr[0];
	min = arr[0];
	for (int j = 1;j < n;j++) {
		if (max < arr[j]) {
			max = arr[j];
		}
		if (min > arr[j]) {
			min = arr[j];
		}
	}
	printf("%d %d", min, max);
	
}
