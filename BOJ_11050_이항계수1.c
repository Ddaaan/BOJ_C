#include <stdio.h>
int main() {
	int N, K;
	int N_mul = 1;
	int K_mul = 1;
	int NK = 1;
	scanf("%d %d", &N, &K);

	if (K < 0) printf("0");
	if (K > N) printf("0");

	for (int i = 1; i <= N; i++) N_mul *= i;
	for (int i = 1; i <= K; i++) K_mul *= i;
	for (int i = 1; i <= N - K; i++) NK *= i;
	printf("%d\n", N_mul / (K_mul*NK));
	return 0;
}