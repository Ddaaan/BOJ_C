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

void recur(int pos, int N, int M, int* ans, int* check, int* num) {
	int temp=0;
	if (pos == M) {
		for (int i = 0; i < M; i++)printf("%d ", num[ans[i]]);
		printf("\n");
		return;
	}
	for (int i = 0; i < N; i++) {
		if (!check[i]&&temp!=num[i]) {
			check[i] = 1;
			ans[pos] = i;
			temp = num[i];
			recur(pos + 1, N, M, ans, check, num);
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
	check = (int*)calloc(sizeof(int), N);
	num = (int*)calloc(sizeof(int), N);
	for (int i = 0; i < N; i++) scanf("%d", &num[i]);
	bubble(num, N);

	recur(0, N, M, ans, check, num);
	free(ans);
	free(check);
	return 0;
}