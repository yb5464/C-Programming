//난수 생성 프로그램
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i, n = 10;

	srand(time(NULL));

	for (i = 0; i < n; i++)
		printf(" %6d\n", rand());

	return 0;
}