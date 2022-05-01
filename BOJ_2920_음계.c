#include <stdio.h>
int main(void)
{
	int note[8];
	int asc = 0;
	int des = 0;
	int mix = 0;

	for (int i = 0; i < 8; i++)
		scanf_s("%d", &note[i]);

	for (int j = 0; j < 8; j++)
	{
		if (note[j] == j + 1)
			asc++;

		else if (note[j] == 8 - j)
			des++;

		else
			mix++;
	}

	if (asc == 8)
		printf("ascending");
	else if (des == 8)
		printf("descending");
	else
		printf("mixed");

	return 0;
}