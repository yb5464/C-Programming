#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int id;
	int last_two_digit;
	int binary_digit[32];
	int index = 0;

	printf("학번을 입력해주세요: ");
	scanf("%d", &id);
	last_two_digit = id % 100;

	printf("10진수: %d\n", last_two_digit);
	printf("16진수: %x\n", last_two_digit);
	printf("8진수: %o\n", last_two_digit);

	// 2진수의 경우에는 비트 연산자를 이용하여 변환했다.
	while (last_two_digit > 0) {
		binary_digit[index++] = last_two_digit & 1;
		last_two_digit = last_two_digit >> 1;
	}
	
	printf("2진수: ");
	for (int i = index - 1; i >= 0; i--)
		printf("%d", binary_digit[i]);
	printf("\n");

	return 0;
}