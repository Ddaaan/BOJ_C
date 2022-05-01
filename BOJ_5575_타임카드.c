#include <stdio.h>
int main(void){
	int h1, m1, s1, h2, m2, s2;
	int T1, T2, total;

	for (int i = 0; i < 3; i++) {
		scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);
		T1 = 3600 * h1 + 60 * m1 + s1;
		T2 = 3600 * h2 + 60 * m2 + s2;
		total = T2 - T1;
		printf("%d %d %d \n", total / 3600, total % 3600 / 60, total % 3600 % 60);
	}
	return 0;
}