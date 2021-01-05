#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#pragma warning (disable: 4996)

int main(void)
{
	int N;
	int i, max = 0, temp, cnt = 0;

	printf("생성하고자 하는 숫자의 갯수를 입력하시오 : ");
	scanf("%d", &N);

	srand((unsigned)time(NULL));

	for (i = 1; i <= N; i++) {
		temp = rand() % 100 + 1;

		if (temp > max) {
			printf("%4d 번째 난수 : 이전 최대값 = %3d ---> 지금 최대값 = %3d\n", i, max, temp);
			max = temp;
			cnt = i;
		}
	}

	printf("생성한 %d개의 값중에 가장 큰수는 %d번째로 생성된 %d입니다.\n", N, cnt, max);
	return 0;
}