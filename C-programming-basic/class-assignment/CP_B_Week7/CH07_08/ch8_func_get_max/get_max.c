#include <stdio.h>
#pragma warning(disable:4996)
int get_max(int x, int y);

int main(void)
{
	int a, b;
	printf("두개의 정수를 입력하시오: ");
	scanf("%d %d", &a, &b);
	printf("두수 중에서 큰 수는 %d입니다.", get_max(a, b));
	return 0;
}

int get_max(int x, int y)
{
	if (x > y) return x;
	else return y;
}