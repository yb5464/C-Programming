#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int year, result;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	printf("result = %d\n", result);

	return 0;
}