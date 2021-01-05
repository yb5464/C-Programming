#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int point, op = 1;
	char grade;

	printf("프로그래밍 언어 점수 입력 : ");
	scanf("%d", &point);
	switch (point / 10) {

	case 10:
	case 9:
		grade = 'A';
		break;

	case 8:
		grade = 'B';
		break;

	case 7:
		grade = 'C';
		break;

	case 6:
		grade = 'D';
		break;

	case 5:
	case 4:
	case 3:
		printf("------------\n");
	case 2:
		printf("------------\n");
	case 1:
		printf("------------\n");
	case 0:
		grade = 'F';
		break;

	default:
		op = 0;
	}


	if (op)
		printf("입력한 점수 : %d, 학점 : %c \n", point, grade);
	else
		printf("잘못된 입력입니다.\n");

	return 0;
}