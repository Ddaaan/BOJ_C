#include <stdio.h>
int main() {
	int N, people;
	scanf("%d %d", &N, &people);
	if (N % people == 0) {
		printf("0");
		return 0;
	}
}