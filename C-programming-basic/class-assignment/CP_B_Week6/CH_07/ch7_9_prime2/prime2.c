#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int i, N;
	int is_prime = 1;

	printf("�ڿ����� �Է��Ͻÿ�: ");
	scanf("%d", &N);

	for (i = 2; i <= N / 2; i++) {
		if (N % i == 0) {
			is_prime = 0;
			break;
		}
	}

	if (is_prime == 1)
		printf("%d�� �Ҽ��Դϴ�.\n", N);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", N);

	return 0;
}