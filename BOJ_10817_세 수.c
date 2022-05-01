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
	int num[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d", &num[i]);
	}
	bubble(num, 3);
	printf("%d", num[1]);
	return 0;
}