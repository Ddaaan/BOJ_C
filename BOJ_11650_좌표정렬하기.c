#include <stdio.h>
#include <stdlib.h>

typedef struct dot{
	int x;
	int y;
}dot;

int compare_num(int a, int b) {
	if (a > b) return 1;
	if (a < b) return -1;
	if (a == b) return 0;
}

int compare(const void* a, const void* b) {
	dot dot_1 = *(dot*)a;
	dot dot_2 = *(dot*)b;

	if (dot_1.y == dot_2.y) return compare_num(dot_1.x, dot_2.x);
	return compare_num(dot_1.y, dot_2.y);

	if (dot_1.y == dot_2.y) {
		if (dot_1.x > dot_2.x) return 1;
		else if (dot_1.x < dot_2.x) return -1;
		else return 0;
	}
	if (dot_1.y > dot_2.y) return 1;
	else if (dot_1.y < dot_2.y)return -1;
	else return 0;
}

int main() {
	int N; 
	scanf("%d", &N);
	dot* dot_arr = (dot*)malloc(sizeof(dot) * N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &dot_arr[i].x, &dot_arr[i].y);
	}
	qsort(dot_arr, N, sizeof(dot), compare);
	for (int i = 0; i < N; i++) {
		printf("%d %d\n", dot_arr[i].x, dot_arr[i].y);
	}
	free(dot_arr);
	return 0;
}