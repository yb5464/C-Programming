#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

int main(void)
{
	char * num_measure[] = { "0", "1", "��", "��", "��", "��", "��", "ĥ", "��", "��" };
	char * ten_measure[] = { "��", "��", "��"};
	char * num_value[20] = { 0 };

	int number = 0;
	int digit = 0;
	int ten_digit = 0;
	int cnt = 0;

	while (1) {
		printf("10000���� ���� ���� �ϳ��� �Է��ϼ���. -> ");
		scanf("%d", &number);

		if (number < 1000)
			break;
		else
			printf("���ڰ� 1000 �̻� �Դϴ�.\n");
	}

	while (number > 0) {

		digit = number % 10;
		number /= 10;

		if (ten_digit == 0 && digit == 1) {
			num_value[cnt++] = ten_measure[ten_digit];
			ten_digit++;
			num_value[cnt++] = " ";
			continue;
		}

		if (digit == 0) {
			ten_digit++;
			continue;
		}

		if (ten_digit != 0) {
			num_value[cnt++] = ten_measure[ten_digit];
		}

		if (digit != 1) {
			num_value[cnt++] = num_measure[digit];
		}

		num_value[cnt++] = " ";
		ten_digit++;

	}

	printf("�Է��� ������ [");
	for (int i = cnt - 2; i >= 0; i--) {
		printf("%s", num_value[i]);
	}
	printf("] �Դϴ�.\n");

	return 0;
}