//while���� �̿��� ������ ��� ���ϱ� ���α׷�
#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int grade, n;
	float sum, average;

	//�ʿ��� �������� �ʱ�ȭ�Ѵ�.
	n = 0;
	sum = 0;
	grade = 0;

	printf("���� �� ���� �Է�\n");
	
	//������ �Է¹޾Ƽ� �հ踦 ���ϰ� �л� ���� ����.
	while (grade >= 0)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &grade);

		sum += grade;
		n++;
	}

	sum = sum - grade;		//������ �����͸� ����
	n--;					//������ �����͸� ����
	
	average = sum / n;
	printf("������ ����� %f�Դϴ�.\n", average);

	return 0;
}