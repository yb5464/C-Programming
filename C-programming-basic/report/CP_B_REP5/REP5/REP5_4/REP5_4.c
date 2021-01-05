#include <stdio.h>

int main(void)
{
	int i, k, n;

	n = 0;

	for (k = 1; k <= 10; k++) {
		printf("+");
		for (i = 1; i <= 10; i++) {
			printf("----");
		}
		printf("+\n");
		

		printf("|");
		for (i = 1; i <= 10; i++) {
			n++;
			printf("%3d ", n);
		}
		printf("|\n");
	}
	
	printf("+");
	for (i = 1; i <= 10; i++) {
		printf("----");
	}
	printf("+\n");

	return 0;
}