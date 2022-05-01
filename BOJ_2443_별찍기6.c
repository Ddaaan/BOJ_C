#include <stdio.h>
int main(void)
{
	int N;

	scanf_s("%d", &N);

	for (int count = N; count > 0; count--)
	{
		for (int blank = count; blank < N; blank++)
			printf(" ");

		for (int star = count * 2 - 1; star > 0; star--)
			printf("*");
		
		printf("\n");

	}

	return 0;

}