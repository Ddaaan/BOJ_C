#include <stdio.h>
int main(void)
{
	int a, b, c;

	while (1)
	{
		scanf_s("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;

		if (a * a + b * b == c * c || a * a + c * c == b * b || a * a == b * b + c * c)
			printf("right\n");
		else
			printf("wrong\n");
	}

	return 0;
}