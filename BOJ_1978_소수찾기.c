#include <stdio.h>
#include<math.h>
int main() {
	int N, num;
	int count = 0;
	int flag = 0;
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);

		flag = 0;
		if (num == 1) continue;
		for (int j = 2; j <= sqrt(num); j++){
			if (num % j == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			count++;
	}
	printf("%d", count);
	return 0;
}