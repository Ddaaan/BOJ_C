#include <stdio.h>
int main() {
	int a, b, c, temp;
	int count= 0;
	int N = 0;
	scanf("%d", &N);
	temp = N;

	while (1)
	{
		a = N / 10;
		b = N % 10;
		c = a + b;
		N = (b * 10) + (c % 10);
		count++;

		if (N == temp) break;
	}
	printf("%d", count);
	return 0;
}