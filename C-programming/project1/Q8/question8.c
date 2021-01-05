#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int init_money = 100000;
	float interest = 0.023;
	int years = 9;
	float result = 0;

	result = init_money * (1 + interest * years);

	printf("원금은 %d원이고 예치 기간은 %d년 입니다.\n\n", init_money, years);
	printf("만기시 총 수령액은 %.2f원 입니다.\n", result);

	return 0;
}