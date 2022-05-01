#include <stdio.h>
void bubble(int* arr, int len) {
	int temp;
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	int score[8];
	int copy_score[8] = { 0, };
	int output[8] = { 0, };
	int total = 0, sort_score; 
	for (int i = 0; i < 8; i++) { //점수 입력받기
		scanf("%d", &score[i]);
		copy_score[i] = score[i]; //초기 배열 복사해두기
	}
	
	bubble(score, 8); //배열을 정렬시키기
	for (int i = 0; i < 5; i++) total += score[i]; //큰 수부터 5개 값 더하기
	printf("%d\n", total);

	for (int i = 0; i < 5; i++) { //score배열 큰수 5개
		for (int j = 0; j < 8; j++) { //copy배열 앞부터
			if (score[i] == copy_score[j]) output[i] = j; //만약 score배열과 copy배열이 같다면 output배열에 copy배열의 번호 넣어주기
		}
	}
	bubble(output, 8);
	for (int i = 4; i >=0; i--) {
			printf("%d ", output[i]+1);
	}
	return 0;
}