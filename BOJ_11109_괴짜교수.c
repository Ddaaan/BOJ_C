#include <stdio.h>
int main(void)
{
	int T;
	int d, n, s, p;
	int par, ser;
	int Par[1000];
	int Ser[1000];

	scanf_s("%d", &T);

	for (int count = 0; count < T; count++)
	{
		scanf_s("%d %d %d %d", &d, &n, &s, &p);

		par = (n * p) + d;
		ser = n * s;

		Par[count] = par;
		Ser[count] = ser;
	}

	for (int Count = 0; Count < T; Count++)
	{
		if (Par[Count] > Ser[Count])
			printf("do not parallelize");
		else if (Par[Count] == Ser[Count])
			printf("does not matter");
		else
			printf("parallelize");

		printf("\n");
	}

	return 0;
}