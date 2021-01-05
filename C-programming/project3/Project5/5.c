#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

char op[3][5] = { "가위", "바위", "보" };

int main(void)
{
	srand((unsigned)time(NULL));

	int num = 0;
	int computer_choice = 0;

	printf("가위(0) 바위(1) 보(2) 중에서 하나 입력 -> ");
	scanf("%d", &num);

	num %= 3; //0,1,2 이 외의 숫자가 입력되더라도 프로그램이 실행되도록 함

	computer_choice = rand() % 3;

	printf("당신은 %s이고, 시스템은 %s입니다.\n\n", op[num], op[computer_choice]);

	if (num == computer_choice) {
		printf("비겼습니다.\n");
	}
	else {
		if (num == 0) {
			if (computer_choice == 2)
				printf("당신의 승리입니다.\n");
			else
				printf("시스템의 승리입니다.\n");
		}
		else if (num == 1) {
			if (computer_choice == 0)
				printf("당신의 승리입니다.\n");
			else
				printf("시스템의 승리입니다.\n");
		}
		else {
			if (computer_choice == 1)
				printf("당신의 승리입니다.\n");
			else
				printf("시스템의 승리입니다.\n");
		}
	}

	return 0;
}