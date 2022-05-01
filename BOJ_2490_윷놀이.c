#include <stdio.h>

int main(void)
{
	int count0 = 0;
	int count1 = 0;
	int input;
	for (int Count = 0; Count < 3; Count++)
	{
		for (int N = 0; N < 4; N++)
		{
			scanf("%d", &input);

			if (input == 0)
				count0++;
			else
				count1++;

		}
		if (count0 == 1)
			printf("A");
		else if (count0 == 2)
			printf("B");
		else if (count0 == 3)
			printf("C");
		else if (count0 == 4)
			printf("D");
		else if (count0 == 0)
			printf("E");

		printf("\n");

		count0 = 0;
		count1 = 0;
	}

	return 0;
}