//�ݺ��� �̿��� ���� ��  ���α׷�
#include <stdio.h>

int main(void)
{
	int i, sum = 0;

	//printf("Test print ----------\n");

	for (i = 1; i <= 20; i++) {
		sum = sum + i;
		printf("i = %2d, sum = %2d \n", i, sum);
	}

	printf("1���� 20������ ���� %d �Դϴ�.\n", sum);

	return 0;
}