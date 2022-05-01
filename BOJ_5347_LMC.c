#include <stdio.h>
long gcd(long x, long y) {
	long temp;
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

long lcm(long x, long y) {
	long temp;
	temp = (x * y) / gcd(x, y);
	return temp;
}

int main() {
	long n, a, b;
	long LCM;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%ld %ld", &a, &b);
		LCM=lcm(a, b);
		printf("%d\n", LCM);
	}
	return 0;
}