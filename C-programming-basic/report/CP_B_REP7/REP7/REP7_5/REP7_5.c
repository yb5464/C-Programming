#include <stdio.h>
#pragma warning (disable: 4996)
#define STUDENTS 5
int main(void)
{
	int grade[STUDENTS];
	int sum = 0;
	int i, average;
	for (i = 0; i < STUDENTS; i++) {
		printf("�л����� ������ �Է��Ͻÿ�: ");
		scanf("%d", &grade[i]);
	}
	
	printf("�Է��� �л����� ���� : ");
	for (i = 0; i < STUDENTS; i++) {
		printf("%2d ", grade[i]);
		sum += grade[i];
	}

	average = sum / STUDENTS;
	printf(", ���� ��� = %d\n", average);

	return 0;
}