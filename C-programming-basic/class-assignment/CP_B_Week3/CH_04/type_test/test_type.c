#include <stdio.h>

int main(void)
{
	char c = 'A';
	char s = 127;
	unsigned char us = 255;
	int i = 0;

	float f = 1.1234567890123456789F;  //�Ҽ��� ���� 6�ڸ����� ǥ���� ����
	double d = 1.1234567890123456789; //�Ҽ��� ���� 15�ڸ����� ǥ���� ����

	printf("char ���� \t\t s = %d \n", s);
	printf("unsigned char ���� \t us = %d \n\n", us);

	s = s - 1;
	printf("s = s - 1 ���� ���� \t s = %d \n\n", s);

	s = s + 2;
	printf("s = s + 2 ���� ���� \t s = %d \n\n", s);

	us = us + 1;
	printf("us = us + 1 ���� ���� \t us = %d \n\n", us);

	printf("�ڷ����� float       : %20.18f : �Ҽ��� 6�ڸ����� ��ȿ\n", f);
	printf("�ڷ����� double      : %20.18f : �Ҽ��� 15�ڸ����� ��ȿ\n\n", d);

	printf("char ���� \t\t c = %c, %d \n", c, c);
	c = c + 1;
	printf("c = c + 1 ���� ���� \t c = %c, %d \n\n", c, c);

	return 0;
}