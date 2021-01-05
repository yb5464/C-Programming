#include <stdio.h>
#pragma warning (disable:4996)
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int money = 1000000;
	int year = 10;
	float rate = 0.045;
	float result = 0;

	for (int i = 1; i <= year; i++) {
		result = money * (1 + rate * i);
		printf("%2d년 째 금액 --> %.2f\n", i, result);
	}

	return 0;
}