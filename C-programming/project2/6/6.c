#include <stdio.h>
#pragma warning (disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	double degree[] = { -5.34, 3.67, 19.76, 28.76, 35.63 };
	int size = sizeof(degree) / sizeof(double);

	printf("�迭 degree�� ũ��� %d�Դϴ�.\n", size);

	for (int i = 0; i < size; i++) {
		printf("%d��° ���� --> %8.2lf\n", i, degree[i]);
	}

	return 0;
}