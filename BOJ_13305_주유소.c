#include <stdio.h>
#include <stdlib.h>
int main() {
	long long N, * dis, price, min=10e8;
	long long fee = 0;
	scanf("%lld", &N);
	dis = malloc(sizeof(long long) * (N-1));

	for (int i = 0; i < N - 1; i++) scanf("%lld", &dis[i]);
	for (int i = 0; i < N - 1; i++) {
		scanf("%lld", &price);
		if (min > price) min = price;
		fee += min * dis[i];
	}
	printf("%lld", fee);
	free(dis);
	return 0;
}