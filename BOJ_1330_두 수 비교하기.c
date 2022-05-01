#include <stdio.h>
int main(void)
{
	int num[2];

	for (int count = 0; count < 2; count++)
		scanf("%d", &num[count]);


	if (num[0] > num[1])
		printf(">");
	else if (num[0] < num[1])
		printf("<");
	else
		printf("==");

	return 0;
}