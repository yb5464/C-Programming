#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int input;
	int i = 0, j;

	printf("정수를 입력하시오: ");
	scanf("%d", &input);

	for (i = 0; i <= input; i++) {
		for (j = input; j > i; j--)
			printf("%3d", j);
		printf("\n");
	}

	return 0;
}