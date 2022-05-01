#include <stdio.h>
int main() {
	int Q1 = 0, Q2 = 0, Q3 = 0, Q4 = 0, axis = 0;
	int x, y, T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &x, &y);

		if (x == 0 || y == 0) axis += 1;
		else if (x > 0) {
			if (y > 0) Q1 += 1;
			else Q4 += 1;
		}
		else{
			if (y > 0) Q2 += 1;
			else Q3 += 1;
		}
	}
	printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d\n", Q1, Q2, Q3, Q4, axis);
	return 0;
}