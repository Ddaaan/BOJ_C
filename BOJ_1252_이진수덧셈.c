#include <stdio.h>
#include <string.h>
int main() {
	char A[81], B[81];
	int A_len, B_len;
	int temp,count;
	scanf(" %s", A);
	scanf(" %s", B);
	A_len = strlen(A);
	B_len = strlen(B);
	if (A_len < B_len) {
		for (int i = 0; i < A_len; i++) {
			B[i+2] += A[i];
		}
		for (int i = 0; i < B_len-1; i++) {
			if (B[i] != '1' && B[i] != '0') {
				while (B[i]!='1' && B[i] != '0')
				{
					(int)B[i + 1] += 1;
				}
			}
		}
		count = (int)B[0] - 1;
		B[0] = '1';
		for (int i = 0; i < count; i++) {
			printf("1");
		}
		printf("%s", B);
	}
	


	return 0;
}