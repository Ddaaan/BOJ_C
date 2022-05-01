#include <stdio.h>
int main() {
	int L, W, red, brown,temp;
	scanf("%d %d", &red, &brown);
	temp = red / 2 + 2;
	for (W = 0; W < temp; W++) {
		L = temp - W;
		if ((L - 2) * (W - 2) == brown) {
			printf("%d %d", L, W);
			break;
		}
	}
	return 0;
}