#include <stdio.h>
#include <string.h>
int main() {
	int alp[26] = { 0, };
	char word[101];
	int temp;
	scanf("%s", word);
	for (int i = 0; i < strlen(word); i++) {
		temp = (int)word[i] - 'a';
		alp[temp] += 1;
	}
	for (int i = 0; i < 26; i++) printf("%d ", alp[i]);
	return 0;
}