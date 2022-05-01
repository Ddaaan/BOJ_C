#include <stdio.h>
#include <math.h>
int main() {
	int M, N, flag;
	int plus = 0;
	int min = 10000;
	scanf("%d %d", &M, &N);

	for (int i = M; i <= N; i++) { //M부터 N까지 for문 돌리기
		flag = 0;
		if (i == 1) continue; //1은 소수가 아님
		for (int j = 2; j <= sqrt(i); j++) //2부터 i의 제곱근까지 j에 집어넣기  -> 여기 for문 안에 if(flag==0)문을 집어넣으면 안됨...
			if (i % j == 0) flag = 1; //만약 i가 j로 나눠지면 소수가 아님 flag->1

		if (flag == 0) { //for문을 다 돌고 나왔을 때 만약 flag가 0이면 i가 소수니까(i가 j로 나누어지지 않았다는 말)
			plus += i; //plus에 i를 더해
			if (i < min) min = i;//그리고 i가 min보다 작으면 최솟값
		}
	}
	if (plus == 0) printf("-1");
	else printf("%d\n%d", plus, min);

	return 0;
}