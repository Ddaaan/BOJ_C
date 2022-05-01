#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[100];
	int count = 0;
	scanf("%s", word);

	for (int i = 0; i < strlen(word); i++)
	{
		printf("%c", word[i]);
		count++;

		if (count == 10)
		{
			printf("\n");
			count = 0;
		}

	}
	return 0;
}