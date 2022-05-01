#include <stdio.h>

int main(void)
{
	int N, student, count;
	float average, percent;
	int grade[1000] = { 0, };
	int sum = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		count = 0, sum = 0;

		scanf("%d", &student);
		for (int j = 0; j < student; j++)
		{
			scanf("%d", &grade[j]);
			sum += grade[j];
		}

		average = (float)sum / (float)student;

		for (int k = 0; k < student; k++)
		{
			if (average < grade[k])
				count++;
		}
		percent = (float)count*100 / student;
		printf("%.3f%%\n", percent);

	}
	return 0;
}