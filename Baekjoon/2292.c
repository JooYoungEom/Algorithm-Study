#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int N, x = 1, cnt = 1;
    scanf("%d", &N);

    while (1) {
        if (N - x <= 0) break;

        N -= x;

        x = cnt * 6;

        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
