#include <stdio.h>
int main(void)
{
	int up, down, meter;
	int day;
	int total;
	scanf("%d %d %d", &up, &down, &meter);

	total = up - down;

	if (up >= meter)
	{
		printf("1");
		return 0;
	}

	day = (meter - up)/total;
	if ((meter - up) % total == 0)
		printf("%d", day + 1);

	else
		printf("%d", day + 2);

	return 0;
}