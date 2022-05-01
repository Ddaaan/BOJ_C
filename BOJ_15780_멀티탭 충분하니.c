#include <stdio.h>
int main() {
	int N, k;
	int A[100] = { 0, };
	int total = 0;
	scanf("%d %d", &N, &k);

	for (int i = 0; i < k; i++) {
		scanf("%d", &A[i]);
		if (A[i] % 2 == 0) total += A[i] / 2;
		else total += A[i] / 2 + 1;
	}
	if (N <= total) printf("YES");
	else printf("NO");
	return 0;
}