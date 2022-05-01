#include <stdio.h>
#include <stdlib.h>
void recur(int pos, int N, int M, int* ans, int* check) { //pos는 0
	int count = 0;
	if (pos == M) {
		for (int j = 0; j < M-1; j++) {
			if (ans[j] < ans[j + 1]) count++;
		}
		if (count == M - 1) {
			for (int i = 0; i < M; i++)printf("%d ", ans[i]);
			printf("\n");
		}
		return;
	}
	for (int i = 0; i < N; i++) {
		if (!check[i]) {
			check[i] = 1;
			ans[pos] = i + 1;
			recur(pos + 1, N, M, ans, check);
			check[i] = 0;
			ans[pos] = 0;
		}
	}
}

int main() {
	int N, M;
	int* ans, * check;
	scanf("%d %d", &N, &M);
	ans = (int*)calloc(sizeof(int), M);
	check = (int*)calloc(sizeof(int), N);

	recur(0, N, M, ans, check);
	free(ans);
	free(check);
	return 0;
}