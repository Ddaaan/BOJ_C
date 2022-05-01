#include <stdio.h>
int main(void)
{
	int num;
	int arr[10];
	int rest = 0;
	
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		arr[i] = num % 42;
	}

	for (int i = 0; i < 10; i++)
	{
		int count = 0;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
				count++;
		}
		if (count == 0)
			rest++;
	}

	printf("%d", rest);

	return 0;
}