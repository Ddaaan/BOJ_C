#include <stdio.h>
int main() {
	int N, F, temp, i;
	scanf("%d %d", &N, &F);
	N = (N / 100) * 100;

	for (i = 0; i < 100; i++) {
		temp = N;
		if ((temp += i) % F == 0) break;
	}
	if (i < 10) printf("0");
	printf("%d", i);
	return 0;
}