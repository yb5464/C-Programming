#include <stdio.h>

int main(void)
{
	int i = 0x12345678;
	int* p;

	p = &i;
	printf("i  = %#010x \n", i);			//i의 값
	printf("&i = %#010x \n\n", &i);			//i의 주소 값


	printf("p  = %#010x \n", p);			//i의 주소 값
	printf("&p = %#010x \n\n", &p);			//i의 주소가 담겨있는 p 의 주소값
	printf("*p = %#010x \n\n", *p);			//i의 값

	return 0;
}