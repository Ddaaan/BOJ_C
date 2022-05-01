#include <stdio.h>

int main(void)
{
	int A, I;
	int N;

	scanf_s("%d %d", &A, &I);
	N = (A * (I-1))+1;
	printf("%d", N);

	return 0;
}