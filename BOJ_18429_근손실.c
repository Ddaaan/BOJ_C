#include <stdio.h>
#include <stdlib.h>
int func(int pos, int N, int* ans, int* kit, int decrease, int* check) {
	static int count = 0;
	int weight = 500;
	int flag = 1; //0�̸� false, 1�̸� true
	
	if (pos == N) {
		for (int i = 0; i < N; i++) {
			weight += ans[i];
			weight -= decrease;
			if (weight < 500) flag = 0;
		}
		if (flag == 1) count++;
		flag = 1, weight = 500;
		return;
	}
	for (int i = 0; i < N; i++) {
		if (!check[i]) {
			check[i] = 1;
			ans[pos] = kit[i];
			func(pos + 1, N, ans, kit, decrease, check);	
			check[i] = 0;
			ans[pos] = 0;
		}
	}
	return count;
}

int main() {
	int N, *kit, decrease, *ans, *check;
	scanf("%d %d", &N, &decrease);
	kit = calloc(sizeof(int), N);
	ans = calloc(sizeof(int), N);
	check = calloc(sizeof(int), N);

	for (int i = 0; i < N; i++)scanf("%d", &kit[i]);
	printf("%d", func(0, N, ans, kit, decrease, check));
	free(kit);
	free(ans);
	free(check);
	return 0;
}