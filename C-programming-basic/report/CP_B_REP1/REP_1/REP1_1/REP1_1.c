/* file : chartype.c */

#include <stdio.h>

int main(void)
{
	char alpa_a = 'a';
	char alpa_Z = 'Z';

	printf("변수 alph_a 문자           : %c\n", alpa_a);
	printf("변수 alph_a 코드(십진수)   : %d\n", alpa_a);
	printf("변수 alph_Z 문자           : %c\n", alpa_Z);
	printf("변수 alph_a 코드(십진수)   : %c\n", alpa_Z);
	printf("\n");
	printf("문자 %c의 코드값 :  %d\n", alpa_a + 1, alpa_a + 1);
	printf("문자 %c의 코드값 :  %d\n", alpa_Z - 1, alpa_Z - 1);

	return 0;
}