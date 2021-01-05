#include <stdio.h>

int main(void)
{
	int N = 10000;
	int sum = 0, i = 1;
	while (i < N)
	{
		if (i % 3 == 0 || i % 5 == 0) {
			printf("sum = %d + %d\n", sum, i);
			sum = sum + i;
		}

		i++;
	}

	printf("\n1부터 %d미만의 3또는 5의 배수의 합은 %d 입니다.\n", N, sum);

	return 0;
}