#include <stdio.h>
int gcd(int x, int y) {
	int temp;
	int rest = 1;
	if (x < y) {
		temp = x;
		x = y;
		y = temp;
	}
	while (rest!=0)
	{
		temp = y;
		rest = x % y;
		x = temp;
		y = rest;
	}
	return y;
}

int lcm(int x, int y) {
	int temp;
	temp = (x * y) / gcd(x, y);
	return temp;
}

int main() {
	int a, b, N;
	scanf("%d %d", &a, &b);
	N = gcd(a, b);
	printf("%d\n", N);
	N = lcm(a, b);
	printf("%d", N);

	return 0;
}