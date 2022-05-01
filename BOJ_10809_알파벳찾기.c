#include <stdio.h>
int main(void)
{
	int alp[26];
	char word[100];
	int a;
	scanf("%s", word);

	for (int i = 0; i < 26; i++)
	{
		alp[i] = -1;
	}

	for (int i = 0; i < strlen(word); i++)
	{
		a = (int)word[i] - 97;
		if (alp[a] == -1)
			alp[a] = i;
	}

	for (int i=0; i<26; i++)
		printf("%d ", alp[i]);

	return 0;
}