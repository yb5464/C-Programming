//반복을 이용한 정수 합  프로그램
#include <stdio.h>

int main(void)
{
	int i, sum = 0;

	//printf("Test print ----------\n");

	for (i = 1; i <= 20; i++) {
		sum = sum + i;
		printf("i = %2d, sum = %2d \n", i, sum);
	}

	printf("1부터 20까지의 합은 %d 입니다.\n", sum);

	return 0;
}