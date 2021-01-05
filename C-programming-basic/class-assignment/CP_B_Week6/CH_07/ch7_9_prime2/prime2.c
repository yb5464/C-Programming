#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int i, N;
	int is_prime = 1;

	printf("자연수를 입력하시오: ");
	scanf("%d", &N);

	for (i = 2; i <= N / 2; i++) {
		if (N % i == 0) {
			is_prime = 0;
			break;
		}
	}

	if (is_prime == 1)
		printf("%d는 소수입니다.\n", N);
	else
		printf("%d는 소수가 아닙니다.\n", N);

	return 0;
}