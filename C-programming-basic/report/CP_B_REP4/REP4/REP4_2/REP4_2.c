#include <stdio.h>

int main(void) 
{
	int i, sum1 = 0, sum2 = 0, result;

	for (i = 1; i <= 100; i++) {
		sum1 = sum1 + i;
		sum2 = sum2 + i * i;
	}

	result = sum1 * sum1 - sum2;

	printf("1���� 100���� �ڿ����� ���� \"��������\"�� \"������ ��\"�� ���̴� %d�Դϴ�.\n", result);

	return 0;
}