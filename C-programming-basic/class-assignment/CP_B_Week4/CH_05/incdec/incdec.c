#include <stdio.h>

int main(void)
{
	int a = 10;
	a++;			//a = a + 1
	printf("%d \n", a);

	a = 10;
	++a;			//a = a + 1
	printf("%d \n\n", a);

	a = 10;
	printf("a++ ���� ��� : %d \n", a++);
	printf("a++ ���� ���� : %d \n\n", a);

	printf("++a ���� ��� : %d \n", ++a);
	printf("++a ���� ���� : %d \n", a);

	return 0;
}