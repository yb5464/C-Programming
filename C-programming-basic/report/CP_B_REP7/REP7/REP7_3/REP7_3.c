#include <stdio.h>
#pragma warning (disable: 4996)

int check_prime(int N);
int digit_sum(int N);

int main(void)
{
	int num, N;
	int prime_cnt = 0, even_cnt = 0;

	printf("���ϰ��� �ϴ� �Ҽ��� ������ �Է��Ͻÿ� : ");
	scanf("%d", &N);
	printf("\n");

	num = 2;
	while (prime_cnt < N) {

		if (check_prime(num)) {
			prime_cnt++;

				if (digit_sum(num) % 2 != 0)
					printf("%4d(Ȧ) ", num);
				else {
					printf("%4d(¦) ", num);
					even_cnt++;
				}

			if (prime_cnt % 10 == 0)
				printf("\n\n");
		}
		num++;
	}

	printf("\n");
	printf("\n���ڸ��� ���� ¦���� �Ҽ��� %d�� �Դϴ�\n\n", even_cnt);

	return 0;
}

int check_prime(int N)
{
	//int prime = 1;
	for (int i = 2; i < N / 2 + 1; i++) {
		if (N % i == 0)
			return 0;
	}
	return 1;
}

int digit_sum(int N)
{
	int digit, sum = 0;

	while (N > 0) {
		digit = N % 10;
		sum = sum + digit;
		N = N / 10;
	}

	return sum;
}
