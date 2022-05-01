#include <stdio.h>
int main(void){
	int N;
	scanf("%d", &N);
	for (int count = 1; count <= N; count++){
		{
			for (int star = 0; star < count; star++)
				printf("*");

		}
		printf("\n");
	}
	return 0;
}