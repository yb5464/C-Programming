//����

#include <stdio.h>
#pragma warning (disable: 4996)
#define length 10

int main(void)
{
	int k, i, sum = 0;
	int data[length] = { 0 };

	for (i = 0; i < length; i++) {
		printf("%d ������ �Է��Ͻÿ� : ", i + 1);
		scanf("%d", &data[i]);
	}

	printf("�Է��� ������ : ");
	for (i = 0; i < length; i++) {
		printf("%d", data[i]);
		sum = sum + data[i];
	}

	printf("�̰� ����� %lf�Դϴ�.\n\n", (double)sum / length);

	printf("�������� �Է��Ͻÿ�(1 - %d) : ", length);
	scanf("%d", &k);

	printf("\n�Է��� ������ %d��° �Է��� ���� %d �Դϴ�.\n\n", k, data[k - 1]);

	return 0;
}