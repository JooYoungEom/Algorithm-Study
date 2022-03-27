#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {

	int t, h, w, n;  
	int count;    
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		count = 1;    
		scanf("%d %d %d", &h, &w, &n);
		while (n > h) {    
			n -= h;
			count++;

			  
		}
		printf("%d%02d\n", n, count);   
	}


	return 0;
}
