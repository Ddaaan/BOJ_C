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

void func(int pos, int N, int M, int* ans, int* num) {
	int temp = 0;
	if (pos == M) {
		for (int i = 0; i < M; i++) printf("%d ", num[ans[i]]);
		printf("\n");
		return;
	}
	for (int i = 0; i < N; i++) {
		if (temp != num[i]) {
			ans[pos] = i;
			func(pos + 1, N, M, ans, num);
			ans[pos] = 0;
			temp = num[i];
		}
	}
}

int main() {
	int N, M;
	int* ans, * num;
	scanf("%d %d", &N, &M);
	ans = (int*)calloc(sizeof(int), M);
	num = (int*)calloc(sizeof(int), N);
	for (int i = 0; i < N; i++)scanf("%d", &num[i]);
	bubble(num, N);

	func(0, N, M, ans, num);
	free(ans);
	free(num);
	return 0;
}