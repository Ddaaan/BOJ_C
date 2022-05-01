#include <stdio.h>
#include <math.h>
int main() {
	int r, w, l, t;
	double temp;
	int count = 1;
	while (1)
	{
		scanf("%d", &r);
		if (r == 0) break;
		scanf("%d %d", &w, &l);
		temp = sqrt((w * w) + (l * l));
		printf("%f\n", temp); //debugline
		if (temp <= r*2) printf("Pizza %d fits on the table.\n", count);
		else printf("Pizza %d does not fit on the table.\n", count);
		count++;
	}
	
	return 0;
}