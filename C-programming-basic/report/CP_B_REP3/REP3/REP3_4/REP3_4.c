#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	double height, weight, std_weight;

	printf("체중과 키를 입력하세요: ");
	scanf("%lf %lf", &weight, &height);

	std_weight = (height - 100) * 0.9;

	if (std_weight > weight)
		printf("저체중 입니다.");
	else if (std_weight < weight)
		printf("과체중 입니다.");
	else
		printf("정상 입니다.");

	return 0;
}