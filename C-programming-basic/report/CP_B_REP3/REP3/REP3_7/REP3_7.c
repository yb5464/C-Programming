#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int point, op = 1;
	char grade;

	printf("���α׷��� ��� ���� �Է� : ");
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
		printf("�Է��� ���� : %d, ���� : %c \n", point, grade);
	else
		printf("�߸��� �Է��Դϴ�.\n");

	return 0;
}