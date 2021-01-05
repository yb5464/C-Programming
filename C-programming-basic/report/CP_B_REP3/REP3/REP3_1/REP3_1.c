#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int input, minute, second, hour, sec_input;

	printf("초단위의 시간을 입력하시요:(32억초이하) ");
	scanf("%d", &input);
	
	sec_input = input;
	hour = input / 3600;
	input %= 3600;
	minute = input / 60;
	input %= 60;
	second = input;

	printf("%d초는 %d시간 %d분 %d초입니다.\n", sec_input, hour, minute, second);
	return 0;
}