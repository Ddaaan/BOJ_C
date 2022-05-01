#include <stdio.h>
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

int main() {
	int W_score[10];
	int K_score[10];
	int W_total=0, K_total=0;
	for (int i = 0; i < 10; i++) scanf("%d", &W_score[i]);
	for (int i = 0; i < 10; i++) scanf("%d", &K_score[i]);
	bubble(W_score, 10);
	bubble(K_score, 10);
	for (int i = 9; i > 6; i--) W_total += W_score[i];
	for (int i = 9; i > 6; i--) K_total += K_score[i];

	printf("%d %d", W_total, K_total);
	return 0;
}