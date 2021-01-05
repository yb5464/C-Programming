#include <stdio.h>

int all_files;
static int all_files2; //static의 여부에 따라서 다른 파일에서 extern 접근을 시도할 때 성공여부가 결정된다.
// int all_files2;

extern void sub();

int main(void)
{
	sub();
	printf("%d \n", all_files);
	printf("%d \n", all_files2);

	return 0;
}