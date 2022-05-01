#include <stdio.h>
int main() {
	int start_h, start_m, take_m;
	int total, h, m;
	scanf("%d %d", &start_h, &start_m);
	scanf("%d", &take_m);
	total = start_h * 60 + start_m + take_m;
	h = total / 60;
	m = total % 60;
	if (h >= 24) h -= 24;
	printf("%d %d", h, m);
	return 0;
}