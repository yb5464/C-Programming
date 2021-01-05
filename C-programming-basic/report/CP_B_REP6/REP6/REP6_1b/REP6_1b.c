#include <stdio.h>

void print_line(int col);
void print_num(int col, int k);

int main(void)
{
	int i, k, n = 0;

	print_line(10);

	for (k = 1; k <= 10; k++) {
		print_num(10, k);
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

void print_num(int col, int r) {
	int n = 10 * (r - 1);

	printf("|");
	for (int i = 1; i <= col; i++) {
		n++;
		printf("%3d ", n);
	}
	printf("|\n");
}