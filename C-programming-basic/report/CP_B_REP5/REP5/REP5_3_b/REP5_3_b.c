//b while문 조건으로 빠져 나올 경우에 대해 후처리를 해준 경우

#include <stdio.h>

int main(void)
{
	int N = 1000000;
	int F0 = 1, F1 = 2, F_new = 0, result = 0, cnt = 2;
	int sum = F0; //합들을 저장할 변수. F0도 홀수이기 때문에 처음부터 저장
	printf("F[1] = %d\n", F0);
	printf("F[2] = %d\n", F1);

	while (F_new <= 1000000)
	{
		F_new = F0 + F1;

		if (F_new % 2 == 1)
			sum = sum + F_new;

		F0 = F1;
		F1 = F_new;
		cnt = cnt + 1;
		printf("F[%d] = %d\n", cnt, F_new);
	}

	sum = sum - F_new; //후처리

	printf("\n홀수이면서 %d이하의 모든항을 더하면 %d 입니다.\n", N, sum);

	return 0;
}