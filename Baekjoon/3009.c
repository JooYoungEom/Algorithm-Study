#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 123456 * 2 + 1

int main(void) {
	int xArr[4], yArr[4]; //좌표를 저장할 배열

	for (int i = 0; i < 3; i++) //세 점의 좌표 입력 받기
		scanf("%d%d", &xArr[i], &yArr[i]);

	if (xArr[0] == xArr[1]) 
		xArr[3] = xArr[2];
	else if (xArr[0] == xArr[2]) 
		xArr[3] = xArr[1];
	else 
		xArr[3] = xArr[0];
	if (yArr[0] == yArr[1])
		yArr[3] = yArr[2];
	else if (yArr[0] == yArr[2])
		yArr[3] = yArr[1];
	else 
		yArr[3] = yArr[0];

	printf("%d %d", xArr[3], yArr[3]);
	return 0;
}

