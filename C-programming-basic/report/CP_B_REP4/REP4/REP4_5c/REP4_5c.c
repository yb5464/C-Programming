#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int r, c, n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	for (r = 1; r <= n; r++) {
		for (c = 1; c <= r; c++)
			printf("%3d", c);
		printf("\n");
	}

	printf("--------------------------------\n");

	for (r = 1; r <= n; r++) {
		for (c = r; c >= 1; c--) {
			printf("%3d", c);
		}
		printf("\n");
	}

	return 0;
}