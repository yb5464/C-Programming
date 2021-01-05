#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

void printArray1(int g[10][10], int r, int c);
void print_line(int col);
void print_plus(int n);
void print_slash(void);

int r = 0;
int c = 0;

int main(void)
{
	int i, j;
	int x[10][10] = { 0 };

	printf("2���� �迭�� row���� �Է��Ͻÿ� (row < 10) r = ");
	scanf("%d", &r);
	printf("2���� �迭�� col���� �Է��Ͻÿ� (row < 10) c = ");
	scanf("%d", &c);

	srand(time(NULL));
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			x[i][j] = rand() % 10 + 1;
	

	printf("\n2���� �迭�� �ڷᰪ�� ������ �����ϴ�.\n");
	printArray1(x, r, c);

	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++) {
			x[i][c] = x[i][c] + x[i][j];
			x[r][j] = x[r][j] + x[i][j];
			x[r][c] = x[r][c] + x[i][j];
		}

	printf("\n2���� �迭�� �迭������ ����-�������� ������ �����ϴ�.\n");
	printArray1(x, r + 1, c + 1);

	return 0;
}


void printArray1(int g[][10], int row, int col)
{
	int i, j;

	if (r < row) {

		print_line(col);

		for (i = 0; i < row - 1; i++) {
			print_slash();
			for (j = 0; j < col - 1; j++)
				printf("%3d ", g[i][j]);
			print_slash();
			printf("%3d ", g[i][col - 1]);
			print_slash();
			printf("\n");
		}

		print_line(col);

		print_slash();
		for (j = 0; j < col - 1; j++)
			printf("%3d ", g[row - 1][j]);

		print_slash();
		printf("%3d ", g[row - 1][col - 1]);
		print_slash();
		printf("\n");

		print_line(col);

	}
	else {
		print_line(col);

		for (i = 0; i < row; i++) {
			print_slash();

			for (j = 0; j < col; j++)
				printf("%3d ", g[i][j]);
			print_slash();
			printf("\n");
		}

		print_line(col);
	}
}

void print_line(int col)
{
	if (c < col)
	{
		print_plus(0);
		for (int i = 0; i < col - 1; i++) {
			printf("----");
		}
		print_plus(0);
		printf("----");
		print_plus(1);
	}
	else
	{
		print_plus(0);
		for (int i = 0; i < col; i++) {
			printf("----");
		}
		print_plus(1);
	}
}

void print_plus(int n)
{
	if (n == 1)
		printf("+\n");
	else
		printf("+");
}

void print_slash()
{
	printf("|");
}