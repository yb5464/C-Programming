#include <stdio.h>

void print_array(int ary[], int N);

int main(void)
{
	int list[] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5};
	int i, j, temp, length;
	length = sizeof(list) / sizeof(list[0]);

	printf("Before sorting    : ");
	print_array(list, length);

	for (i = 0; i < length - 1; i++) {
		for (j = 0; j < length - i - 1; j++) {
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}

		printf("After sorting <%d> : ", i + 1);
		print_array(list, length);
	}

	return 0;
}

void print_array(int ary[], int N)
{
	for (int i = 0; i < N; i++)
		printf("%2d ", ary[i]);
	printf("\n\n");
}