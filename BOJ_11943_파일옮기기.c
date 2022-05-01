#include <stdio.h>
int main(void)
{
	int Apple1, Orange1, Apple2, Orange2;
	int count1 = 0;
	int count2 = 0;

	scanf_s("%d %d", &Apple1, &Orange1);
	scanf_s("%d %d", &Apple2, &Orange2);

	count1 = count1 + Apple1 + Orange2;
	count2 = count2 + Apple2 + Orange1;

	if (count1 > count2)
		printf("%d", count2);
	else
		printf("%d", count1);

	return 0;
}