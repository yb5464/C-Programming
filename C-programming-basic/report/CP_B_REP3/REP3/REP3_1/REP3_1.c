#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int input, minute, second, hour, sec_input;

	printf("�ʴ����� �ð��� �Է��Ͻÿ�:(32��������) ");
	scanf("%d", &input);
	
	sec_input = input;
	hour = input / 3600;
	input %= 3600;
	minute = input / 60;
	input %= 60;
	second = input;

	printf("%d�ʴ� %d�ð� %d�� %d���Դϴ�.\n", sec_input, hour, minute, second);
	return 0;
}