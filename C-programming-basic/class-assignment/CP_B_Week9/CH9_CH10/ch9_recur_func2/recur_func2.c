#include <stdio.h>

void print(int);
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
		printf(" --> number�� 1���� ŭ -> �Լ� ȣ��\n");
		print(number - 1);
	}
	else {
		printf(" --> number�� 1���� ���� -> �Լ� ȣ�� ����\n");
	}
	printf("return [%d] : number = %d \n", call_cnt--, number);
}