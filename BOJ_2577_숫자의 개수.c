#include <stdio.h>

int main(void)
{
	int A, B, C;
	int mul;
	char arr[10];
	int count[10] = { 0, };

	scanf("%d %d %d", &A, &B, &C);

	mul = A * B * C;

	sprintf(arr, "%d", mul);


	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] %10 == 0)
			count[2]++;
		else if (arr[i] % 10 == 1)
			count[3]++;
		else if (arr[i] % 10 == 2)
			count[4]++;
		else if (arr[i] % 10 == 3)
			count[5]++;
		else if (arr[i] % 10 == 4)
			count[6]++;
		else if (arr[i] % 10 == 5)
			count[7]++;
		else if (arr[i] % 10 == 6)
			count[8]++;
		else if (arr[i] % 10 == 7)
			count[9]++;
		else if (arr[i] % 10 == 8)
			count[0]++;
		else
			count[1]++;

	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", count[i]);
	}

	return 0;
}