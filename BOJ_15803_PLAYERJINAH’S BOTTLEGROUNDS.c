#include <stdio.h>
int main() {
	double x1, x2, x3, y1, y2, y3;
	scanf("%ld %ld", &x1, &y1);
	scanf("%ld %ld", &x2, &y2);
	scanf("%ld %ld", &x3, &y3);

	if (x1 == x2 && x2 == x3 && x1 == x3) printf("WHERE IS MY CHICKEN?");
	else if (y1 == y2 && y2 == y3 && y1 == y3) printf("WHERE IS MY CHICKEN?");
	else if ((x2 - x1) / (y2 - y1) == (x3 - x2) / (y3 - y2)) printf("WHERE IS MY CHICKEN?");
	else printf("WINNER WINNER CHICKEN DINNER!");

	return 0;
}