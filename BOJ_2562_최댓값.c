#include <stdio.h>

int main(void)
{
	int number[9];
	int max = 0;
	int Max=0;

	for (int count = 0; count < 9; count++)
	{
		scanf_s("%d", &number[count]);

		if (number[count] > max)
		{
			max = number[count];
			Max = count;

		}

	}

	printf("%d \n", max);
	printf("%d", Max + 1);


	return 0;
}