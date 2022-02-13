#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, n, x;
	int arr[10001] = {0,};
	scanf("%d %d", &n, &x);
	for(a=0;a<n;a++){
		if (a == n - 1) {
			scanf("%d", &arr[a]);
		}
		else {
			scanf("%d ", &arr[a]);
		}
		

	}
	for (a = 0; a < n; a++) {
		if (arr[a] < x) {
			printf("%d ",arr[a]);
		}
	}
}
