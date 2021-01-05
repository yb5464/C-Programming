#include <stdio.h>

int main(void) 
{
	int i, sum1 = 0, sum2 = 0, result;

	for (i = 1; i <= 100; i++) {
		sum1 = sum1 + i;
		sum2 = sum2 + i * i;
	}

	result = sum1 * sum1 - sum2;

	printf("1부터 100까지 자연수에 대해 \"합의제곱\"과 \"제곱의 합\"의 차이는 %d입니다.\n", result);

	return 0;
}