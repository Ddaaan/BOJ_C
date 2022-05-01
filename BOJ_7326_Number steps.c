#include <stdio.h>
int main(void)
{
	int x, y, N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &x, &y);

		if (x >=y)
		{
			if (x % 2 == 0 && y % 2 == 0)
				printf("%d\n", x + y);
			else if (x % 2 == 1 && y % 2 == 1)
				printf("%d\n", x + y - 1);
			else
				printf("No Number\n");
		}
		else
			printf("No Number\n");
	}
	return 0;
}