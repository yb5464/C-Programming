#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int n, DIGIT_N;
	int sum = 0;
	int x;

	int digit = 0;

	printf("N�ڸ� ������ �Է��Ͻÿ� : ");
	scanf("%d", &n);

	while (n!=0) {

		digit = n % 10;
		sum = sum + digit;
		printf("n = %10d, digit = %d, sum = %2d \n", n, digit, sum);
		n = n / 10;
	}

	printf("\n���� ��� : n = %10d, digit = %d, sum = %d \n\n", n, digit, sum);

}