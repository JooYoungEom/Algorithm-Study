#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char arr[81];

int main(void)
{
	int n;
	int sum;
	int score;
	
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		sum = 0;
		score = 1;
		scanf("%s", arr);
		for (int j = 0;j < strlen(arr);j++) {
			if (arr[j] == 'O') {
				sum += score;
				score++;
			}
			else {
				score = 1;
			}
		}
		printf("%d\n", sum);
	}
   
		   
	
}
