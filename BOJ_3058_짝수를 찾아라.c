#include <stdio.h>
int main() {
	int T, num, sum = 0, min = 101;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		sum = 0;
		min = 101;
		for (int j = 0; j < 7; j++) {
			scanf("%d", &num);
			if (num % 2 == 0) {
				sum += num;
				if (min > num) min = num;
			}
		}
		printf("%d %d\n", sum, min);
	}
	return 0;
}