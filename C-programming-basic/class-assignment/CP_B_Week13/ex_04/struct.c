// ���α׷� : 13���� �ǽ� ���α׷� #4
// �й� : 20165079
// �̸� : �迵��

#include<stdio.h>

struct student {
	int number;
	char name[10];
	double grade;
};

void main(void) 
{
	struct student s;

	printf("�й��� �Է��Ͻÿ�: ");
	scanf_s("%d", &s.number);

	printf("�̸��� �Է��Ͻÿ�: ");
	scanf_s("%s", s.name, sizeof(s.name));

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%lf", &s.grade);

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %d\n", s.grade);

	return 0;

}