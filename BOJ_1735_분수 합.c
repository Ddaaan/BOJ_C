#include <stdio.h>
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
	int A[2] = { 0, }; //분자 A
	int B[2] = { 0, }; // 분모 B
	int num, deno, temp;
	for (int i=0; i<2; i++) {
		scanf("%d %d", &A[i], &B[i]);
	}
	num = (A[0] * B[1]) + A[1] * B[0];
	deno = B[0] * B[1];
	temp = gcd(num, deno);
	printf("%d %d", num / temp, deno / temp);
	return 0;
}