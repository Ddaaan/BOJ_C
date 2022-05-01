#include <stdio.h>
#include <stdlib.h>
int gcd(int x, int y) {
	int temp;
	if (x < y) {
		temp = x;
		x = y;
		y = temp;
	}
	while (y != 0)
	{
		temp = x;
		x = y;
		y = temp % y;
	}
	return x;
}

int main() {
	int apple, banana, gcd_n, count=0;
	scanf("%d %d", &apple,&banana);
	gcd_n = gcd(apple, banana);
	int* arr = (int*)calloc(gcd_n, sizeof(int));
	
	for (int i = 1; i <= gcd_n; i++) {
		if (gcd_n % i == 0) {
			arr[count] = i;
			count++;
		}
	}
	for (int i = 0; i < count; i++) {
		printf("%d %d %d\n", arr[i], apple / arr[i], banana / arr[i]);
	}
	return 0;
}