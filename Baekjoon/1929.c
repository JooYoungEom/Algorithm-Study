#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int num_list[1000002] = { 1, 1, };

int main()
{
    int  m, n;
    // longlong을 쓰는 이유 -> i*i를 하면 overflow가 발생할 수 있기때문.
    long long i, j;

    scanf("%d %d", &m, &n);

    // 제곱근까지만 돌면 충분함.
    for (i = 2; i <= 100000; i++)
    {
        // 소수가 아니면
        if (num_list[i] == 1)
            continue;
        // 소수인 경우 0
        num_list[i] = 0;

        // i*i 부터 시작하는 이유 -> 불필요한 반복을 최소화하기 위해서. 
        // i = 5일때, j = 5*2, 5*3, 5*4 는 이미 소수가 아님이 밝혀졌으므로 반복할 필요 X
        // ㅓ = 5*5 부터 5의배수인 자연수를 모두 1로 세팅.
        for (j = i * i; j <= 1000000; j = j + i)
        {
            // 소수가 아닌것들은 1
            num_list[j] = 1;
        }
    }

    for (i = m; i <= n; i++)
    {
        if (num_list[i] != 1)
            printf("%lld\n", i);
    }

    return 0;
}
