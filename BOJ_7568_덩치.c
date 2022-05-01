#include <stdio.h>
#include <stdlib.h>
int main() {
	int* weight, * height, * ans;
	int N, k = 0, count = 1;
	scanf("%d", &N);
	weight = malloc(sizeof(int) * N);
	height = malloc(sizeof(int) * N);
	ans = malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)	scanf("%d %d", &weight[i], &height[i]);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (weight[k] < weight[j]) {
				if (height[k] < height[j]) {
					count++;
				}
			}
		}
		ans[k] = count;
		k++;
		count = 1;
	}
	
	for (int i = 0; i < N; i++) printf("%d ", ans[i]);
	return 0;
}