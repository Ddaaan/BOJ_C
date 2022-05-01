#include <stdio.h>
int main(void)
{
	int line;
	int point, edge;
	int side;

	scanf_s("%d", &line);

	for (int count = 0; count < line; count++)
	{
		scanf_s("%d %d", &point, &edge);
		side = 2 - point + edge;
		printf("%d\n", side);
	}

	return 0;
}