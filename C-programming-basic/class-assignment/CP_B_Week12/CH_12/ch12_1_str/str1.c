#include <stdio.h>


int main(void)
{
	char str[] = "C language is easy";
	int i = 0;
	char* pc;

	while (str[i] != 0) { i++; }

	printf("���ڿ� \"%s\"�� ���̴� %d�Դϴ�.\n", str, i);

	printf("NULL = %d \n", NULL);
	printf("NULL = %d \n", '\0');

	pc = str;
	pc[0] = 'J';
	printf("%s\n", pc);

	pc = "ABCDEF";
	printf("%s\n", pc);

	//pc[0] = "Z";
	//printf("%s\n", pc);

	return 0;
}