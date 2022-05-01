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

int lcm(int x, int y) {
	int temp;
	temp = (x * y) / gcd(x, y);
	return temp;
}

int main() {
	int n, temp, gcd_n;
	scanf("%d", &n);
	scanf("%d", &gcd_n);
	for (int i = 1; i < n; i++) {
		scanf("%d", &temp);
		gcd_n = gcd(gcd_n, temp);
	}
	for (int i = 1; i <= gcd_n; i++) {
		if (gcd_n % i == 0) printf("%d\n", i);
	}
	return 0;
}