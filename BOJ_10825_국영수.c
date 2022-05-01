#include<stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student{
	char name[11];
	int kor;
	int eng;
	int math;
}student;

int compare_downgrade(int a, int b) { //감소
	if (a > b) return -1;
	if (a < b) return 1;
	if (a == b) return 0;
}

int compare_upgrade(int a, int b) { //증가
	if (a > b) return 1;
	if (a < b) return -1;
	if (a == b) return 0;
}

int compare(const void* a, const void* b) {
	student grade1 = *(student*)a;
	student grade2 = *(student*)b;

	if (grade1.kor == grade2.kor) {
		if (grade1.eng == grade2.eng) {
			if (grade1.math == grade2.math) {
				return strcmp(grade1.name, grade2.name);
			}
			return compare_downgrade(grade1.math, grade2.math);
		}
		return compare_upgrade(grade1.eng, grade2.eng);

	}
	return compare_downgrade(grade1.kor, grade2.kor);
}

int main() {
	int N;
	scanf("%d", &N);
	student* grade = (student*)malloc(sizeof(student) * N);
	for (int i = 0; i < N; i++) {
		scanf("%s", grade[i].name);
		scanf("%d", &grade[i].kor);
		scanf("%d", &grade[i].eng);
		scanf("%d", &grade[i].math);
	}
	qsort(grade, N, sizeof(student), compare);
	for (int i = 0; i < N; i++) {
		printf("%s\n", grade[i].name);
	}
	free(grade);
	return 0;
}