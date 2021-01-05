#include <stdio.h>
#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

int factorial(int n);

int main(void)
{
	int pascal[10][10];

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= i; j++) {
			pascal[i][j] = factorial(i) / (factorial(j) * factorial(i - j));
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%3d ", pascal[i][j]);
		}
		printf("\n");
	}

	return 0;
}

int factorial(int n)
{
	if (n <= 1)
		return 1;

	return n * factorial(n - 1);
}