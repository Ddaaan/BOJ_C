#include <stdio.h>

int main(void)
{
	int N;

	scanf_s("%d", &N);

	for (int count = 1; count <= N; count++)
	{
		{
			for (int star = 0; star < count; star++)
				printf("*");

			for (int blank = 0; blank < (2 * N) - (2 * count); blank++)
				printf(" ");

			for (int star = 0; star < count; star++)
				printf("*");

		}
		printf("\n");
	}

	for (int count = 1; count <N; count++)
	{
		{
			for (int star = 0; star < N-count; star++)
				printf("*");

			for (int blank = 0; blank < (2 * count); blank++)
				printf(" ");

			for (int star = 0; star < N-count; star++)
				printf("*");

		}
		printf("\n");
	}


	return 0;
}