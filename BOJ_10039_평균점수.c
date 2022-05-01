#include <stdio.h>

int main(void)
{
	int score, sum = 0;
	int N = 0;

	while (N<5)
	{
		scanf_s("%d", &score);
		N++;

		if (score >= 40)
			sum+=score;
		else
			sum +=40;

	}
	printf("%d", sum / 5);

	return 0;
}