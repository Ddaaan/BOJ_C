#include <stdio.h>

int main()
{
    int N, temp;
    long long total = 0;
    long long real_total = 0;
    scanf("%d", &N); 

    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &temp);
        total += (long long)temp; // 배열에 있는 각각의 수를 다 더해서 total에 저장
        real_total += (long long)i; // 중복된 수를 제외한 각 수를 더한 값 (N-1까지 더하면 됨)
    }

    printf("%lld\n", total - real_total);
    return 0;
}