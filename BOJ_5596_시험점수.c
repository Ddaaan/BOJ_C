#include <stdio.h>
int main() {
	int min=0, man=0, score;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &score);
			if (i == 0) min += score;
			else man += score;
		}
	}
	if (min >= man) printf("%d", min);
	else printf("%d", man);
	return 0;
}