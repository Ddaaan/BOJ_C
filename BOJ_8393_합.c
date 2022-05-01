#include <stdio.h>

int main(void)
{
	int n;
	int a = 1;
	int sum = 0;

	scanf_s("%d", &n);
	while (a <= n)
	{
		sum = sum + a;
		a++;
	}
	printf("%d", sum);
	return 0;
}