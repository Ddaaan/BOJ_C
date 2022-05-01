/*#include <stdio.h>
#include <stdlib.h>

int max_arr(int* arr, int len) {
	int max = 0;
	for (int i = 0; i < len; i++) {
		if (arr[i] > max)max = arr[i];
	}
	return max;
}


void func(int pos, int K, int* ans, int* check, int* num) {
	if (pos == 6) {
		for (int i = 0; i < 6; i++) printf("%d ", num[ans[i]]);
		printf("\n");
		return;
	}
	for (int i = max_arr(ans, 6); i < K; i++) {
		if (!check[i]) {
			check[i] = 1;
			ans[pos] = i;
			func(pos + 1, K, ans, check, num);
			check[i] = 0;
			ans[pos] = 0;
		}
	}
}

int main() {
	int K, M, * check, * num;
	int ans[6] = { 0, };
	while (1)
	{
		scanf("%d", &K);
		if (K == 0)break;
		num = (int*)calloc(sizeof(int), K);
		check = (int*)calloc(sizeof(int), K);
		for (int i = 0; i < K; i++)scanf("%d", &num[i]);
		func(0, K, ans, check, num);
		printf("\n");
	}
	
	free(check);
	free(num);
	return 0;
}*/