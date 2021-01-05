#include <stdio.h>

int main(void)
{
	int N = 1000000;
	int F0 = 1, F1 = 2, F_new = 0, result = 0, cnt = 2;
	printf("F[1] = %d\n", F0);
	printf("F[2] = %d\n", F1);

	while (1)
	{
		F_new = F0 + F1;
		if (F_new >= N)
			break;

		F0 = F1;
		F1 = F_new;
		cnt = cnt + 1;
		printf("F[%d] = %d\n", cnt, F_new);
	}

	return 0;
}