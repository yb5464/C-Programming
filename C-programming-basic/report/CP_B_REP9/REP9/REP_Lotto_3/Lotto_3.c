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
		printf("[%d] �ζ� ��ȣ �Է�(1~45) : ", count + 1);
		scanf("%d", &temp);

		for (i = 0; i < 6; i++) {
			if (MyLotto[i] == temp) {
				printf("�ߺ��� ��ȣ�Դϴ�. �ٽ� �Է��ϼ��� : \n");
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
				printf("�ߺ��� ��ȣ�� �����Ǿ� �ֽ��ϴ�.\n");
				check_number = 0;
				break;
			}
		}


		if (check_number == 1) {
			Lotto[gen_count] = temp;
			gen_count++;
		}

	}

	printf("�ζ� ��÷ ��ȣ : ");
	for (i = 0; i < 6; i++) {
		printf("%d ", Lotto[i]);
	}
	printf(" + ���ʽ� %d", Lotto[6]);
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

	printf("��÷��ȣ ����  : %d \n", win_count);

	if (win_count == 0)
		printf("��÷�� ��ȣ    : ����\n");
	else {
		printf("��÷�� ��ȣ    : ");
		for (i = 0; i < win_count; i++) {
			printf("%d ", win_number[i]);
		}
	}

	if (win_count == 6)
		printf("\n�̹��� �ζ� ��÷ ��� 1���Դϴ�.");
	else if (win_count == 5 && BONUS == 1)
		printf("%d\n�̹��� �ζ� ��÷ ��� 2���Դϴ�.", Lotto[6]);
	else if (win_count == 5)
		printf("\n�̹��� �ζ� ��÷ ��� 3���Դϴ�.");
	else if (win_count == 4)
		printf("\n�̹��� �ζ� ��÷ ��� 4���Դϴ�.");
	else if (win_count == 3)
		printf("\n�̹��� �ζ� ��÷ ��� 5���Դϴ�.");
	else
		printf("\n�̹��� �ζ� ��÷ ��� ���Դϴ�.");

	return 0;
}
