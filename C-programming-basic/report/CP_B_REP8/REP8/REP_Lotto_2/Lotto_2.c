
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

int main(void)
{
	int i, j, temp, check_number, gen_count, count, win_count;
	int Lotto[6] = { 0, 0, 0, 0, 0, 0 };
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
	while (gen_count < 6) {

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
	printf("\n");

	win_count = 0;
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			if (Lotto[i] == MyLotto[j]) {
				win_number[win_count] = Lotto[i];
				win_count++;
			}
		}
	}

	printf("당첨번호 갯수  : %d \n", win_count);

	if (win_count == 0)
		printf("당첨된 번호    : 없음\n");
	else {
		printf("당첨된 번호    : ");
		for (i = 0; i < win_count; i++) {
			printf("%d ", win_number[i]);
		}
		printf("\n");
	}


	return 0;
}
