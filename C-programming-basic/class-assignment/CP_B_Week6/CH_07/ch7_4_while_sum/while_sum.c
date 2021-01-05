#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int i, n, sum; i = 0;
	int N;
	sum = 0;

	printf("입력 받을 횟수를 정하시오: ");
	scanf("%d", &N);

	while (i < N)
	{
		printf("값을 입력하시오: ");
		scanf("%d", &n);

		sum = sum + n;
		i++;
	}
	printf("합계는 %d입니다.\n", sum);
 
	return 0;
}