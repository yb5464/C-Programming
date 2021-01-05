#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

int main(void)
{
	int i, j, temp, check_number, gen_count, count, win_count, BONUS = 0;
	int Lotto[7] = { 0 };
	int MyLotto[6] = { 0 };
	int win_number[6] = { 0 };

	count = 0;

	while (count < 6) {
		check_number = 1;
		printf("[%d] 로또 번호 입력(1~45) : ", count + 1);
		scanf("%d", &temp);

		for (i = 0; i < 6; i++) {
			if (MyLotto[i] == temp) {
				printf("중복된 번호입니다. 다시 입력하세요 : \n");
				check_number = 0;
				break;
			}
		}

		if (check_number == 1) {
			MyLotto[count] = temp;
			count++;
		}

	}

	srand(time(NULL));
	gen_count = 0;
	while (gen_count < 7) {

		check_number = 1;
		temp = rand() % 45 + 1;

		for (i = 0; i < 6; i++) {
			if (Lotto[i] == temp) {
				printf("중복된 번호가 생성되어 있습니다.\n");
				check_number = 0;
				break;
			}
		}


		if (check_number == 1) {
			Lotto[gen_count] = temp;
			gen_count++;
		}

	}

	printf("로또 추첨 번호 : ");
	for (i = 0; i < 6; i++) {
		printf("%d ", Lotto[i]);
	}
	printf(" + 보너스 %d", Lotto[6]);
	printf("\n\n");

	win_count = 0;
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			if (Lotto[i] == MyLotto[j]) {
				win_number[win_count] = Lotto[i];
				win_count++;
			}
		}
		
		if (MyLotto[i] == Lotto[6])
			BONUS = 1;
	}

	printf("당첨번호 갯수  : %d \n", win_count);

	if (win_count == 0)
		printf("당첨된 번호    : 없음\n");
	else {
		printf("당첨된 번호    : ");
		for (i = 0; i < win_count; i++) {
			printf("%d ", win_number[i]);
		}
	}

	if (win_count == 6)
		printf("\n이번주 로또 추첨 결과 1등입니다.");
	else if (win_count == 5 && BONUS == 1)
		printf("%d\n이번주 로또 추첨 결과 2등입니다.", Lotto[6]);
	else if (win_count == 5)
		printf("\n이번주 로또 추첨 결과 3등입니다.");
	else if (win_count == 4)
		printf("\n이번주 로또 추첨 결과 4등입니다.");
	else if (win_count == 3)
		printf("\n이번주 로또 추첨 결과 5등입니다.");
	else
		printf("\n이번주 로또 추첨 결과 꽝입니다.");

	return 0;
}
