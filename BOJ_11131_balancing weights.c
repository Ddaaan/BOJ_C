#include <stdio.h>
int main() {
	int T, N, W;
	int plus;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		plus = 0;
		for (int j = 0; j < N; j++) {
			scanf("%d", &W);
			plus += W;
		}
		if (plus == 0) printf("Equilibrium\n");
		else if (plus > 0) printf("Right\n");
		else if (plus < 0) printf("Left\n");
	}
	return 0;
}