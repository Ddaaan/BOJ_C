#include <stdio.h>
int main() {
	char word[1000001];
	int alp[26] = { 0, };
	int max = 0;
	int len = 0;
	int flag = 0;
	int j = 0;
	int ans;

	scanf("%s", word);
	while (word[j] != '\0') { //strlen을 쓰면 시간초과가 뜸 그러면 널문자 앞까지 단어의 개수 세주면 됨 
		len++; //len이 문자열 길이
		j++;
	}

	for (int i = 0; i < len; i++) { //alp배열에 각 알파벳이 몇번 써졌는지 세주기
		if (word[i] < 97) alp[word[i] - 65] += 1; //대문자
		else alp[word[i] - 97] += 1; //소문자
	}
	for (int i = 0; i < 26; i++) { //알파벳 중 가장 많은 걸 세야하니까 max를 최소로 두고
		if (max < alp[i]) {         //alp가 max보다 크면 max에 집어넣기
			max = alp[i];
			ans = i + 65;
		}
	}
	for (int i = 0; i < 26; i++) { //그리고 이제 가장 많이 쓰인 알파벳이 여러번인지 확인
		if (max == alp[i]) //max랑 alp랑 같으면
			flag ++; //flag에 1을 추가시켜 -> 그러면 max랑 같은게 여러개면 flag가 2이상 나오겠지
	}
	if (flag != 1) printf("?\n"); //max랑 alp랑 같은게 한번은 무조건 있음 그래서 1이 아니면 ?를 출력해야함
	else printf("%c\n", ans); //아니면 이제 ans를 출력하면 됨
	return 0;
}