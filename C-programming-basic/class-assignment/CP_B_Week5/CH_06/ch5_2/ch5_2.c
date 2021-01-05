#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int score;

	printf("성적을 입력하시오: ");
	scanf("%d", &score);

	if (score >= 90)
		printf("합격: 학점A\n");
	if ((score >= 80) && (score < 90))
		printf("합격: 학점B\n");
	if ((score >= 70) && (score < 80))
		printf("합격: 학점C\n");
	if ((score >= 60) && (score < 70))
		printf("합격: 학점D\n");
	if (score < 60)
		printf("불합격: 학점F\n");


	return 0;
}