#include <stdio.h>
int main(void)
{
	int cost[9];
	int total;

	scanf_s("%d", &total);

	for (int count = 0; count < 9; count++)
	{
		scanf_s("%d", &cost[count]);
		total = total - cost[count];
	}

	printf("%d", total);

	return 0;

}