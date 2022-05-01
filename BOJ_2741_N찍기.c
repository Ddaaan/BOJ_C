#include <stdio.h>

int main(void)
{
	int n;
	int a = 1;

	scanf_s("%d", &n);
	while (a <= n)
	{
		printf("%d \n", a);
		a++;
	}
	
	return 0;
}