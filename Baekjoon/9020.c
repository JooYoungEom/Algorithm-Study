#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 123456 * 2 + 1

int main() {

	int c[10001] = { 0 };
	c[1] = 1;
	for (int i = 2; i <= 10001; i++)
		for (int j = 2; j * i <= 10001; j++)
			c[i * j] = 1;

	int ntest;
	int n;
	int check;
	scanf("%d", &ntest);
	for (int i = 0; i < ntest; i++) {
		scanf("%d", &n);
		check = n / 2;
		for (int m = check; m > 0; m--) {
			if (c[m] != 1 && c[n - m] != 1) {
				printf("%d %d\n", m, n - m);
				break;
			}
		}
	}
}
