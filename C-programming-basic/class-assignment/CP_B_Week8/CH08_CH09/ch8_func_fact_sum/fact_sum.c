//�������� ���� ���� ���ϴ� ����
#include <stdio.h>
#pragma warning(disable:4996)

int factorial(int n);

int main(void)
{
	int i, sum = 0, n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		sum = sum + factorial(i);
		printf("%d! = %d\n", i, factorial(i));
	}

	printf("1! + 2! + 3!+ ... %d! = %d\n", n, sum);

	return 0;
}

int factorial(int n)
{
	int i;
	long result = 1;

	for (i = 1; i <= n; i++)
		result *= i;

	return result;
}