#include <stdio.h>

void print_array(int ary[], int N);

int main(void)
{
	int list[] = { 3, 2, 9, 7, 1 };
	int i, temp, length;
	length = sizeof(list) / sizeof(list[0]);

	printf("Before sorting----------------------\n\n");
	print_array(list, length);

	for (i = 0; i < length - 1; i++) {
		if (list[i] > list[i + 1]) {
			temp = list[i];
			list[i] = list[i + 1];
			list[i + 1] = temp;
		}
	}

	printf("After sorting 1 --------------------\n\n");
	print_array(list, length);

	for (i = 0; i < length - 2; i++) {
		if (list[i] > list[i + 1]) {
			temp = list[i];
			list[i] = list[i + 1];
			list[i + 1] = temp;
		}
	}
	
	printf("After sorting 2 --------------------\n\n");
	print_array(list, length);

	for (i = 0; i < length - 3; i++) {
		if (list[i] > list[i + 1]) {
			temp = list[i];
			list[i] = list[i + 1];
			list[i + 1] = temp;
		}
	}

	printf("After sorting 3 --------------------\n\n");
	print_array(list, length);

	for (i = 0; i < length - 4; i++) {
		if (list[i] > list[i + 1]) {
			temp = list[i];
			list[i] = list[i + 1];
			list[i + 1] = temp;
		}
	}

	printf("After sorting 4 --------------------\n\n");
	print_array(list, length);


	return 0;
}

void print_array(int ary[], int N)
{
	for (int i = 0; i < N; i++)
		printf("%d ", ary[i]);
	printf("\n\n");
}
