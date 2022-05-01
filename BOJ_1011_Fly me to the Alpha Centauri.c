#include <stdio.h>
#include <math.h>
int main() {
	int T, start, end, space;
	int temp, count;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &start, &end);
		space = end - start;
		temp = sqrt(space);
		count = temp * 2;
		if (temp * temp == space) count -= 1;
		else if (temp * temp + temp < space) count += 1;
		printf("%d\n", count);
	}
	return 0;
}