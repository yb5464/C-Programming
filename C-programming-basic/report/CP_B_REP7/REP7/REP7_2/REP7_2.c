#include <stdio.h>

void print(int); //�Լ� ����
int call_cnt = 0;

int main(void) 
{
	print(5);
	return 0;
}

void print(int number)
{
	printf("call [%d] : number = %d ", ++call_cnt, number);
	if (number >= 1) {
		printf("--> number�� 1���� ŭ -> �Լ� ȣ��\n");
		//printf("%d \n", number);
		print(number - 1); // �Լ��� ��������� �ٽ� ȣ���Ѵ�.
	}
	else
		printf("--> number�� 1���� ���� -> �Լ� ȣ�� ����, if�� ����\n");

	printf("return [%d] : number = %d, �Լ� ���� \n", call_cnt--, number);
}