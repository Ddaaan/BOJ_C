#include <stdio.h>
int main(void)
{
	int N;
	int count = 1;
	int house = 1;
	scanf("%d", &N);

	while (1)
	{
		if (N == 1)
		{
			printf("%d", N);
			break;
		}

		N -= house;
		house = 6 * count;
		count++;

		if (N <= house)
		{
			printf("%d", count);
			break;
		}
	}
	
	return 0;
}