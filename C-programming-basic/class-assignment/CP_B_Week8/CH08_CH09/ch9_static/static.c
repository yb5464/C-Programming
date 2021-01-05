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
	static int static_count = 0;		//static의 여부에 따라서 결과값이 다르다.
	//static 변수는 맨 처음 한번만 실행되고 다음에는 실행되지 않는다. 한번 실행 후 없다고 생각하면 된다.

	auto_count++;
	static_count++;
	printf("    auto_count=%d\n", auto_count);
	printf("    static_count=%d\n", static_count);
}