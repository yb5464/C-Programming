#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int x, y, z, max;

	printf("정수1 입력 : ");  scanf("%d", &x);
	printf("정수2 입력 : ");  scanf("%d", &y);
	printf("정수3 입력 : ");  scanf("%d", &z);

	max = x;
	if (max < y)
		max = y;
	if (max < z)
		max = z;

	printf("입력한 정수 중에서 가장 큰 수는 %d입니다.\n", max);

	return 0;
}