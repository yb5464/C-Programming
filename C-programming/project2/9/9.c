#include <stdio.h>
#pragma warning (disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

int fib(int n);

int main(void)
{
	int n = 10;

	for (int i = 0; i < n; i++)
		printf("%3d 번째 피보나치 수 --> %5d\n", i + 1, fib(i));

	return 0;
}

int fib(int n)
{
	if (n < 2)
		return 1;

	return fib(n - 2) + fib(n - 1);
}