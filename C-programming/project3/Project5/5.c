#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

char op[3][5] = { "����", "����", "��" };

int main(void)
{
	srand((unsigned)time(NULL));

	int num = 0;
	int computer_choice = 0;

	printf("����(0) ����(1) ��(2) �߿��� �ϳ� �Է� -> ");
	scanf("%d", &num);

	num %= 3; //0,1,2 �� ���� ���ڰ� �ԷµǴ��� ���α׷��� ����ǵ��� ��

	computer_choice = rand() % 3;

	printf("����� %s�̰�, �ý����� %s�Դϴ�.\n\n", op[num], op[computer_choice]);

	if (num == computer_choice) {
		printf("�����ϴ�.\n");
	}
	else {
		if (num == 0) {
			if (computer_choice == 2)
				printf("����� �¸��Դϴ�.\n");
			else
				printf("�ý����� �¸��Դϴ�.\n");
		}
		else if (num == 1) {
			if (computer_choice == 0)
				printf("����� �¸��Դϴ�.\n");
			else
				printf("�ý����� �¸��Դϴ�.\n");
		}
		else {
			if (computer_choice == 1)
				printf("����� �¸��Դϴ�.\n");
			else
				printf("�ý����� �¸��Դϴ�.\n");
		}
	}

	return 0;
}