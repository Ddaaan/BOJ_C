#include <stdio.h>
#include <string.h>

int reverse(char* arr) //문자열 뒤집는 함수
{
	char temp;
	int length = strlen(arr);
	for (int i = 0; i < length / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[length - i - 1];
		arr[length - i - 1] = temp;
	}
	return;
}

int main()
{
	char A[10002] = { 0, }; char B[10002] = { 0, }; char result[10002] = { 0, };

	int length, sum = 0, plus = 0;
	scanf("%s %s", A, B);

	reverse(A);
	reverse(B);

	if (strlen(A) > strlen(B)) // 계산 돌릴 횟수 -> 두 문자열 중 더 긴 문자열의 길이
		length = strlen(A);
	else length = strlen(B);

	for (int i = 0; i < length; i++) //뒤집은 문자열 순차적으로 계산
	{
		sum = (A[i] - 48) + (B[i] - 48) + plus; //각 문자열의 첫 자리부터 계산 / plus는 받아올림, 48 -> 0의 아스키코드값 빼주기

		if (sum < 0) sum += 48;
		
		if (sum > 9) plus = 1; //sum이 10이 넘으면 받아올림을 위해 plus값에 1을 넣어주기
		
		else plus = 0;

		result[i] = (sum % 10) + 48; //sum의 값에서 10을 나눈 나머지에 48을 더하면 -> 정수의 아스키코드값이 됨 (48~)
	}
	if (plus == 1) result[length] = 49; //만약 for문이 다 돌았을 때 plus에 1이 남아있으면 for문을 도는 횟수보다 한자리가 더 초과됐다는 말, 마지막 자리에 1의 아스키코드인 49를 넣어줌
	reverse(result);

	printf("%s\n", result);
	return 0;
}