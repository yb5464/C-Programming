//a while 문 안에서 1000000을 넘으면 break문으로 중도에 빠져나오는 프로그램

#include <stdio.h>

int main(void)
{
	int N = 1000000;
	int F0 = 1, F1 = 2, F_new = 0, result = 0, cnt = 2;
	int sum = F0; //합들을 저장할 변수. F0도 홀수이기 때문에 처음부터 저장
	printf("F[1] = %d\n", F0);
	printf("F[2] = %d\n", F1);

	while (1)
	{
		F_new = F0 + F1;
		if (F_new >= N)
			break;

		if (F_new % 2 == 1)
			sum = sum + F_new;

		F0 = F1;
		F1 = F_new;
		cnt = cnt + 1;
		printf("F[%d] = %d\n", cnt, F_new);
	}

	printf("\n홀수이면서 %d이하의 모든항을 더하면 %d 입니다.\n", N, sum);

	return 0;
}