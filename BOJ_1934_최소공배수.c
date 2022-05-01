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
	int T, a, b;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", lcm(a, b));
	}
	return 0;
}