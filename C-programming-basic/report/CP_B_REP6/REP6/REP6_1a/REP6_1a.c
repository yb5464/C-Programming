#include <stdio.h>

void print_line(int col);

int main(void)
{
	int i, k, n = 0;

	print_line(10);

	for (k = 1; k <= 10; k++) {

		printf("|");
		for (int i = 1; i <= 10; i++) {
			n++;
			printf("%3d ", n);
		}
		printf("|\n");

		print_line(10);
	}

	return 0;
}

void print_line(int col)
{
	printf("+");
	for (int i = 1; i <= col; i++) {
		printf("----");
	}
	printf("+\n");
}