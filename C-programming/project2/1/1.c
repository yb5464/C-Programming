#include <stdio.h>
#pragma warning (disable:4996)
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int num;
	int digit;

	printf("���� �ϳ��� �Է��ϼ���: ");
	scanf("%d", &num);

	printf("�ݴ�� ����� ����: ");

	do {
		digit = num % 10;
		num = num / 10;
		printf("%d", digit);

	} while (num > 0);


	printf("\n");

	return 0;
}