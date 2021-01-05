#include <stdio.h>

int main(void)
{
	int i, N, count = 0;
	int is_prime = 1;

	for (N = 2; N <= 1000; N++) {
		
		is_prime = 1;

		for (i = 2; i <= N / 2; i++) {
			
			if (N % i == 0) {
				is_prime = 0;
				break;
			}
		}
		
		if (is_prime != 0) {
			count = count + 1;
			printf("%d는 %d번째 소수입니다\n", N, count);
		}
		else
			printf("\t\t%d는 소수가 아닙니다\n", N);
	}

	printf("\n2에서 %d까지 소수는 %d개입니다.\n\n", N - 1, count);
	//첫번째 for문에서 N++이후에 N<=1000을 만족하지 않아서 for문을 탈출했기 때문에
	//여기서는 N - 1로 입력해서 1000이 출력되도록 함. 1000 이하면 1000도 포함이기 때문에
	
	return 0;
}