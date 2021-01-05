#include <stdio.h>
#define STUDENTS 5

int get_average(int score[], int n);

int main(void)
{
	int grade[STUDENTS] = { 1, 2, 3, 4, 5 };
	int i, avg;

	avg = get_average(grade, STUDENTS);
	printf("평균은 %d입니다.\n", avg);

	for (i = 0; i < STUDENTS; i++) {
		printf("%d ", grade[i]);
	}
	printf("\n");
	printf("sizeof(grade) = %d \n", sizeof(grade));

	return 0;
}

int get_average(int ary[], int n)
{
	int i;
	int sum = 0;
	for (i = 0; i < n; i++) {
		ary[i]++;
		sum += ary[i];
	}

	printf("sizeof(ary) = %d \n", sizeof(ary));
	return sum / n;
}