#include <stdio.h>

int main(void)
{
	int i, k, n;

	//printf("정수를 입력하시오: ")
	//scanf_s("%d", &n);
	//n = 100;
	n = 0;

	for (i = 1; i <= 10; i++) {
		printf("----");
	}
	printf("\n");

	for (k = 1; k <= 10; k++) {
		for (i = 1; i <= 10; i++) {
			n++;
			printf("%3d ", n);
		}
		printf("\n");

		for (i = 1; i <= 10; i++) {
			printf("----"); //숫자를 3개 크기 + 스페이스 1개로 4칸으로 지정해서 -가 4개
		}
		printf("\n");
	}

	return 0;
}