#include <stdio.h>
int main(void)
{
	int N;

	scanf_s("%d", &N);

	for (int count = 1; count <= N; count++)
	{
		for (int blank = 0; blank < N - count; blank++)
			printf(" ");

		for (int star = 0; star < 2 * count - 1; star++)
			printf("*");


		printf("\n");

	}

	for (int count = N; count > 0; count--)
	{
		for (int blank = count; blank < N+1; blank++)
			printf(" ");

		for (int star = (count-1) * 2 - 1; star > 0; star--)
			printf("*");

		printf("\n");
	}

	return 0;

}