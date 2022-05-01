#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[1000001];
	int Count = 0;

	gets(arr); //문자열 입력받기


	for (int count = 0; count < strlen(arr); count++)
	{
		if (arr[count] == ' ')        
				Count++;
	}

	if (arr[0] == ' ')
		Count--;

	if (arr[strlen(arr) - 1] == ' ')
		Count--;


	printf("%d", Count+1);  

	return 0;
}