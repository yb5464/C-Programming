#include <stdio.h>
#pragma warning (disable:4996)
#define PI 3.14

int main(void)
{
	float radius = 7.58;
	float perimeter = 0;		//�ѷ�
	float area = 0;			//����

	perimeter = radius * 2 * PI;
	area = radius * radius * PI;

	printf("�������� %.2f�� ���� �ѷ��� ����\n", radius);
	printf("�ѷ�: %.2f\n����: %.2f\n", perimeter, area);

	return 0;
}