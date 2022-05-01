#include <stdio.h>
int main(void)
{
	int N;
	char number[100] = { 0, };
	int sum=0;

	scanf("%d", &N);
	scanf("%s", number);


	for (int i = 0; i < N; i++)
		sum += (int)number[i]-48;

	printf("%d",sum);

	return 0;
}