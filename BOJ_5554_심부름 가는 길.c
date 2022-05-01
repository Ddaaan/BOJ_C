#include <stdio.h>
int main(void)
{
	int time;
	int total = 0;
	int H, M;

	for (int count = 0; count < 4; count++)
	{
		scanf_s("%d", &time);
		total += time;
	}

	H = total / 60;
	M = total % 60;

	printf("%d\n%d", H, M);

	return 0;
}