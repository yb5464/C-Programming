#include <stdio.h>
#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int data1 = 10, data2 = 20;
	int* p1 = &data1, * p2 = &data2;

	int sum = 0;
	int** dp;

	*p1 = 100;
	*p2 = 200;

	dp = &sum;
	*dp = *p1 + *p2;

	printf("%d + %d = %d", data1, data2, sum);

	return 0;
}