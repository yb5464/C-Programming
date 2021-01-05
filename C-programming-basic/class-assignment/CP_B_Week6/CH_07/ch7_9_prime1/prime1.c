#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int i, N;
	int is_prime = 1;
	printf("자연수를 입력하시오: ");
	scanf("%d", &N);

	for (i = 2; i <= N/2; i++) {
		if (N % i == 0) {
			printf("\t%d는 %d로 나누어지기 때문에 소수가 아닙니다.\n", N, i);
			break;
		}
	}
	
	return 0;
}