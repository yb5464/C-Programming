#include <stdio.h>
#pragma warning(disable:4996)
#define SEC_PER_MINUTE 60 // 1분 = 60초

int main(void)
{
	int input, minute, second;

	printf("초단위의 시간을 입력하시요:(32억초이하) ");
	scanf("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d초는 %d분 %d초입니다.\n", input, minute, second);

	return 0;
}
