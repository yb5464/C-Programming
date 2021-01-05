#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

void number_sum(int number, int temp_sum);

int main(void)
{
	int n = 0;
	int total_sum = 0;

	printf("1부터 n까지의 합을 구합니다. n -> ");
	scanf("%d", &n);

	number_sum(n, 0);

	return 0;
}

void number_sum(int number, int temp_sum)
{
	static int cnt = 0;
	int result = temp_sum + number;
	cnt++;

	if (number <= 1) {
		printf("\n총합 -> %d\n", result);
		printf("재귀함수 호출횟수 -> %d\n", cnt);
		return 1;
	}
	else
		number_sum(number - 1, result);

	return result;
}