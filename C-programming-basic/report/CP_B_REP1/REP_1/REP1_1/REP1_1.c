/* file : chartype.c */

#include <stdio.h>

int main(void)
{
	char alpa_a = 'a';
	char alpa_Z = 'Z';

	printf("���� alph_a ����           : %c\n", alpa_a);
	printf("���� alph_a �ڵ�(������)   : %d\n", alpa_a);
	printf("���� alph_Z ����           : %c\n", alpa_Z);
	printf("���� alph_a �ڵ�(������)   : %c\n", alpa_Z);
	printf("\n");
	printf("���� %c�� �ڵ尪 :  %d\n", alpa_a + 1, alpa_a + 1);
	printf("���� %c�� �ڵ尪 :  %d\n", alpa_Z - 1, alpa_Z - 1);

	return 0;
}