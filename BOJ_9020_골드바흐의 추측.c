#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int eratos(int* flag, int n, int* prime) {
	int count = 0;
	flag[0] = 1; flag[1] = 1;
	for (int i = 2; i <= n; i++) {
		if (flag[i] == 0) {
			for (int j = i + i; j < n + 1; j += i) flag[j] = 1;
		}
	}
	for (int i = 2; i < n + 1; i++)
		if (flag[i] == 0) {
			prime[count] = i;
			count++;
		}
	return count;
}

int main() {
	int T, num, * prime, * flag, len;
	int sub, min = 10e8, a, b;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		min = 10e8;
		scanf("%d", &num);
		flag = (int*)calloc(sizeof(int), num + 1);
		prime = (int*)calloc(sizeof(int), num);
		len = eratos(flag, num, prime);

		for (int k = 0; k < len; k++) {
			for (int j = 0; j < len; j++) {
				if (prime[k] + prime[j] == num) {
					sub = abs(prime[k] - prime[j]);
					if (sub < min) {
						min = sub;
						a = prime[k];
						b = prime[j];
					}
				}
			}
		}
		if (a < b) printf("%d %d\n", a, b);
		else printf("%d %d\n", b, a);
	}
    free(flag);
    free(prime);
	return 0;
}