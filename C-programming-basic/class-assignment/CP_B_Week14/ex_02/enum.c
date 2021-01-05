// 프로그램 : 14주차 실습 프로그램 #2
// 학번 : 20165079
// 이름 : 김영빈

#include <stdio.h>

enum days {SUN, MON, TUE, WED, THU, FRI, SAT};

char* days_name[] = {
	"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturdaty"
};

int main(void) 
{
	int i;
	enum days d;

	for (i = 0; i < 7; i++)
		printf("%d번째 요일은 %s입니다\n", i, days_name[i]);

	d = WED;
	printf("\n%d번째 요일은 %s입니다\n", d, days_name[d]);

	d = 1;
	printf("\n%d번째 요일은 %s입니다\n", d, days_name[d]);

	d = MON + WED;
	printf("\n%d번째 요일은 %s입니다\n", d, days_name[d]);

	return 0;
}