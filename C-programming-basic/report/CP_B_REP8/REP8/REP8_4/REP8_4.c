#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printarray(int g[4][4], int r, int c);

int main(void)
{
	int i, j;
	int x[4][4] = { 0 };

	srand(time(NULL));

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			x[i][j] = rand() % 10 + 1;

	printf("2차원 배열의 자료값은 다음과 같습니다.\n\n");
	printarray(x, 3, 3);

	for(i = 0; i< 3; i++)
		for ( j = 0; j < 3; j++){
			x[i][3] = x[i][3] + x[i][j];
			x[3][i] = x[3][i] + x[j][i];
			x[3][3] = x[3][3] + x[i][j];
		}

	printf("2차원 배열의 배열원소의 가로-세로 원소의 합은 다음과 같습니다.\n\n");
	printarray(x, 4, 4);

	return 0;
}

void printarray(int g[][4], int r, int c)
{
	int i, j;
	for (i = 0; i < r; i++){
		for (j = 0; j < c; j++)
			printf("%2d ", g[i][j]);
		printf("\n");
	}
	printf("\n");

}