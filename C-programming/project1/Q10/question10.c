#include <stdio.h>
#pragma warning (disable:4996)
#define HEIGHT 8

int main(void)
{
	for (int i = 0; i < HEIGHT; i++) {

		for (int j = 0; j < HEIGHT - i; j++) {
			printf(" ");
		}
		for (int k = i; k > 0 ; k--) {
			printf("%d", k);
		}
		for (int m = 0; m <= i; m++) {
			printf("%d", m);
		}
		printf("\n");
	}

	return 0;
}