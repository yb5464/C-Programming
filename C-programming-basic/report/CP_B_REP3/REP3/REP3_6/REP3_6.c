#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main(void)
{
	double a, b, c, dis;

	printf("��� a�� �Է��Ͻÿ�: ");
	scanf("%lf", &a);
	printf("��� b�� �Է��Ͻÿ�: ");
	scanf("%lf", &b);
	printf("��� c�� �Է��Ͻÿ�: ");
	scanf("%lf", &c);

	if (a == 0)
		printf("�������� ���� %f�Դϴ�.", -c / b);
	else
	{
		dis = b * b - 4.0 * a * c;
		if (dis > 0)
		{
			printf("�������� ���� %f�Դϴ�.\n", (-b + sqrt(dis)) / (2.0 * a));
			printf("�������� ���� %f�Դϴ�.\n", (-b - sqrt(dis)) / (2.0 * a));
		}
		else if (dis < 0)
		{
			printf("�������� ���� %f + %fi�Դϴ�.\n", (-b/2.0 * a), (sqrt(-dis)) / (2.0 * a));
			printf("�������� ���� %f - %fi�Դϴ�.\n", (-b/2.0 * a), (sqrt(-dis)) / (2.0 * a));
			//���Ҽ��� ǥ���ϱ� ���� �Ǽ� �κа� ���Ҽ� �κ��� ���� ���
		}
		else
		{
			printf("�������� �߱��� ������\n");
			printf("�������� ���� %f�Դϴ�.\n", (-b / (2.0 * a)));
		}
			
	}

	return 0;
}