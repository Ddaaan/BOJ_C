#include <stdio.h>
#include <string.h>

int main(void){
	char word;
	while (scanf("%c", &word) != EOF){
		printf("%c", word);
	}
	return 0;
}