#include <stdio.h>
#pragma warning (disable: 4996)
#define STUDENTS 5
int main(void)
{
	int grade[STUDENTS];
	int sum = 0;
	int i, average;
	for (i = 0; i < STUDENTS; i++) {
		printf("학생들의 성적을 입력하시오: ");
		scanf("%d", &grade[i]);
	}
	
	printf("입력한 학생들의 성적 : ");
	for (i = 0; i < STUDENTS; i++) {
		printf("%2d ", grade[i]);
		sum += grade[i];
	}

	average = sum / STUDENTS;
	printf(", 성적 평균 = %d\n", average);

	return 0;
}