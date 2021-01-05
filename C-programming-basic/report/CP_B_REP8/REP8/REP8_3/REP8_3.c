#include <stdio.h>
#define ROWS 3
#define COLS 3

void print_array(int ary[][3], int ROW, int COL);

int main(void)
{
	int matA[ROWS][COLS] = { {2, 3, 0}, 
							{8, 9, 1}, 
							{7, 0, 5} };

	int matB[ROWS][COLS] = { {1, 0, 0}, 
							{1, 0, 0}, 
							{1, 0, 0} };

	int matC[ROWS][COLS];
	int r, c;

	printf("matA : \n");
	print_array(matA, ROWS, COLS);	
	
	printf("matB : \n");
	print_array(matB, ROWS, COLS);

	//두개의 행렬을 더한다.
	for (r = 0; r < ROWS; r++)
		for (c = 0; c < COLS; c++)
			matC[r][c] = matA[r][c] + matB[r][c];

	//matC 행렬을 출력한다.
	printf("macC : \n");
	print_array(matC, ROWS, COLS);

	return 0;
}


void print_array(int ary[][3], int ROW, int COL)
{
	int r, c;
	for (r = 0; r < ROW; r++) {
		for (c = 0; c < COL; c++)
			printf("%d ", ary[r][c]);
		printf("\n");
	}
}