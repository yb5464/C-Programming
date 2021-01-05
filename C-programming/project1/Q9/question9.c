#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	int id;
	int year;
	int calendar[12] = { 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("학번을 입력해주세요: ");
	scanf("%d", &id);

	// 학번의 마지막 세자리를 입력받는다.
	year = id % 1000;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		calendar[1] = 29;
		printf("해당 년도는 윤년입니다.\n");
		for (int i = 0; i < 12; i++) {
			printf("%2d월의 말일은 %d일 입니다.\n", i + 1, calendar[i]);
		}
	}
	else {
		calendar[1] = 28;
		printf("해당 년도는 평년입니다.\n");
		for (int i = 0; i < 12; i++) {
			printf("%2d월의 말일은 %d일 입니다.\n", i + 1, calendar[i]);
		}
	}

	return 0;
}