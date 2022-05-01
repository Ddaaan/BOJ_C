#include <stdio.h>
#include <math.h>
int main() {
	int N, total;
	int R1 = 0; //변수는 숫자로 시작할 수 없음!
	int R2 = 0;
	int coin[10001] = { 0, };
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &coin[i]);
		R1 += abs(coin[i]);
	}
	for (int i = 0; i < N; i++) {
		scanf("%d", &coin[i]);
		R2 += abs(coin[i]);
	}
	total = R1 + R2;
	printf("%d", total);
	return 0;
}