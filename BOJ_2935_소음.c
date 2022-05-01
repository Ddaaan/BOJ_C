#include <stdio.h>
#include <string.h>
int main() {
	char A[1001], B[101];
	char operator;
	scanf(" %s", A);
	scanf(" %c", &operator);
	scanf(" %s", B);

	if (operator=='+') {
		if (strlen(A) >= strlen(B)) {
			A[strlen(A) - strlen(B)] += 1;
			printf("%s", A);
		}
		else {
			B[strlen(B) - strlen(A)] += 1;
			printf("%s", B);
		}
	}

	else{
		printf("1");
		for (int i = 0; i < strlen(A) + strlen(B) - 2; i++) {
			printf("0");
		}
	}
}