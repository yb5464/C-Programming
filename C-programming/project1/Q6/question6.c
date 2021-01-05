#include <stdio.h>
#pragma warning (disable:4996)
#define PI 3.14

int main(void)
{
	float radius = 7.58;
	float perimeter = 0;		//둘레
	float area = 0;			//넓이

	perimeter = radius * 2 * PI;
	area = radius * radius * PI;

	printf("반지름이 %.2f인 원의 둘레와 넓이\n", radius);
	printf("둘레: %.2f\n넓이: %.2f\n", perimeter, area);

	return 0;
}