#include <stdio.h>
int main() {
	int money;
	int num[3];
	int max = 1;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &num[i]);
		if (max < num[i]) max = num[i];
	}
	if (num[0] == num[1] && num[1] == num[2]) money = 10000 + (num[0] * 1000);
	else if (num[0] == num[1] || num[1] == num[2] || num[2] == num[0]) {
		if (num[0] == num[1])
			money = 1000 + (num[0] * 100);
		else if (num[1] == num[2])
			money = 1000 + (num[1] * 100);
		else
			money = 1000 + (num[2] * 100);
	}
	else money = max * 100;

	printf("%d", money);
	return 0;
}