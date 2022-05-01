#include <stdio.h>
int main(void)
{
	int N;
	scanf_s("%d", &N);

	for (int count = 0; N > count; N--)
	{
		printf("%d \n", N);
	}

	return 0;
}