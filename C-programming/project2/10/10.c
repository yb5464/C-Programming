#include <stdio.h>
#pragma warning (disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

void hexa(int n);

int main(void)
{
	int num;

	printf("������ �ϳ� �Է��� �ּ���: ");
	scanf("%d", &num);

	printf("%d�� 16������ �ٲٸ� ", num);
	hexa(num);
	printf("\n");

	return 0;
}

void hexa(int n)
{
	if (n <= 0)
		return;

	hexa(n / 16);

	printf("%X", n % 16);
}