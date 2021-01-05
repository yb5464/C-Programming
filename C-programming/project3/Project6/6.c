#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

void setNumber();
void printHead();
void printHigher(int answer);
void printLower(int answer);
void printAnswer(int option);

static int min = 1;
static int max = 100;
static int trycount = 1;
int number;

int main(void)
{
	srand((unsigned)time(NULL));
	int answer = 0;

	setNumber();
	printHead();

	while (1) {
		if (trycount > 5) {
			break;
		}

		scanf("%d", &answer);
		if (answer > 0 && answer < 101) {
			trycount++;
			if (answer > number)
				printLower(answer);
			else if (answer < number)
				printHigher(answer);
			else {
				printAnswer(1);
				break;
			}
		}
		else
			printf("1~100 ���� ���ڸ� �Է��ϼ���\n");
	}
	return 0;
}

void printHigher(int answer) {
	printf("\n���߾�� �� ������ �Է��� ���� %d ���� Ů�ϴ�.\n", answer);
	if (min < answer)
		min = answer;
	if (trycount < 6)
		printf("%d ���� %d ������ ������ �ٽ� �Է��ϼ���. (�õ�: %d) > ", min, max, trycount);
	else printAnswer(0);
}

void printLower(int answer) {
	printf("\n���߾�� �� ������ �Է��� ���� %d ���� �۽��ϴ�.\n", answer);
	if(max > answer)
		max = answer;
	if (trycount < 6)
		printf("%d ���� %d ������ ������ �ٽ� �Է��ϼ���. (�õ�: %d) > ", min, max, trycount);
	else printAnswer(0);
}

void printHead() {
	printf("%d ���� %d ������ ������ ���õǾ����ϴ�.\n", min, max);
	printf("�� ������ ���߾� ������? (�õ�: %d) > ", trycount);
}

void setNumber() {
	number = rand() % 100 + 1;
}

void printAnswer(int option) {
	if (option) {
		printf("\n�����մϴ�! ������ %d �Դϴ�.\n", number);
		printf("�� %d �� ���� ������ ���߼̽��ϴ�.\n", trycount - 1);
	}
	else {
		printf("\n��� ��ȸ�� �����Ǿ����ϴ�. ���� %d �����ϴ�\n", number);
	}
}