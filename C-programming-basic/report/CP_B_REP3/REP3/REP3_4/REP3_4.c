#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	double height, weight, std_weight;

	printf("ü�߰� Ű�� �Է��ϼ���: ");
	scanf("%lf %lf", &weight, &height);

	std_weight = (height - 100) * 0.9;

	if (std_weight > weight)
		printf("��ü�� �Դϴ�.");
	else if (std_weight < weight)
		printf("��ü�� �Դϴ�.");
	else
		printf("���� �Դϴ�.");

	return 0;
}