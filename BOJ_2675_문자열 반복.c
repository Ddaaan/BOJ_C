#include <stdio.h>
#include <string.h>

int main() {
	int T,R;
	char word[20];
	scanf("%d", &T);

	for (int i = 0; i < T; i++) { //테스트케이스 개수만큼 for문 반복
		scanf("%d %s", &R, word); //R->반복횟수 입력 word->단어 입력

		for (int j = 0; j < strlen(word); j++)  //반복횟수만큼 for문 반복
			for (int k = 0; k < R; k++) printf("%c", word[j]);
		printf("\n");
	}
	return 0;
}