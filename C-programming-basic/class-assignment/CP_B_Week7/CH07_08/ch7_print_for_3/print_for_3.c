#include <stdio.h>

int main(void)
{
	int i, k, n;

	//printf("������ �Է��Ͻÿ�: ")
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
			printf("----"); //���ڸ� 3�� ũ�� + �����̽� 1���� 4ĭ���� �����ؼ� -�� 4��
		}
		printf("\n");
	}

	return 0;
}