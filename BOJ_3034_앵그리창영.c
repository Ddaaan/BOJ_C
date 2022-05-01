#include <stdio.h>
#include <math.h>

int main(void)
{
	int N, W, H;
	double dia;
	int L[50];

	scanf_s("%d %d %d", &N, &W, &H);
	dia = sqrt(pow(W, 2.0) + pow(H, 2.0));

	for (int count = 0; count < N; count++)
	{
		scanf_s("%d", &L[count]);
	}

	for (int count1 = 0; count1 < N; count1++)
	{
		if (L[count1] <= W || L[count1] <= H || L[count1] <= dia)
			printf("DA \n");

		else
			printf("NE \n");
	}


	return 0;
}