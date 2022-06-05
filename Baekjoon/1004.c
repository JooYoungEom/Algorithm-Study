#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int T, n;
    int i, j;
    int x1, x2, y1, y2;
    int x, y, r;
    int total;
    int count;

    scanf("%d", &T);

    for (i = 0; i < T; i++) {
        total = 0;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d", &n);
        for (j = 0; j < n; j++) {
            count = 0;
            scanf("%d %d %d", &x, &y, &r);
            if ((x - x1) * (x - x1) + (y - y1) * (y - y1) < r * r) {
                count++;
            }
            if ((x - x2) * (x - x2) + (y - y2) * (y - y2) < r * r) {
                count++;
            }
            if (count == 1) {
                total++;
            }

        }
        printf("%d\n", total);
    }
    return 0;
}

