#include <stdio.h>
int main() {
	int T, n, m;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &n, &m);
		printf("%d\n", 1 + m * (n - m));
	}
	return 0;
}