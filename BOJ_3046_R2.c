#include <stdio.h>
int main(void)
{
	int R1, s;
	int R2;

	scanf_s("%d %d", &R1, &s);
	R2 = 2 * s - R1;
	printf("%d", R2);
}