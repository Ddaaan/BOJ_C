#include <stdio.h>
int factorial(int num) {
	int total = 1;
	for (int i = num; i > 0; i--) {
		total *= i;
	}
	return total;
}

int main() {
	int N;
	scanf("%d", &N);
	printf("%d", factorial(N));
	return 0;
}