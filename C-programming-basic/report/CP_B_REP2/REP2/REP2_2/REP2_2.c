#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int id, pass;

	printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ���\n");

	printf("id: ____\b\b\b\b");
	scanf("%d", &id);

	printf("pass: ____\b\b\b\b");
	scanf("%d", &pass);
	printf("\a�Էµ� ���̵�� \"%d\"�̰� �н������ \"%d\"�Դϴ�.", id, pass);

	return 0;
}