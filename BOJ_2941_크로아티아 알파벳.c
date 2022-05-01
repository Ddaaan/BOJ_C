#include <stdio.h>
#include <string.h>
int main() {
	char word[101];
	scanf("%s", word);
	int count = strlen(word);
	for (int i = 0; i < strlen(word); i++) {
		if (word[i] == '=' || word[i] == '-')
			count--;
		if (word[i] == 'd' && word[i + 1] == 'z' && word[i + 2] == '=')
			count--;
		if ((word[i] == 'l' || word[i] == 'n') && word[i+1] == 'j')
			count--;
	}
	printf("%d", count);
	return 0;
}