#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int i, n, sum; i = 0;
	int N;
	sum = 0;

	printf("�Է� ���� Ƚ���� ���Ͻÿ�: ");
	scanf("%d", &N);

	while (i < N)
	{
		printf("���� �Է��Ͻÿ�: ");
		scanf("%d", &n);

		sum = sum + n;
		i++;
	}
	printf("�հ�� %d�Դϴ�.\n", sum);
 
	return 0;
}