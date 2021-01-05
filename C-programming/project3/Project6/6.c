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
			printf("1~100 사이 숫자를 입력하세요\n");
	}
	return 0;
}

void printHigher(int answer) {
	printf("\n맞추어야 할 정수가 입력한 정수 %d 보다 큽니다.\n", answer);
	if (min < answer)
		min = answer;
	if (trycount < 6)
		printf("%d 에서 %d 사이의 정수를 다시 입력하세요. (시도: %d) > ", min, max, trycount);
	else printAnswer(0);
}

void printLower(int answer) {
	printf("\n맞추어야 할 정수가 입력한 정수 %d 보다 작습니다.\n", answer);
	if(max > answer)
		max = answer;
	if (trycount < 6)
		printf("%d 에서 %d 사이의 정수를 다시 입력하세요. (시도: %d) > ", min, max, trycount);
	else printAnswer(0);
}

void printHead() {
	printf("%d 에서 %d 사이의 정수가 선택되었습니다.\n", min, max);
	printf("이 정수를 맞추어 보세요? (시도: %d) > ", trycount);
}

void setNumber() {
	number = rand() % 100 + 1;
}

void printAnswer(int option) {
	if (option) {
		printf("\n축하합니다! 정답은 %d 입니다.\n", number);
		printf("총 %d 번 만에 정답을 맞추셨습니다.\n", trycount - 1);
	}
	else {
		printf("\n모든 기회가 소진되었습니다. 답은 %d 였습니다\n", number);
	}
}