#include <stdio.h>
int main() {
	int com[100] = { 0, };
	int count=0, input, people;
	scanf("%d", &people);
	for (int i = 0; i < people; i++) {
		scanf("%d", &input);
		if (com[input - 1] == 1) count++;
		com[input - 1] = 1;
	}
	printf("%d", count);
	return 0;
}