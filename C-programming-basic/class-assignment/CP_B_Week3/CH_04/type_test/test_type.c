#include <stdio.h>

int main(void)
{
	char c = 'A';
	char s = 127;
	unsigned char us = 255;
	int i = 0;

	float f = 1.1234567890123456789F;  //소수점 이하 6자리까지 표현이 가능
	double d = 1.1234567890123456789; //소수점 이하 15자리까지 표현이 가능

	printf("char 변수 \t\t s = %d \n", s);
	printf("unsigned char 변수 \t us = %d \n\n", us);

	s = s - 1;
	printf("s = s - 1 수행 이후 \t s = %d \n\n", s);

	s = s + 2;
	printf("s = s + 2 수행 이후 \t s = %d \n\n", s);

	us = us + 1;
	printf("us = us + 1 수행 이후 \t us = %d \n\n", us);

	printf("자료유형 float       : %20.18f : 소수점 6자리까지 유효\n", f);
	printf("자료유형 double      : %20.18f : 소수점 15자리까지 유효\n\n", d);

	printf("char 변수 \t\t c = %c, %d \n", c, c);
	c = c + 1;
	printf("c = c + 1 수행 이후 \t c = %c, %d \n\n", c, c);

	return 0;
}