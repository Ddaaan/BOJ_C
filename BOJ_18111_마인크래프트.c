#include <stdio.h>
#include <stdlib.h>
int main() {
	int N, M, inven, temp, copy_inven, ground_height, time = 0, min_time=999999999;
	int** ground;
	int max = 0, min = 256, count = 0;
	scanf("%d %d %d", &N, &M, &inven);

	ground = (int**)malloc(sizeof(int*) * N);
	for (int i = 0; i < N; i++) {
		ground[i] = (int*)malloc(sizeof(int) * M);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &ground[i][j]);
			if (max < ground[i][j]) max = ground[i][j];
			if (min > ground[i][j]) min = ground[i][j];
		}
	}

	for (int i = max; i >= min; i--) {
		copy_inven = inven;
		time = 0;
		for (int k = 0; k < N; k++) {
			for (int j = 0; j < M; j++) {
				temp = ground[k][j] - i;

				if (temp < 0) { //해당 칸 - i를 해서 음수가 나오면 temp만큼 그 칸을 채워야함
					time -= temp; //temp가 음수니까 time을 더해주고 싶으면 빼줘야하고
					copy_inven += temp; //인벤 블럭수도 마찬가지로 기호 반대로 써야함
				}
				else if (temp > 0) { //해당칸 - i를 해서 양수가 나오면 temp만큼 칸을 깎아야함
					time += 2 * temp;
					copy_inven += temp;
				}
			}
		}
		if (copy_inven >= 0) { //인벤에 남은 블럭이 0이거나 양수면 -> 그 방법이 가능하다는 이야기
			if (time < min_time) {
				min_time = time;
				ground_height = i;
			}
		}
	}
	printf("%d %d", min_time, ground_height);

	for (int i = 0; i < N; i++) free (ground[i]);
	free(ground);

	return 0;
}