#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int init_money = 100000;
	float interest = 0.023;
	int years = 9;
	float result = 0;

	result = init_money * (1 + interest * years);

	printf("������ %d���̰� ��ġ �Ⱓ�� %d�� �Դϴ�.\n\n", init_money, years);
	printf("����� �� ���ɾ��� %.2f�� �Դϴ�.\n", result);

	return 0;
}