#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

void printArray1(int g[10][10], int r, int c);

int main(void)
{
	int i, j, r, c;
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
	
	for(i = 0; i < r; i++)
		for (j = 0; j < c; j++) {
			x[i][c] = x[i][c] + x[i][j];
			x[r][j] = x[r][j] + x[i][j];
			x[r][c] = x[r][c] + x[i][j];
		}

	printf("\n2���� �迭�� �迭������ ����-�������� ������ �����ϴ�.\n");
	printArray1(x, r+1, c+1);

	return 0;
}

void printArray1(int g[][10], int r, int c)
{
	int i, j;
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++)
			printf("%2d ", g[i][j]);
		printf("\n");
	}
	printf("\n");
}