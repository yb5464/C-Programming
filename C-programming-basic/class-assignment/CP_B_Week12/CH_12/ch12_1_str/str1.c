#include <stdio.h>


int main(void)
{
	char str[] = "C language is easy";
	int i = 0;
	char* pc;

	while (str[i] != 0) { i++; }

	printf("문자열 \"%s\"의 길이는 %d입니다.\n", str, i);

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