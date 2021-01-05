#include <stdio.h>

void print(int); //함수 원형
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
		printf("--> number가 1보다 큼 -> 함수 호출\n");
		//printf("%d \n", number);
		print(number - 1); // 함수를 재귀적으로 다시 호출한다.
	}
	else
		printf("--> number가 1보다 작음 -> 함수 호출 안함, if문 종료\n");

	printf("return [%d] : number = %d, 함수 종료 \n", call_cnt--, number);
}