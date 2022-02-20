#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float arr[1000];

int main(void)
{
	int n;
	float max;
	float sum=0;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
		if (i == 0) {
			max = arr[i];
		}
		else if(max<arr[i]){
			max = arr[i];
		}	
	}
	for (int j = 0;j < n;j++) {
		arr[j] = (arr[j] / max) * 100;
		sum += arr[j];
	}
	printf("%f", sum / n);
	
   
		   
	
}
