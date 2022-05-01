#include <stdio.h>
long long gcd(long long x, long long y) {
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

long long lcm(long long x, long long y) {
	long long temp;
	temp = (x * y) / gcd(x, y);
	return temp;
}

int main() {
	long long A, B;
	scanf("%lld %lld", &A, &B);
	printf("%lld", lcm(A, B));
	return 0;
}