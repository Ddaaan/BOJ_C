#include <stdio.h>
int main(void)
{
	int N;
	int count = 0;

	scanf("%d", &N);

	while (1)
	{
		if (N % 5 == 0)
		{
			count += N / 5;
			printf("%d", count);
			break;
		}

		N -= 3;
		count++;

		if (N < 0)
		{
			printf("-1");
			break;
		}
	}
	return 0;
}