//b while�� �������� ���� ���� ��쿡 ���� ��ó���� ���� ���

#include <stdio.h>

int main(void)
{
	int N = 1000000;
	int F0 = 1, F1 = 2, F_new = 0, result = 0, cnt = 2;
	int sum = F0; //�յ��� ������ ����. F0�� Ȧ���̱� ������ ó������ ����
	printf("F[1] = %d\n", F0);
	printf("F[2] = %d\n", F1);

	while (F_new <= 1000000)
	{
		F_new = F0 + F1;

		if (F_new % 2 == 1)
			sum = sum + F_new;

		F0 = F1;
		F1 = F_new;
		cnt = cnt + 1;
		printf("F[%d] = %d\n", cnt, F_new);
	}

	sum = sum - F_new; //��ó��

	printf("\nȦ���̸鼭 %d������ ������� ���ϸ� %d �Դϴ�.\n", N, sum);

	return 0;
}