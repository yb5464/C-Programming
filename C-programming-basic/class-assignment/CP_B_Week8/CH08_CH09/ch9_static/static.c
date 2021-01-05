#include <stdio.h>

void sub(void);

int main(void)
{
	int i;
	for (i = 0; i < 5; i++) {
		printf("<%d>--------------------\n", i);
		sub();
	}

	return 0;
}

void sub(void)
{
	int auto_count = 0;
	//int static_count = 0;
	static int static_count = 0;		//static�� ���ο� ���� ������� �ٸ���.
	//static ������ �� ó�� �ѹ��� ����ǰ� �������� ������� �ʴ´�. �ѹ� ���� �� ���ٰ� �����ϸ� �ȴ�.

	auto_count++;
	static_count++;
	printf("    auto_count=%d\n", auto_count);
	printf("    static_count=%d\n", static_count);
}