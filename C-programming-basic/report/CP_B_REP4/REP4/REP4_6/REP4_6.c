#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int input;
	int i = 0, j;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &input);

	for (i = 0; i <= input; i++) {
		for (j = input; j > i; j--)
			printf("%3d", j);
		printf("\n");
	}

	return 0;
}