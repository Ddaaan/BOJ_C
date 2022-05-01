#include <stdio.h>

int main(void)
{
	int N, X, number;
	int arr[10000];

	scanf_s("%d %d", &N, &X);

	for (int count = 0; count < N; count++)
	{
		scanf_s("%d", &number);

		if (number < X)
			printf("%d ", number);
	}
		
	return 0;
}