#include <stdio.h>
#include <string.h>
int main() {
	char num[6] = { 0, };
	int count = 0;
	int length;

	while (1)
	{
		count = 0; //초기화를 안해주면 계속 쌓임.. 꼭 초기화 해주기

		scanf("%s", num);
		length = strlen(num); //num의 길이를 length에 저장

		if (num[0] == '0') break;
		
		for (int i = 0; i < length / 2; i++) { //length의 절반까지 for문 돌리기
			if (num[i] == num[length - i-1]) //i랑 length-i랑 비교하면 안되지 length-i-1이랑 비교해야지
				count++;										// 배열의 끝이 length-1이잖아..
		}
		if (length == 1) 
			printf("yes\n");
		else if (count == length / 2)
			printf("yes\n");
		else if (count != length / 2)
			printf("no\n");
	}
	return 0;
}