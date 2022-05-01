#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2) return -1;
	else if (num1 > num2) return 1;
	else return 0;
}

int main() {
	int N, * min, total = 0, count = 0, sum = 0;
	scanf("%d", &N);
	min = malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &min[i]);
	}
	qsort(min, N, sizeof(int), compare);

	for (int i=0; i<N;i++){
		sum += min[i];
		total += sum;
	}

	printf("%d", total);
	free(min);
	return 0;
}