// �׳� �ѹ� ���������� �õ�

#include <stdio.h>

int main(void)
{
	int i, k;

	//printf("������ �Է��Ͻÿ�: ")
	//scanf_s("%d", &n);
	//n = 100;

	for (i = 1; i <= 10; i++) {
		printf("----");
	}
	printf("\n");

	for (k = 1; k <= 10; k++) {
		for (i = 1; i <= 10; i++)
			printf("%3d ", (k - 1) * 10 + i);

		printf("\n");

		for (i = 1; i <= 10; i++) {
			printf("----"); //���ڸ� 3�� ũ�� + �����̽� 1���� 4ĭ���� �����ؼ� -�� 4��
		}
		printf("\n");
	}

	return 0;
}

