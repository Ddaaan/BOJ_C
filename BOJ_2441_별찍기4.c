#include <stdio.h>

int main(void)
{
	int N;

	scanf_s("%d", &N);

	for (int count = N; count >0; count--)
	{
		for (int star = 1; N - star >= count; star++)
			printf(" ");

		for (int star = 0; star < count; star++)
			printf("*");

		printf("\n");
	}

	return 0;
}