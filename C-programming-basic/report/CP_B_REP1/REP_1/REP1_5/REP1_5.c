#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int x, y, result;
	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);

	result = x + y;			//���ϱ�
	printf("%d + %d = %d\n", x, y, result);

	result = x - y;			//����
	printf("%d - %d = %d\n", x, y, result);
	result = x * y;			//����
	printf("%d x %d = %d\n", x, y, result);
	result = x / y;			//������
	printf("%d / %d = %d\n", x, y, result);
	result = x % y;			//������
	printf("%d %% %d = %d\n", x, y, result);

	return 0;
}