#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int x, y;
	printf("��ǥ(x y): ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
		printf("1 ��и�");
	else if (x < 0 && y > 0)
		printf("2 ��и�");
	else if (x < 0 && y < 0)
		printf("3 ��и�");
	else if (x > 0 && y < 0)
		printf("4 ��и�");
	else
		printf("�� ���� �� Ȥ�� ����"); //x�� y�� 0�� ���� �� 

	return 0;
}