#include <stdio.h>

int main(void)
{
	int i = 0x12345678;
	int* p;

	p = &i;
	printf("i  = %#010x \n", i);			//i�� ��
	printf("&i = %#010x \n\n", &i);			//i�� �ּ� ��


	printf("p  = %#010x \n", p);			//i�� �ּ� ��
	printf("&p = %#010x \n\n", &p);			//i�� �ּҰ� ����ִ� p �� �ּҰ�
	printf("*p = %#010x \n\n", *p);			//i�� ��

	return 0;
}