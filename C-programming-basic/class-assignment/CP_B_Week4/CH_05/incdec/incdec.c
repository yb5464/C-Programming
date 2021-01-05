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
	printf("a++ 연산 결과 : %d \n", a++);
	printf("a++ 연산 이후 : %d \n\n", a);

	printf("++a 연산 결과 : %d \n", ++a);
	printf("++a 연산 이후 : %d \n", a);

	return 0;
}