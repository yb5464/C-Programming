#include <stdio.h>
#pragma warning (disable: 4996)
#define SIZE 10

int main(void)
{
	int key, i, find, result;
	int list[SIZE] = { 3, 1, 6, 8, 4, 2, 7, 5, 9 };

	printf("Ž���� ���� �Է��Ͻÿ� : ");
	scanf("%d", &key);

	find = 0;
	for(i = 0; i < SIZE; i++)
		if (list[i] == key) {
			find = 1;
			result = i;
			break;
		}

	if (find == 1)
		printf("Ž�� ���� �ε���= %d\n", i);
	else
		printf("Ž�� ����\n");

	return 0;
}