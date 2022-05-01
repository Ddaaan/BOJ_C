#include <stdio.h>
#include <stdlib.h>
void bubble(int* arr, int len) {
	int temp;
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int max_arr(int* arr, int len) {
	int max = 0;
	for (int i = 0; i < len; i++) {
		if (arr[i] > max)max = arr[i];
	}
		return max;
}


void func(int pos, int N, int M, int *ans, int *check, int *num) {
	if (pos == M) {
		for (int i = 0; i < M; i++) printf("%d ", num[ans[i]]);
		printf("\n");
		return;
	}
	for (int i = max_arr(ans, M); i < N; i++) {
		if (!check[i]) {
			check[i] = 1;
			ans[pos] = i;
			func(pos + 1, N, M, ans, check, num);
			check[i] = 0;
			ans[pos] = 0;
		}
	}
}

int main() {
	int N, M;
	int* ans, * check, * num;
	scanf("%d %d", &N, &M);
	ans = (int*)calloc(sizeof(int), M);
	num = (int*)calloc(sizeof(int), N);
	for (int i = 0; i < N; i++)scanf("%d", &num[i]);
	bubble(num, N);
	check = (int*)calloc(sizeof(int), max_arr(num, N));

	func(0, N, M, ans, check, num);
	free(ans);
	free(check);
	free(num);
	return 0;
}