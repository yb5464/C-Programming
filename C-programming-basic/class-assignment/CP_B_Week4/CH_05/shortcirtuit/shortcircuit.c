#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 3;
	printf("a = %d, b = %d, c = %d\n\n", a, b, c);

	c = (a++ == 11) && (b++ == 20);
	printf("c = (a++ == 11) && (b++ == 20) 연산 후 각 변수값 > \n");
	printf("a = %d, b = %d, c = %d\n", a, b, c);

	c = (a++ == 11) && (b++ == 20);
	printf("c = (a++ == 11) && (b++ == 20) 연산 후 각 변수값 > \n");
	printf("a = %d, b = %d, c = %d\n", a, b, c);

	c = (a++ == 12) || (b++ == 21);
	printf("c = (a++ == 12) || (b++ == 21) 연산 후 각 변수값 > \n");
	printf("a = %d, b = %d, c = %d\n", a, b, c);

	c = (a++ == 12) || (b++ == 22);
	printf("c = (a++ == 12) || (b++ == 22) 연산 후 각 변수값 > \n");
	printf("a = %d, b = %d, c = %d\n", a, b, c);

	return 0;
}