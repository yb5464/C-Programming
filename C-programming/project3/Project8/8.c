#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define DATABASE_SIZE 2
#pragma warning(disable: 4996)

typedef struct {
	char name[30];
	char telephone[30];
	char address[30];
} person;

typedef struct {
	char year[20];
	char model[20];
	union information {
		person human;
		char company[30];
	};
} car;

typedef struct {
	int info_type;
	car car_info;
} database;

int main(void)
{
	database c[DATABASE_SIZE] = {0};

	// 현재 C Database에 들어있는 데이터 개수 확인
	int op = 0;
	int car_type_op = 0;
	int cnt = 0;

	printf("데이터 입력\n");

	while (cnt < 2) {
		printf("\n");
		printf("개인 자동차(1), 회사 자동차(2) --> ");
		scanf("%d", &c[cnt].info_type);
		getchar();
		if (c[cnt].info_type != 1 && c[cnt].info_type != 2) {
			printf("잘못 입력했습니다.");
			continue;
		}

		printf("차의 년식 (yyyy mm): ");
		gets_s(c[cnt].car_info.year, sizeof(c[cnt].car_info.year));

		printf("차의 종류: ");
		gets_s(c[cnt].car_info.model, sizeof(c[cnt].car_info.model));

		if (c[cnt].info_type == 1) {
			printf("차주 성함: ");
			gets_s(c[cnt].car_info.human.name, sizeof(c[cnt].car_info.human.name));
			printf("차주 연락처 (010-1234-1234): ");
			gets_s(c[cnt].car_info.human.telephone, sizeof(c[cnt].car_info.human.telephone));
			printf("차주 주소: ");
			gets_s(c[cnt].car_info.human.address, sizeof(c[cnt].car_info.human.address));
			cnt++;
		}
		else {
			printf("회사명: ");
			gets_s(c[cnt].car_info.company, sizeof(c[cnt].car_info.company));
			cnt++;
		}
	}

	printf("\n==============================================================\n");
	printf("\n데이터 조회\n\n");
	printf("%10s %10s \t%10s\n", "년 식", "종 류", "주 인");
	for (int i = 0; i < cnt; i++)
	{
		if (c[i].info_type == 1)
			printf("%10s %10s  %s %s %s\n", c[i].car_info.year, c[i].car_info.model,
				c[i].car_info.human.name, c[i].car_info.human.telephone,
				c[i].car_info.human.address);
		else
			printf("%10s %10s  %s\n", c[i].car_info.year, c[i].car_info.model, c[i].car_info.company);
	}
	printf("\n==============================================================\n");

	return 0;
}