#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N;
	int profit, adv_profit, adv_cost;

	scanf_s("%d", &N);

	int* adv = malloc(sizeof(int) * N+1);
	int* Nadv = malloc(sizeof(int) * N+1);
	int* cost = malloc(sizeof(int) * N+1);

	for (int count = 0; count < N; count++)
	{
		scanf_s("%d %d %d", &profit, &adv_profit, &adv_cost);

		adv[count] = adv_profit;
		Nadv[count] = profit;
		cost[count] = adv_cost;

	}

	for (int count = 0; count < N; count++)
	{
		if (Nadv[count] < adv[count] - cost[count])
			printf("advertise");

		else if (Nadv[count] == adv[count] - cost[count])
			printf("does not matter");

		else
			printf("do not advertise");

		printf("\n");
	}

	return 0;
}