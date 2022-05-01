#include <stdio.h>
#include <string.h>

int main(void)
{
	int A, B;
	char re_A[4] = { 0, };
	char re_B[4] = { 0, };
	char num[4];
	char num2[4];

	scanf("%d %d", &A, &B);

	sprintf(num, "%d", A);
	sprintf(num2, "%d", B);

	for (int i = 2; i >= 0; i--)
		re_A[2 - i] = num[i];

	for (int i = 2; i >= 0; i--)
		re_B[2 - i] = num2[i];

	A = atoi(re_A);
	B = atoi(re_B);

	if (A > B)
		printf("%d", A);
	else
		printf("%d", B);


	return 0;

}