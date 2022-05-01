#include <stdio.h>
#include <string.h>
int main(void)
{
	int N;
	int time = 0;
	char input[14];

	scanf("%s", input);

	for (int i = 0; i < strlen(input); i++)
	{
		if (input[i] == 'A' || input[i] == 'B' || input[i] == 'C')
			time += 3;
		else if (input[i] == 'D' || input[i] == 'E' || input[i] == 'F')
			time += 4;
		else if (input[i] == 'G' || input[i] == 'H' || input[i] == 'I')
			time += 5;
		else if (input[i] == 'J' || input[i] == 'K' || input[i] == 'L')
			time += 6;
		else if (input[i] == 'M' || input[i] == 'N' || input[i] == 'O')
			time += 7;
		else if (input[i] == 'P' || input[i] == 'Q' || input[i] == 'R' || input[i] == 'S')
			time += 8;
		else if (input[i] == 'T' || input[i] == 'U' || input[i] == 'V')
			time += 9;
		else
			time += 10;
	}
	printf("%d", time);

	return 0;
}