#include <stdio.h>

int inc(int counter);

int main(void)
{
	int i, y;

	i = 10;
	printf("�Լ� ȣ���� i = %d\n", i);
	
	inc(i);
	printf("�Լ� ȣ���� i = %d\n", i);

	i = inc(i);
	printf("�Լ� ȣ���� i = %d\n", i);

	return 0;
}

int inc(int i)
{
	i++;

	printf("---------> �Լ� ���� i = %d\n", i);

	return i;
}