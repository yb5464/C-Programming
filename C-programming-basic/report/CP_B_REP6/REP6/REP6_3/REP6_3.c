#include <stdio.h>
#pragma warning(disable: 4996)

int check_prime(int N);

int main(void)
{
	int num, N_prime, cnt = 0;
	int sum = 0;

	printf("구하고자 하는 소수의 갯수를 입력하시오 : ");
	scanf("%d", &N_prime);

	num = 2;

	while (cnt < N_prime) {
		if (check_prime(num)) {
			printf("%3d ", num);
			cnt++;
			if (cnt % 10 == 0)
				printf("\n");
		}

		num++;
	}
	
	printf("\n");

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