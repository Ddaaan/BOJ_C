#include <stdio.h>
#include <stdlib.h>
int max = 0;
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

int func(int pos, int N, int total, int* ans, int* check, int* num) {
	int plus=0;
	if (pos == 3) {
		for (int i = 0; i < 3; i++)plus += num[ans[i]];
		if (max < plus && plus <= total) max = plus;
		return;
	}
	for (int i = 0; i < N; i++) {
		if (!check[i]) {
			check[i] = 1;
			ans[pos] = i;
			func(pos + 1, N, total, ans, check, num);
			check[i] = 0;
			ans[pos] = 0;
		}
	}
	return max;
}

int main() {
	int N, M, total;
	int * check, * num;
	scanf("%d %d", &N, &total);
	int ans[3] = { 0, };
	check = (int*)calloc(sizeof(int), N);
	num = (int*)calloc(sizeof(int), N);
	for (int i = 0; i < N; i++) scanf("%d", &num[i]);
	bubble(num, N);

	printf("%d", func(0, N, total, ans, check, num));
	free(check);
	free(num);
	return 0;
}