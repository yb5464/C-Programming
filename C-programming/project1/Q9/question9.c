#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int id;
	int year;
	int calendar[12] = { 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("�й��� �Է����ּ���: ");
	scanf("%d", &id);

	// �й��� ������ ���ڸ��� �Է¹޴´�.
	year = id % 1000;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		calendar[1] = 29;
		printf("�ش� �⵵�� �����Դϴ�.\n");
		for (int i = 0; i < 12; i++) {
			printf("%2d���� ������ %d�� �Դϴ�.\n", i + 1, calendar[i]);
		}
	}
	else {
		calendar[1] = 28;
		printf("�ش� �⵵�� ����Դϴ�.\n");
		for (int i = 0; i < 12; i++) {
			printf("%2d���� ������ %d�� �Դϴ�.\n", i + 1, calendar[i]);
		}
	}

	return 0;
}