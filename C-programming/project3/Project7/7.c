#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

typedef struct {
	int numerator;
	int denominator;
} fraction;

int gcd(int a, int b);

int main(void)
{
	fraction f1;
	fraction f2;
	fraction result;
	int cnt = 0;
	int gcd_num = 0;

	while (1) {
		printf("ù ��° �м��� �Է��� �ּ��� (����/�и�) -> ");
		scanf("%d/%d", &f1.numerator, &f1.denominator);
		printf("�� ��° �м��� �Է��� �ּ��� (����/�и�) -> ");
		scanf("%d/%d", &f2.numerator, &f2.denominator);

		if (f1.denominator == 0 || f2.denominator == 0)
			printf("�и� 0�� �ԷµǾ����ϴ�. �ٽ� �Է��� �ּ���.\n");
		else
			break;
	}

	result.denominator = f1.denominator * f2.denominator;
	result.numerator = f1.numerator * f2.numerator;

	printf("��� �� -> %d/%d\n", result.numerator, result.denominator);

	gcd_num = gcd(result.numerator, result.denominator);
	result.numerator /= gcd_num;
	result.denominator /= gcd_num;

	printf("��� �� ��� �� -> %d/%d\n", result.numerator, result.denominator);

	return 0;
}

int gcd(int a, int b)
{
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return abs(a);
}