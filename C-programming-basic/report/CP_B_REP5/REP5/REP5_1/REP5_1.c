#include <stdio.h>

int main(void)
{
	int i, N, count = 0;
	int is_prime = 1;

	for (N = 2; N <= 1000; N++) {
		
		is_prime = 1;

		for (i = 2; i <= N / 2; i++) {
			
			if (N % i == 0) {
				is_prime = 0;
				break;
			}
		}
		
		if (is_prime != 0) {
			count = count + 1;
			printf("%d�� %d��° �Ҽ��Դϴ�\n", N, count);
		}
		else
			printf("\t\t%d�� �Ҽ��� �ƴմϴ�\n", N);
	}

	printf("\n2���� %d���� �Ҽ��� %d���Դϴ�.\n\n", N - 1, count);
	//ù��° for������ N++���Ŀ� N<=1000�� �������� �ʾƼ� for���� Ż���߱� ������
	//���⼭�� N - 1�� �Է��ؼ� 1000�� ��µǵ��� ��. 1000 ���ϸ� 1000�� �����̱� ������
	
	return 0;
}