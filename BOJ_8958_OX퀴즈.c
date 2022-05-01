#include <stdio.h>
#include <string.h>
int main(void)
{
	int N;
	char answer[80];
	int count = 1;
	int total = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		total = 0;
		count = 1;
		scanf("%s", answer);
		
		for (int i= 0; i < strlen(answer); i++)
		{
			if (answer[i] == 'O')
			{
				total += count;
				count++;
			}
			if (answer[i]=='X')
				count = 1;
		}
		printf("%d\n", total);
	}

	return 0;
}