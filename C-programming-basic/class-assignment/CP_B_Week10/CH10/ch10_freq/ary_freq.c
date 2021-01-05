#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main(void)
{
	int i = 0, score, cnt = 0;
	int freq[11] = { 0 };

	srand((unsigned)time(NULL));
	while (1) {
		score = rand() % 10 + 1;

		if (cnt == N)
			break;
		else
			freq[score]++;

		//printf("1에서 10까지 정수를 랜덤으로 생성합니다 : %d\n", score);

		cnt++;
	}
	for (i = 1; i <= 10; i++)
		printf("ary[%2d] = %3d \n", i, freq[i]);

	return 0;
}