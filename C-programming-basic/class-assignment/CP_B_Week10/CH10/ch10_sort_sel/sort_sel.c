#include <stdio.h>
void print_array(int ary[], int N);

int main(void)
{
	//int list[] = {3, 2, 9, 7, 1, 4, 8, 0, 6, 5};
	int list[] = { 3, 2, 9, 7, 1 };
	int i, j, temp, least, SIZE;
	SIZE = sizeof(list) / sizeof(list[0]);

	printf("< Before sorting > ");
	print_array(list, SIZE);

	for (i = 0; i < SIZE - 1; i++) {
		least = i;

		printf("<%d> �ּҰ� ã�� : ", i + 1);
		for (j = i + 1; j < SIZE; j++) {
			if (list[j] < list[least])
				least = j;
		}

		printf(" �ּҰ� �ε���(least) = %d, After sorting : ", least);

		temp = list[i];
		list[i] = list[least];
		list[least] = temp;

		print_array(list, SIZE);
	}

	return 0;
}

void print_array(int ary[], int N)
{
	for (int i = 0; i < N; i++)
		printf("%d ", ary[i]);
	printf("\n\n");
}