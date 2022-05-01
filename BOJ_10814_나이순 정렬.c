#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct people
{
	int age;
	char name[101];
	int num;
}people;

int compare_people(int a, int b) {
	if (a > b) return 1;
	if (a < b) return -1;
	if (a == b) return 0;
}

int compare(const void* a, const void* b) {
	people age1 = *(people*)a;
	people age2 = *(people*)b;
	if (age1.age == age2.age) {
		return compare_people(age1.num, age2.num);
	}
	return compare_people(age1.age, age2.age);
}

int main() {
	int N;
	scanf("%d", &N);
	people* online = (people*)malloc(sizeof(people) * N);
	for (int i = 0; i < N; i++) {
		scanf("%d %s", &online[i].age, online[i].name);
		online[i].num = i;
	}
	qsort(online, N, sizeof(people), compare);
	for (int i = 0; i < N; i++) {
		printf("%d %s\n", online[i].age, online[i].name);
	}
	free(online);
	return 0;
}