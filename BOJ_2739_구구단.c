#include <stdio.h>
int main(void)
{
	int N;

	scanf_s("%d", &N);

	for (int n = 1; n < 10; n++)
	{
		printf("%d * %d = %d\n", N, n, N * n);
	}

	return 0;
}