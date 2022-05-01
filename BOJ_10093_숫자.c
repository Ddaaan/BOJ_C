#include <stdio.h>
int main(void)
{
	long long A, B;
	scanf("%lld %lld", &A, &B);
	long long num = A + 1;
	long long num2 = B + 1;

	if (A < B)
	{
		printf("%d\n", B - A - 1);
		for (int i = 0; i < B - A - 1; i++)
		{
			printf("%lld ", num);
			num++;
		}
	}

	else if (A > B)
	{
		printf("%d\n", A - B - 1);
		for (int i = 0; i < A - B - 1; i++)
		{
			printf("%lld ", num2);
			num2++;
		}
	}

	else
		printf("0\n");
		
	return 0;
}