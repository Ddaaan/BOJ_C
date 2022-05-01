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
	int grade_sci[4],grade_soc[2], max = 0;
	for (int i = 0; i < 4; i++)scanf("%d", &grade_sci[i]);
	for (int i = 0; i < 2; i++)scanf("%d", &grade_soc[i]);
	bubble(grade_sci, 4);
	bubble(grade_soc, 2);
	for (int i = 1; i < 4; i++) max += grade_sci[i];
	max += grade_soc[1];
	printf("%d", max);
	return 0;
}