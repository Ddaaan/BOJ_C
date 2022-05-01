#include <stdio.h>
int main(void)
{
	int S1, S2;
	int count = 0;
	int count2 = 0;
	int sample, system, answer,answer2;

	scanf("%d %d", &S1, &S2);

	for (int i = 0; i < S1; i++)
	{
		scanf("%d %d", &sample, &answer);
		if (sample == answer)
			count++;
	}
	
	for (int i = 0; i < S2; i++)
	{
		scanf("%d %d", &system, &answer2);
		if (system == answer2)
			count2++;
	}

	if (count == S1 && count2 == S2)
		printf("Accepted");
	else if (count == S1)
		printf("Why Wrong!!!");
	else
		printf("Wrong Answer");

	return 0;
}