#include <stdio.h>
int main() {
	int area[100][100] = { 0, };
	int N, x, y, count = 0;
	scanf("%d", &N);
	for (int k = 0; k < N; k++) {
		scanf("%d %d", &x, &y);
		for (int i = x; i < x + 10; i++) {
			for (int j = y; j < y + 10; j++) if (!area[i][j]) area[i][j] = 1;
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) if (area[i][j]) count += 1;
	}
	printf("%d\n", count);
	return 0;
}