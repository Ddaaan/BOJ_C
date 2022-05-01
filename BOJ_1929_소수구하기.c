#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void eratos(int* arr, int m, int n) { //0-> true 1->false
    arr[0] = 1; arr[1] = 1;
	for (int i = 2; i <= sqrt(n); i++) {
		if (arr[i] == 0) {
			for (int j = i + i; j < n+1; j += i) arr[j] = 1;
		}
	}
}

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	int* num = (int*)calloc(n + 1, sizeof(int)); //num 0으로 초기화
	eratos(num, m, n);
	for (int i = m; i < n + 1; i++)
		if (num[i] == 0)
			printf("%d\n", i);
	
	free(num);
	return 0;
}