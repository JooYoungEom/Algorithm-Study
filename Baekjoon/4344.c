#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void)
{
	int n;
	int num;
	float per;
	float avg;
	int sum;
	int score;

	
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		int arr[1001] = { 0, };
		sum = 0;
		avg = 0;
		num = 0;
		scanf("%d", &arr[0]);
		for (int j = 1;j <= arr[0];j++) {
			scanf("%d", &arr[j]);
			sum += arr[j];
		}
		avg = sum / arr[0];
		for (int k = 1;k <= arr[0];k++) {
			if (arr[k] > avg) {
				num += 1;
			}
		}
		printf("%.3f%%\n", ((float)num/arr[0])*100 );
	}
   
		   
	
}
