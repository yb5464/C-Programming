#include <stdio.h>
#pragma warning (disable:4996)
#define SIZE 11

int main(void)
{
	int freq[11] = { 0 };
	int i, score, cnt = 0;

	while (1) {
		printf("1에서 10까지 정수를 입력하시오(종료 -1): ");
		scanf("%d", &score);

		if (score < 0) {
			printf("음수를 입력했습니다.\n");
			break;
		}
		else if (score > 10) {
			printf("10보다 큰 수를 입력했습니다.\n");
		}
		else {
			cnt++;
			freq[score]++;
		}
	}

	printf(" 값     빈도  : 총 횟수 = %d\n", cnt);
	for (i = 1; i < SIZE; i++)
		printf("%3d   %3d \n", i, freq[i]);

	return 0;
}