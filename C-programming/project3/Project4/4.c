#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

void number_sum(int number, int temp_sum);

int main(void)
{
	int n = 0;
	int total_sum = 0;

	printf("1���� n������ ���� ���մϴ�. n -> ");
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
		printf("\n���� -> %d\n", result);
		printf("����Լ� ȣ��Ƚ�� -> %d\n", cnt);
		return 1;
	}
	else
		number_sum(number - 1, result);

	return result;
}