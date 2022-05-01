#include <stdio.h>
int main(void)
{
	int day, number;
	int count = 0;

	scanf_s("%d", &day);
	
	for (int N = 0; N < 5; N++)
	{
		scanf_s("%d", &number);
		if (day == number)
			count += 1;
	}
	printf("%d", count);

	return 0;
		
}