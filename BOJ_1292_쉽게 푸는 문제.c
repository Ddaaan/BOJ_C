#include <stdio.h>
#include <stdlib.h>
int main() {
	int A, B, k, j, sum=0;
	scanf("%d %d", &A, &B); 
	for (int i = 1; sum < B; i++) sum += i;
	int* question = (int*)calloc(sum, sizeof(int));

	k = 0;
	for (int i = 1; k < sum; i++) {
		j = 1;
		while (j<=i)
		{
			question[k] = i;
			k++;
			j++;
		}
	}
	sum = 0;
	for (int i = A-1; i < B; i++) sum += question[i];
	printf("%d", sum);
	free(question);
	return 0;
}