#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int year;
	printf("�⵵ �Է� : "); scanf("%d", &year);
	printf("%d���� ", year);

	// 2008 �� 12�� ���� �������� ���� �����Ѵ�.
	switch (year % 12) {
		case 0:
			printf("�����̶� �Դϴ�.");
			break;
		case 1:
			printf("�߶� �Դϴ�.");
			break;
		case 2:
			printf("���� �Դϴ�.");
			break;
		case 3:
			printf("������ �Դϴ�.");
			break;
		case 4:
			printf("��� �Դϴ�.");
			break;
		case 5:
			printf("�Ҷ� �Դϴ�.");
			break;
		case 6:
			printf("ȣ���̶� �Դϴ�.");
			break;
		case 7:
			printf("�䳢�� �Դϴ�.");
			break;
		case 8:
			printf("��� �Դϴ�.");
			break;
		case 9:
			printf("��� �Դϴ�.");
			break;
		case 10:
			printf("���� �Դϴ�.");
			break;
		case 11:
			printf("��� �Դϴ�.");
			break;
	}
	printf("\n");

	return 0;
}