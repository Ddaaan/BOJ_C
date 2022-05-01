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
	int N, temp, plus_locate, count = 1;
	scanf("%d", &N);
	int* locate = malloc(sizeof(int) * N); //위치 배열
	int* min = malloc(sizeof(int) * N - 1); //각 가로수 사이 거리 배열
	for (int i = 0; i < N; i++) {
		scanf("%d", &locate[i]); //위치 입력
	}
	for (int i = 0; i < N - 1; i++) {
		min[i] = locate[i + 1] - locate[i]; //각각의 가로수 사이 거리 구하기
	}
	temp = min[0]; 
	for (int i = 1; i < N-1; i++) {
		temp = gcd(temp, min[i]); //사이 거리들의 최대공약수 구하기, temp에 0번째 배열이 있으니까 1부터 돌리기
	}

	plus_locate = locate[0]; //plus변수에 처음 가로수 위치 지겅해주기
	while (plus_locate!=locate[N-1]) //plus변수가 마지막 가로수 위치와 다를때 반복
	{
		plus_locate += temp; //처음 가로수 위치에서 gcd계속 더해주기
		count++; //한 번 더할때마다 가로수 하나가 추가된다는 뜻이기 때문에 count값 올려주기
	}
	printf("%d", count - N); //count값에 원래 있던 가로수들도 포함되어있으니까 N개만큼 제외
	return 0;
}