#include <stdio.h>

int main(void)
{
	int x = 1234, y = 0;
	int i1 = 3.5;		//경고 발생
	int i2 = 3.5 + 4.2; //경고 발생
	int i3 = 3.5 + 4.7; //경고 발생
	int i4 = (int)3.5 + (int)4.7;

	double d1 = 3;
	double d2 = 9 / 2;
	double d3 = (double)9 / 2;
	double d4 = (double)(9 / 2);

	printf("i1 => %4d\ni2 => %4d\n", i1, i2);
	printf("i3 => %4d\ni4 => %4d\n", i3, i4);
	printf("d1 => %7.2f\n", d1);
	printf("d2 => %7.2f\n", d2);
	printf("d3 => %7.2f\n", d3);
	printf("d4 => %7.2f\n", d4);

	y = x / 1000;
	printf("x의 1000의 자리값 %d / 100 = %d\n", x, y);
	y = x % 10;
	printf("x의 1의 자리값 %d %% 10 = %d\n", x, y);
	
	x = 11;
	printf("x의 10진수 값 : %d \n", x);
	printf("x의 10진수 값 : %5d \n", x);
	printf("x의 10진수 값 : %05d \n", x);
	printf("x의 10진수 값 : %-5d \n", x);
	printf("x의 10진수 값 : %+5d \n", x);
	printf("x의 16진수 값 : %x \n", x);
	printf("x의 16진수 값 : %#x \n", x);
	printf("x의 16진수 값 : %#8x \n", x);
	printf("x의 16진수 값 : %#08x \n", x);
	printf("x의 16진수 값 : %#08X \n", x);

	return 0;
}