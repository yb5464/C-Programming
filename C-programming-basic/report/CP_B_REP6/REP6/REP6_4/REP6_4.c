#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#pragma warning (disable: 4996)

int main(void)
{
	int N;
	int i, max = 0, temp, cnt = 0;

	printf("�����ϰ��� �ϴ� ������ ������ �Է��Ͻÿ� : ");
	scanf("%d", &N);

	srand((unsigned)time(NULL));

	for (i = 1; i <= N; i++) {
		temp = rand() % 100 + 1;

		if (temp > max) {
			printf("%4d ��° ���� : ���� �ִ밪 = %3d ---> ���� �ִ밪 = %3d\n", i, max, temp);
			max = temp;
			cnt = i;
		}
	}

	printf("������ %d���� ���߿� ���� ū���� %d��°�� ������ %d�Դϴ�.\n", N, cnt, max);
	return 0;
}