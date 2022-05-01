#include <stdio.h>
#include <stdlib.h>
void recur(int pos, int N, int M, int *ans) { //pos�� 0
	if (pos == M) {
		for (int i = 0; i < M; i++)printf("%d ", ans[i]);
		printf("\n");
		return;
	}
	for (int i = 0; i < N; i++) {
			ans[pos] = i + 1;
			recur(pos + 1, N, M, ans);
			ans[pos] = 0;
	}
}

int main() {
	int N, M;
	int* ans, * check;
	scanf("%d %d", &N, &M);
	ans = (int*)calloc(sizeof(int), M);

	recur(0, N, M, ans);
	free(ans);
	return 0;
}