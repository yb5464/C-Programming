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

	//�ݺ�����
	do {
		printf("1~10 ������ ������ �����Ͽ� ���ÿ�: ");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)
			printf("\t���� ���� ū ���� �Է� �Ͽ����ϴ�.\n");

		if (guess < answer)
			printf("\t���� ���� ���� ���� �Է� �Ͽ����ϴ�.\n");
	} while (guess != answer);

	printf("\n�����մϴ�. ������ %d �Դϴ�. (�õ�Ƚ�� = %d)\n", answer, tries);

	return 0;
}