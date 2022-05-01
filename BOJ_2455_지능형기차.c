#include <stdio.h>

int main(void)
{
	int people = 0;
	int max = 0;
	int in, out;


	for (int count = 1; count < 5; count++)
	{
		scanf("%d %d", &out, &in);
		people = people + in - out;


		if (people > max)
			max=people;

		else
			people = people;

	}
	printf("%d", max);


	return 0;
}