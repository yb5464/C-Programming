#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int x, y;
	printf("좌표(x y): ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
		printf("1 사분면");
	else if (x < 0 && y > 0)
		printf("2 사분면");
	else if (x < 0 && y < 0)
		printf("3 사분면");
	else if (x > 0 && y < 0)
		printf("4 사분면");
	else
		printf("축 위의 점 혹은 원점"); //x나 y에 0이 들어갔을 때 

	return 0;
}