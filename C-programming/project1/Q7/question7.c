#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int id;
	int last_two_digit;
	int binary_digit[32];
	int index = 0;

	printf("�й��� �Է����ּ���: ");
	scanf("%d", &id);
	last_two_digit = id % 100;

	printf("10����: %d\n", last_two_digit);
	printf("16����: %x\n", last_two_digit);
	printf("8����: %o\n", last_two_digit);

	// 2������ ��쿡�� ��Ʈ �����ڸ� �̿��Ͽ� ��ȯ�ߴ�.
	while (last_two_digit > 0) {
		binary_digit[index++] = last_two_digit & 1;
		last_two_digit = last_two_digit >> 1;
	}
	
	printf("2����: ");
	for (int i = index - 1; i >= 0; i--)
		printf("%d", binary_digit[i]);
	printf("\n");

	return 0;
}