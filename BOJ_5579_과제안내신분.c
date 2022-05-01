#include <stdio.h>

int main(void)
{
	int num;
	int total[30] = { 0, };

	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &num);
		total[num - 1] = num;
	}

	for (int i = 0; i < 30; i++)
	{
		if (total[i] == 0)
			printf("%d\n", i + 1);
	}

	return 0;
}