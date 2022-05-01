#include <stdio.h>
int main() {
	int apt [15][15] = { 0, };
	int T, floor, room;
	scanf("%d", &T);

	for (int i = 0; i < 15; i++)
		apt[0][i] = i; //걍 0층 0호는 0명이니까 없는셈 치고 반복 돌리면 됨(0호 자체가 없음)

	for (int i = 1; i < 15; i++) { //i는 층수 0층에는 다 넣어져있으니까 1층부터 반복
		for (int j = 1; j < 15; j++) { //j는 호수 증가 (0호는 없는셈 치고 1호부터 반복 14까지)
			apt[i][j] = apt[i - 1][j] + apt[i][j - 1];
		}
	}
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &floor, &room);
		printf("%d\n", apt[floor][room]);
	}
	return 0;
}