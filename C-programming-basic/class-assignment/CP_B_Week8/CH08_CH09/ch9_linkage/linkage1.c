#include <stdio.h>

int all_files;
static int all_files2; //static�� ���ο� ���� �ٸ� ���Ͽ��� extern ������ �õ��� �� �������ΰ� �����ȴ�.
// int all_files2;

extern void sub();

int main(void)
{
	sub();
	printf("%d \n", all_files);
	printf("%d \n", all_files2);

	return 0;
}