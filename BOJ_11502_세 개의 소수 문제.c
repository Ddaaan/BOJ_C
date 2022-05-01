#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static int count1;

int eratos(int* flag, int n, int* prime) { //0-> true 1->false //소수찾기
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

int max_arr(int* arr, int len) {
	int max = 0;
	for (int i = 0; i < len; i++) {
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

void func(int pos, int* ans, int* check, int* prime, int num, int* len) {
	int plus = 0;
	if (pos == 3 ) {
		for (int i = 0; i < 3; i++)plus += prime[ans[i]];
		if (plus == num && count1 == 0) {
			for (int i = 0; i < 3; i++) printf("%d ", prime[ans[i]]);
			printf("\n");
			plus = 0;	
			count1++;
		}
		return;
	}
	for (int i = 0; i < len; i++) {
			ans[pos] = i;
			func(pos + 1, ans, check, prime, num, len);
			ans[pos] = 0;
			if (count1 != 0)	break;
	}
}

int main() {
	int n,T; //n은 숫자, T는 테스트케이스
	int len; //count는 소수의 개수 (소수 배열의 길이)
	scanf("%d", &T);
	int ans[3] = { 0, };
	for (int i = 0; i < T; i++) {
		scanf("%d", &n);
		int* flag = (int*)calloc(sizeof(int), n + 1); //수가 true인지 flase인지 판별하는 배열
		int* prime = (int*)malloc(sizeof(int) * n);//n이하의 소수 저장하는 배열
		len=eratos(flag, n, prime); //prime에 n이하의 소수 저장되어있음
		int* check = (int*)calloc(sizeof(int), len);
		func(0, ans, check, prime, n, len);
		if (count1 == 0) printf("0\n");
		count1 = 0;
	}
	return 0;
}