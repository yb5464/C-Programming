#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main(void)
{
	double a, b, c, dis;

	printf("계수 a를 입력하시오: ");
	scanf("%lf", &a);
	printf("계수 b를 입력하시오: ");
	scanf("%lf", &b);
	printf("계수 c를 입력하시오: ");
	scanf("%lf", &c);

	if (a == 0)
		printf("방정식의 근은 %f입니다.", -c / b);
	else
	{
		dis = b * b - 4.0 * a * c;
		if (dis > 0)
		{
			printf("방정식의 근은 %f입니다.\n", (-b + sqrt(dis)) / (2.0 * a));
			printf("방정식의 근은 %f입니다.\n", (-b - sqrt(dis)) / (2.0 * a));
		}
		else if (dis < 0)
		{
			printf("방정식의 근은 %f + %fi입니다.\n", (-b/2.0 * a), (sqrt(-dis)) / (2.0 * a));
			printf("방정식의 근은 %f - %fi입니다.\n", (-b/2.0 * a), (sqrt(-dis)) / (2.0 * a));
			//복소수를 표현하기 위해 실수 부분과 복소수 부분을 따로 계산
		}
		else
		{
			printf("방정식은 중근을 가지고\n");
			printf("방정식의 근은 %f입니다.\n", (-b / (2.0 * a)));
		}
			
	}

	return 0;
}