#include <stdio.h>
int main() {
	int num[3];
	char alp1, alp2, alp3;
	int max = 0;
	int min = 100;
	int middle;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &num[i]);
		if (max < num[i])
			max = num[i];
		if (min > num[i])
			min = num[i];
	}
	
	scanf(" %c%c%c", &alp1, &alp2, &alp3);
	for (int i = 0; i < 3; i++) {
		if (num[i] != max && num[i] != min)
			middle = num[i];
	}


	if (alp1 == 'A' && alp2 == 'B') 
		printf("%d %d %d", min, middle, max);
	else if (alp1 == 'A' && alp2 == 'C')
		printf("%d %d %d", min, max, middle);
	else if (alp1 == 'B' && alp2 == 'C')
		printf("%d %d %d", middle, max, min);
	else if (alp1 == 'B' && alp2 == 'A')
		printf("%d %d %d", middle, min, max);
	else if (alp1 == 'C' && alp2 == 'A')
		printf("%d %d %d", max, min, middle);
	else printf("%d %d %d", max, middle, min);

	return 0;
}