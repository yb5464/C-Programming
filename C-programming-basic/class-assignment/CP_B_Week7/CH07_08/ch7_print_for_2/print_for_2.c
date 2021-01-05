#include <stdio.h>

int main(void)
{
	int i, k, n;

	//printf("정수를 입력하시오: ")
	//scanf_s("%d", &n);
	n = 100;

	for (i = 1; i <= n; i++) {
		printf("%3d ", i);
		if (i % 10 == 0)
			printf("\n");
	}

	return 0;
}