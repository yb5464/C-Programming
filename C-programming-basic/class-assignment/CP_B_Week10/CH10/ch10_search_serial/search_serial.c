#include <stdio.h>
#pragma warning (disable: 4996)
#define SIZE 10

int main(void)
{
	int key, i, find, result;
	int list[SIZE] = { 3, 1, 6, 8, 4, 2, 7, 5, 9 };

	printf("탐색할 값을 입력하시오 : ");
	scanf("%d", &key);

	find = 0;
	for(i = 0; i < SIZE; i++)
		if (list[i] == key) {
			find = 1;
			result = i;
			break;
		}

	if (find == 1)
		printf("탐색 성공 인덱스= %d\n", i);
	else
		printf("탐색 실패\n");

	return 0;
}