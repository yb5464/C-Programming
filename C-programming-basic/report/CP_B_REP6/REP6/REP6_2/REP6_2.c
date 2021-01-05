#include <stdio.h>

int check_prime(int N);

int main(void)
{
	int i, N, count = 0;
	int is_prime = 1;

	for (N = 2; N < 1000; N++) {

		if (check_prime(N)) {
			count++;
			printf("%d�� %d��° �Ҽ��Դϴ�\n", N, count);
		}
		else
			printf("\t\t%d�� �Ҽ��� �ƴմϴ�\n", N);
	}

	printf("\n2���� %d������ �Ҽ��� %d�� �Դϴ�.\n\n", N, count);

	return 0;
}

int check_prime(int N)
{
	int prime;
	for (prime = 2; prime < N; prime++) {
		if (N % prime == 0) {
			prime = 0;
			break;
		}
	}

	return prime;
}