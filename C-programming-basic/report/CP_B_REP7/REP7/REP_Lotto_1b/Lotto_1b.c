//������ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

int main(void)
{
	int i, j, gen_count = 0, count = 0;
	int Lotto[6] = { 0, 0, 0, 0, 0, 0 };
	int MyLotto[6] = { 0 };
	int win_number[6] = { 0 };

	for (i = 0; i < 6; i++) {
		printf("[%d] �ζ� ��ȣ �Է�(1~45) : ", i + 1);
		scanf("%d", &MyLotto[i]);
	}

	srand(time(NULL));
	for (i = 0; i < 6; i++) {
		Lotto[i] = rand() % 45 + 1;
	}

	printf("�ζ� ��ȣ ��÷ ��� : ");
	for (i = 0; i < 6; i++) {
		printf("%d ", Lotto[i]);
	}
	printf("\n");

	
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			if (Lotto[i] == MyLotto[j]) {
				win_number[count] = Lotto[i];
				count++;
			}
		}
	}

	printf("��÷��ȣ ���� : %d\n", count);
	
	printf("��÷�� ��ȣ : ");

	if (count == 0)
		printf("����");
	else {
		for (i = 0; i < count; i++) {
			printf("%d ", win_number[i]);
		}
	}
	

	printf("\n");
	return 0;
}
