#include <stdio.h>
#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int arr1[3][2] = { {3, 5}, {4, 2}, {5, 7} };
	int arr2[2][3] = { {3, 8, 2}, {2, 4, 6} };
	int result[3][3] = { 0 };
	int mul = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mul = 0;
			for (int k = 0; k < 2; k++) {
				mul += (arr1[i][k] * arr2[k][j]);
			}
			result[i][j] = mul;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			printf("%d ", result[i][j]);
		printf("\n");
	}

	return 0;
}