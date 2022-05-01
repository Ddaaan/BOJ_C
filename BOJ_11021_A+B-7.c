#include <stdio.h>
int main() {
	int T, count = 1, A, B;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", count, A, B, A + B);
		count++;
	}
	return 0;
}