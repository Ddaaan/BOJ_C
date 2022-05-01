#include <stdio.h>
int main() {
	int num, mode = 0, sum = 0, count[100] = { 0, }, max_count = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num);
		sum += num;
		count[(num / 10) - 1]++;
		if (max_count < count[(num / 10) - 1]) {
			max_count = count[(num / 10) - 1];
			mode = num;
		}
	}
	printf("%d %d", sum / 10, mode);
}