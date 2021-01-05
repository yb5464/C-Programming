#include <stdio.h>
#pragma warning (disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

void hexa(int n);

int main(void)
{
	int num;

	printf("정수를 하나 입력해 주세요: ");
	scanf("%d", &num);

	printf("%d는 16진수로 바꾸면 ", num);
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