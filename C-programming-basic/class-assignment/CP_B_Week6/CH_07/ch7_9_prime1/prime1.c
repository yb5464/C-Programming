#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int i, N;
	int is_prime = 1;
	printf("�ڿ����� �Է��Ͻÿ�: ");
	scanf("%d", &N);

	for (i = 2; i <= N/2; i++) {
		if (N % i == 0) {
			printf("\t%d�� %d�� ���������� ������ �Ҽ��� �ƴմϴ�.\n", N, i);
			break;
		}
	}
	
	return 0;
}