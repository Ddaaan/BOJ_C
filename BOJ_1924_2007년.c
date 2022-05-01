#include <stdio.h>
int main() {
	int x, y;
	int month[12] = { 31,28, 31,30,31,30,31,31,30,31,30,31 };
	scanf("%d %d", &x, &y);
	int day = 0;
	int temp;
	for (int i = 0; i < x-1; i++) {
		day += month[i];
	}
	day += y;
	temp = day % 7;
	if (temp == 1) printf("MON");
	else if (temp == 2) printf("TUE");
	else if (temp == 3) printf("WED");
	else if (temp == 4) printf("THU");
	else if (temp == 5) printf("FRI");
	else if (temp == 6) printf("SAT");
	else printf("SUN");
	return 0;
}