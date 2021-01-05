#include <stdio.h>
int square(int n);

int main(void)
{
	int i, result;

	for (i = 1; i <= 5; i++) {
		result = square(i);
		printf("%d : %3d -----", i, result);
		printf("%3d \n", square(i));
	}
	return 0;
}
	
int square(int n)
{
	int r = n * n;
	return r;
}