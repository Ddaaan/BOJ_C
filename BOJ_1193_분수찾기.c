#include <stdio.h>

int main(void)
{
	int rest;
	int count = 0;
	int sub = 1;
	int A, B; //A=분모 B=분자
	scanf("%d", &rest);

	if (rest == 1)
	{
		printf("1/1");
		return 0;
	}

	while (1)
	{
		rest -= sub;
		sub++;
		
		if (rest <= sub)
			break;
	}

	if (sub % 2 == 0)
	{
		A = sub - rest + 1;
		B = rest;
	}
	else
	{
		B = sub - rest + 1;
		A = rest;
		
	}
	printf("%d/%d", B, A);

	return 0;
}