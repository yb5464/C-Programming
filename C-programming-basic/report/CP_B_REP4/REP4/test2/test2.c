#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int n, DIGIT_N;
	int sum = 0;
	int x;

	int digit = 0;

	printf("�Է��� ������ �ڸ����� ���Ͻÿ� : ");
	scanf("%d", &DIGIT_N);

	printf("%d�ڸ� ������ �Է��Ͻÿ� : ", DIGIT_N);
	scanf("%d", &n);

	for (x = 0; x < DIGIT_N; x++) {

		digit = n % 10;
		sum = sum + digit;
		printf("n = %10d, digit = %d, sum = %2d \n", n, digit, sum);
		n = n / 10;
	}

	printf("\n���� ��� : n = %10d, digit = %d, sum = %d \n\n", n, digit, sum);

	return 0;
}