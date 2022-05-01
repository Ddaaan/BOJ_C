#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2) return -1;
	else if (num1 > num2)return 1;
	else return 0;
}

int main() {
	int* arr_B;
	int N, count = 1, k;
	scanf("%d %d", &N, &k);
	
	arr_B = malloc(sizeof(int) * ((N * N)+1));

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			arr_B[count] = i * j;
			count++;
		}
	}
	qsort(arr_B, N * N + 1, sizeof(int), compare);

	printf("%d", arr_B[k]);
	free(arr_B);
	return 0;
}