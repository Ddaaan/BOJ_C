#include <stdio.h>
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
	int n, m,GCD;
	scanf("%d:%d", &n, &m);
	GCD = gcd(n, m);
	printf("%d:%d", n / GCD, m / GCD);

	return 0;
}