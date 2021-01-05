#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int n, DIGIT_N;
	int sum = 0;
	int x;

	int digit = 0;

	printf("입력할 정수의 자리수를 정하시오 : ");
	scanf("%d", &DIGIT_N);

	printf("%d자리 정수를 입력하시오 : ", DIGIT_N);
	scanf("%d", &n);

	for (x = 0; x < DIGIT_N; x++) {

		digit = n % 10;
		sum = sum + digit;
		printf("n = %10d, digit = %d, sum = %2d \n", n, digit, sum);
		n = n / 10;
	}

	printf("\n최종 결과 : n = %10d, digit = %d, sum = %d \n\n", n, digit, sum);

	return 0;
}