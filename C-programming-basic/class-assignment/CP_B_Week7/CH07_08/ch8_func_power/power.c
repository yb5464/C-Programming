#include <stdio.h>
#pragma warning(disable:4996)
int get_integer(void);
int power(int x, int y);

int main(void)
{
	int a, b;
	a = get_integer();
	b = get_integer();
	printf("%d�� %d���� %d�Դϴ�.", a, b, power(a, b));
	return 0;
}

int get_integer(void)
{
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	return n;
}

int power(int x, int y)
{
	int i;
	long result = 1;

	for (i = 0; i < y; i++)
		result *= x;

	return result;
}