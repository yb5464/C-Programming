#include <stdio.h>
#pragma warning (disable:4996)
#define SIZE 11

int main(void)
{
	int freq[11] = { 0 };
	int i, score, cnt = 0;

	while (1) {
		printf("1���� 10���� ������ �Է��Ͻÿ�(���� -1): ");
		scanf("%d", &score);

		if (score < 0) {
			printf("������ �Է��߽��ϴ�.\n");
			break;
		}
		else if (score > 10) {
			printf("10���� ū ���� �Է��߽��ϴ�.\n");
		}
		else {
			cnt++;
			freq[score]++;
		}
	}

	printf(" ��     ��  : �� Ƚ�� = %d\n", cnt);
	for (i = 1; i < SIZE; i++)
		printf("%3d   %3d \n", i, freq[i]);

	return 0;
}