#include <stdio.h>
#include <math.h>
int main() {
	long long num, q;
	scanf("%lld", num);
	q = sqrt(num);
	if (q * q == num)
		printf("%lld", q);
	else
		printf("%lld", q + 1);
	return 0;
}