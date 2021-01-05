#include <stdio.h>

int inc(int counter);

int main(void)
{
	int i, y;

	i = 10;
	printf("함수 호출전 i = %d\n", i);
	
	inc(i);
	printf("함수 호출후 i = %d\n", i);

	i = inc(i);
	printf("함수 호출후 i = %d\n", i);

	return 0;
}

int inc(int i)
{
	i++;

	printf("---------> 함수 내부 i = %d\n", i);

	return i;
}