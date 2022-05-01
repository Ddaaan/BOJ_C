#include<stdio.h>
int main() {
	int tree[5], temp;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &tree[i]);
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (tree[j] > tree[j + 1]) {
				temp = tree[j];
				tree[j] = tree[j + 1];
				tree[j + 1] = temp;
				for (int k = 0; k < 5; k++) {
					printf("%d ", tree[k]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}