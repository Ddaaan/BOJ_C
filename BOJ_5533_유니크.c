#include <stdio.h>
int main(void)
{
	int T, time, n, s, p;
	int par, ser;
	scanf("%d", &T);

	for (int count = 0; count < T; count++){
		scanf("%d %d %d %d", &time, &n, &s, &p);
		par = (n * p) + time;
		ser = n * s;

		if (par > ser) printf("do not parallelize");
		else if (par == ser) printf("does not matter");
		else printf("parallelize");
		printf("\n");
	}
	return 0;
}