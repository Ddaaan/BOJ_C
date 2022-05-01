#include <stdio.h>
int gcd(int x, int y) {
	int temp;
	if (x < y) {
		temp = x;
		x = y;
		y = temp;
	}
	while (y != 0)
	{
		temp = x;
		x = y;
		y = temp % y;
	}
	return x;
}

int lcm(int x, int y) {
	int temp;
	temp = (x * y) / gcd(x, y);
	return temp;
}

int main() {
	int k, c1, c2;
	int input_year[100] = { 0, };
	int year[100] = { 0, };
	int min;
	scanf("%d", &k); 
	for (int i = 0; i < k; i++) {
		scanf("%d %d %d",&input_year[i], &c1, &c2);
		year[i] =input_year[i]+ lcm(c1, c2);
	}
	
	min = year[0];
	for (int i = 0; i < k; i++) {
		if (min > year[i])
			min = year[i];
	}
	printf("%d", min);
	return 0;
}