#include <stdio.h>
#pragma warning (disable:4996)
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int num;
	int digit;

	printf("정수 하나를 입력하세요: ");
	scanf("%d", &num);

	printf("반대로 출력한 정수: ");

	do {
		digit = num % 10;
		num = num / 10;
		printf("%d", digit);

	} while (num > 0);


	printf("\n");

	return 0;
}