#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compare(const void* a, const void* b) { //오름차순 정렬
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2) return -1;
	if (num1 > num2) return 1;
	if (num1 == num2) return 0;
}

int main() {
	int N, range, max = 0, count = 0, temp; //ave 산술 / range 범위
	double ave = 0;
	int mode[8001] = { 0, }; //mode 최빈값
	scanf("%d", &N);
	int* num = (int*)malloc(sizeof(int) * N); //n만큼 할당

	for (int i = 0; i < N; i++) { //수 n개 입력받기
		scanf("%d", &num[i]);
		ave += num[i];
	}

	ave /= N;  //산술평균
	if (ave < 0) ave -= 0.5;
	else ave += 0.5;
	printf("%d\n", (int)ave);

	qsort(num, N, sizeof(int), compare); //중앙값
	temp = (N / 2);
	printf("%d\n", num[temp]);

	for (int i = 0; i < N; i++) { //최빈값
		temp = num[i] + 4000; //temp에 num+4000값 저장
		mode[temp] += 1; 
		if (mode[temp] > max) max = mode[temp];
	}
	temp = 0;
	for (int i = 0; i < 8001; i++) {
		if (mode[i]==0) continue;
		if (mode[i] == max) { //max값과 같고
			if (count==0) { //count값이 0이면
				temp = i; //temp에 i값저장
				count += 1; //count +1
			}
			else if (count==1) { //count값이 1이면
				temp = i;
				break;
			}
		}
	}
	printf("%d\n", temp - 4000);

	range = num[N - 1] - num[0]; //범위
	printf("%d\n", abs(range));

	return 0;
}