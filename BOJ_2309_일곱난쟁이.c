#include <stdio.h>
int count = 0;
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

int max_arr(int* arr, int len) {
	int max = 0;
	for (int i = 0; i < len; i++) {
		if (arr[i] > max)max = arr[i];
	}
		return max;
}

void func(int pos, int* ans, int* check, int* num) {
	int plus = 0;
	
	if (pos == 7) {
		for (int i = 0; i < 7; i++) plus += num[ans[i]];
		if (plus == 100) {
			if (count == 0) {
				for (int i = 0; i < 7; i++)printf("%d\n", num[ans[i]]);
				count = 1;
			}
		}
		return;
	}
	for (int i = max_arr(ans, 7); i < 9; i++) {
		if (!check[i]) {
			check[i] = 1;
			ans[pos] = i;
			func(pos + 1, ans, check, num);
			check[i] = 0;
			ans[pos] = 0;
		}
	}
}

int main() {
	int ans[7] = { 0, };
	int check[9] = { 0, };
	int num[9] = { 0, };
	for (int i = 0; i < 9; i++) scanf("%d", &num[i]);
	bubble(num, 9);
	func(0, ans, check, num);

	return 0;
}