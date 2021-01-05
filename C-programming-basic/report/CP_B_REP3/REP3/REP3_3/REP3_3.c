#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int year;
	printf("년도 입력 : "); scanf("%d", &year);
	printf("%d년은 ", year);

	// 2008 을 12로 나눈 나머지를 쥐띠로 시작한다.
	switch (year % 12) {
		case 0:
			printf("원숭이띠 입니다.");
			break;
		case 1:
			printf("닭띠 입니다.");
			break;
		case 2:
			printf("개띠 입니다.");
			break;
		case 3:
			printf("돼지띠 입니다.");
			break;
		case 4:
			printf("쥐띠 입니다.");
			break;
		case 5:
			printf("소띠 입니다.");
			break;
		case 6:
			printf("호랑이띠 입니다.");
			break;
		case 7:
			printf("토끼띠 입니다.");
			break;
		case 8:
			printf("용띠 입니다.");
			break;
		case 9:
			printf("뱀띠 입니다.");
			break;
		case 10:
			printf("말띠 입니다.");
			break;
		case 11:
			printf("양띠 입니다.");
			break;
	}
	printf("\n");

	return 0;
}