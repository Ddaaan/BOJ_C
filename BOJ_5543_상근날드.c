#include <stdio.h>
int main(void)
{
	int arr[3];
	int arr1[2];
	int Min = 2001;
	int Min1 = 2001;
	int total;

	for (int count = 0; count < 3; count++)
	{
		scanf("%d", &arr[count]);
		if (arr[count] < Min)
			Min = arr[count];
	}

	for (int count = 0; count < 2; count++)
	{
		scanf("%d", &arr1[count]);
		if (arr1[count] < Min1)
			Min1 = arr1[count];
	}

	total = (Min + Min1) - 50;

	printf("%d", total);

	return 0;
		
}