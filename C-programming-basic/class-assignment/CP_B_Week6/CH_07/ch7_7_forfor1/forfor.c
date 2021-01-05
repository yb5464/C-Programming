#include <stdio.h>

int main(void)
{
	int x, y, a = 0, b = 0, c = 0;

	for (y = 0; y < 5; y++) {
		for (x = 0; x < 10; x++)
			printf("*");
		printf("\n");
	}
	printf("\n");

	for (x = 1; x <= 5; x++) {
		for (y = 1; y <= x; y++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}