#include <stdio.h>
int main() {
	int N;
	double ave;
	double score[1001];
	double total = 0;
	double max = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%lf", &score[i]);
		if (max < score[i]) max = score[i];
	}
	for (int i = 0; i < N; i++) {
		score[i] = (score[i] / max) * 100;
		total += score[i];
	}
	ave = total / N;
	printf("%lf", ave);
	return 0;
}