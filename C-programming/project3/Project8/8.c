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

	// ���� C Database�� ����ִ� ������ ���� Ȯ��
	int op = 0;
	int car_type_op = 0;
	int cnt = 0;

	printf("������ �Է�\n");

	while (cnt < 2) {
		printf("\n");
		printf("���� �ڵ���(1), ȸ�� �ڵ���(2) --> ");
		scanf("%d", &c[cnt].info_type);
		getchar();
		if (c[cnt].info_type != 1 && c[cnt].info_type != 2) {
			printf("�߸� �Է��߽��ϴ�.");
			continue;
		}

		printf("���� ��� (yyyy mm): ");
		gets_s(c[cnt].car_info.year, sizeof(c[cnt].car_info.year));

		printf("���� ����: ");
		gets_s(c[cnt].car_info.model, sizeof(c[cnt].car_info.model));

		if (c[cnt].info_type == 1) {
			printf("���� ����: ");
			gets_s(c[cnt].car_info.human.name, sizeof(c[cnt].car_info.human.name));
			printf("���� ����ó (010-1234-1234): ");
			gets_s(c[cnt].car_info.human.telephone, sizeof(c[cnt].car_info.human.telephone));
			printf("���� �ּ�: ");
			gets_s(c[cnt].car_info.human.address, sizeof(c[cnt].car_info.human.address));
			cnt++;
		}
		else {
			printf("ȸ���: ");
			gets_s(c[cnt].car_info.company, sizeof(c[cnt].car_info.company));
			cnt++;
		}
	}

	printf("\n==============================================================\n");
	printf("\n������ ��ȸ\n\n");
	printf("%10s %10s \t%10s\n", "�� ��", "�� ��", "�� ��");
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