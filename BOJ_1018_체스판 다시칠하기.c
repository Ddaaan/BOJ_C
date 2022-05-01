#include <stdio.h>
int func(int a, int b) {
	if (a < b) return a;
	else return b;
}
int main() {
	char board[51][51];
	int N, M, min = 100;
	int count_Black = 0, count_white = 0;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++)
		scanf("%s", &board[i]);
	
	for (int i = 0; i < N - 7; i++) {
		for (int j = 0; j < M - 7; j++) {
			count_Black = 0, count_white = 0;
			for (int x = i; x < i + 8; x++) {
				for (int y = j; y < j + 8; y++) {
					if ((x + y) % 2 == 0) {
						if (board[x][y] == 'W') count_Black++;
						else count_white++;
					}
					else {
						if (board[x][y] == 'W') count_white++;
						else count_Black++;
					}
				}
			}
			min = func(min, count_white);
			min = func(min, count_Black);
		}
	}
	printf("%d", min);
	return 0;
}