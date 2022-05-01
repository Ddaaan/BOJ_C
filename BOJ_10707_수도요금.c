#include <stdio.h>
int main(void){
	int X_fee, Y_basic, Y_max, Y_plus, use;
	int X, Y = 0;

	scanf("%d", &X_fee); // X사의 1리터당 요금
	scanf("%d", &Y_basic); // Y사의 기본요금
	scanf("%d", &Y_max); // Y사의 사용량의 상한
	scanf("%d", &Y_plus); // Y사의 1리터 당 추가요금
	scanf("%d", &use); // JOI군의 집에서 사용하는 한 달간 수도의 양

	X = X_fee * use;
	if (use <= Y_max) Y = Y_basic;
	else	Y = Y_basic + (use - Y_max) * Y_plus;

	if (X < Y) printf("%d", X);
	else printf("%d", Y);

	return 0;
}