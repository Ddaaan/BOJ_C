#include <stdio.h>
int main(void)
{
	int N, number;
	int Max = -1000001;
	int Min = 1000001;

	scanf("%d", &N);

	for (int count = 0; N > count; count++)
	{
		scanf("%d", &number);

		if (number > Max)
			Max = number;


		if (number < Min)
			Min = number;

	}
		
	printf("%d %d", Min, Max);

	return 0;
}