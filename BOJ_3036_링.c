#include <stdio.h>
#include <stdlib.h>
int gcd(int x, int y) {
	int temp;
	if (x < y) {
		temp = x;
		x = y;
		y = temp;
	}
	while (y != 0)
	{
		temp = x;
		x = y;
		y = temp % y;
	}
	return x;
}

int main() {
	int N, cir;
	scanf("%d", &N);
	int* ring = malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &ring[i]);
		ring[i] = 2 * ring[i];
	}
	cir = ring[0];
	for (int i = 1; i < N; i++) {
		printf("%d/%d\n", cir / gcd(cir, ring[i]), ring[i] / gcd(cir, ring[i]));
	}
	return 0;
}