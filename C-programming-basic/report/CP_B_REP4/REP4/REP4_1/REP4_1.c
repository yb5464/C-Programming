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

	printf("\n1���� %d�̸��� 3�Ǵ� 5�� ����� ���� %d �Դϴ�.\n", N, sum);

	return 0;
}