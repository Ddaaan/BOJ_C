#include <stdio.h>
int main(void)
{
	int N;
	int answer[100];
	int point = 0;
	int right = 0;

	scanf("%d", &N);

	for (int count = 0; count < N; count++)
	{
		scanf("%d", &answer[count]);
	}

	for (int count = 0; count < N; count++)
	{
		if (answer[count] == 0)
		{
			point = point;
			right = 0;
		}
			
		else
		{
			point = point + 1 + right;
			right ++;
		}

	}
	
	printf("%d ", point);
	

	return 0;

}