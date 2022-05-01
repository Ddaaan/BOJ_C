#include <stdio.h>
int main() {
	int ground[257] = { 0, };
	int G, max = 0, min = 256;
	int N, M, inven, copy_inven, ground_height, time = 0, min_time = 10e8;
	scanf("%d %d %d", &N, &M, &inven);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &G);
			ground[G]++;
			if (max < G) max = G;
			if (min > G)min = G;
		}
	}

	for (int i = max; i >= min; i--) {
		copy_inven = inven;
		time = 0;
		for (int j = 0; j < 257; j++) {
			if (i > j) {
				time += ground[j] * (i - j);
				copy_inven -= ground[j] * (i-j);
			}
			else if (i < j) {
				time += ground[j] * (j - i) * 2;
				copy_inven += ground[j] * (j - i);
			}
		}
		if (copy_inven >= 0 && min_time > time) {
			min_time = time;
			ground_height = i;
		}
	}
	printf("%d %d", min_time, ground_height);

	return 0;
}


//피드백 코드
/*#include <stdio.h>

int main()
{
    int column, row, block, temp, table[257] = { 0, }, maximum = 0, minimum = 10e8;
    int target_time = 10e8, target_height = 0, need_block, get_block, need, get, time;
    scanf("%d %d %d", &column, &row, &block);

    for (int i = 0; i < column; i++){
        for (int j = 0; j < row; j++){
            scanf("%d", &temp);
            if (temp > maximum) maximum = temp;
            if (temp < minimum) minimum = temp;
            table[temp]++;
        }
    }

    for (int height = maximum; height >= minimum; height--){
        need_block = 0;
        get_block = 0;

        for (int i = minimum; i <= maximum; i++){
            get = (i - height) * table[i];
            if (get < 0) get = 0;
            get_block += get;
            need = (height - i) * table[i];
            if (need < 0) need = 0;
            need_block += need;
        }

        if (need_block <= get_block + block){
            time = need_block + (get_block * 2);
            if (time < target_time){
                target_time = time;
                target_height = height;
            }
        }
    }

    printf("%d %d", target_time, target_height);
    return 0;
}*/