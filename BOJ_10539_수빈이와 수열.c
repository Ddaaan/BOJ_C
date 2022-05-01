#include<stdio.h>
int main(void)
{
	int N;
	int sum = 0;
	int B[100];
	int A[100] = { 0, };
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &B[i]);
	}

	for (int i = 0; i < N; i++)
	{
		if (i == 0)
		{
			A[0] = B[0];
			printf("%d ", A[0]);
		}

		else
		{
			sum += A[i - 1];
			A[i] = B[i] * (i + 1) - sum;
			printf("%d ", A[i]);
		}
	}
	return 0;
}