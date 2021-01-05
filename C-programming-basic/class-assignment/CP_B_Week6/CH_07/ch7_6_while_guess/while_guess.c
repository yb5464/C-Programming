#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int main(void)
{
	int answer = 0;
	int guess;
	int tries = 0;

	srand((unsigned)time(NULL));
	answer = rand() % 10 + 1;

	//반복구조
	do {
		printf("1~10 사이의 정답을 추측하여 보시오: ");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)
			printf("\t정답 보다 큰 값을 입력 하였습니다.\n");

		if (guess < answer)
			printf("\t정답 보다 작은 값을 입력 하였습니다.\n");
	} while (guess != answer);

	printf("\n축하합니다. 정답은 %d 입니다. (시도횟수 = %d)\n", answer, tries);

	return 0;
}