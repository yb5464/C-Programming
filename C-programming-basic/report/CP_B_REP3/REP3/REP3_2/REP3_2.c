#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int x, y, z, max;

	printf("����1 �Է� : ");  scanf("%d", &x);
	printf("����2 �Է� : ");  scanf("%d", &y);
	printf("����3 �Է� : ");  scanf("%d", &z);

	max = x;
	if (max < y)
		max = y;
	if (max < z)
		max = z;

	printf("�Է��� ���� �߿��� ���� ū ���� %d�Դϴ�.\n", max);

	return 0;
}