#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
#define SUCCESS 1
#define FAIL 2
#define LIMIT 3

int check(int id, int password);

int main(void)
{
	int id, password, result;

	while (1) {
		printf("ID로 숫자 4개를 입력하시오: ____\b\b\b\b");
		scanf("%d", &id);

		printf("PASS(4자리 숫자): ____\b\b\b\b");
		scanf("%d", &password);

		result = check(id, password);
		if (result == SUCCESS)
			break;
	}
	printf("로그인 성공\n");

	return 0;
}

int check(int id, int password) {
	static int super_id = 1234;
	static int super_password = 5678;
	static int try_count = 0;

	try_count++;
	if (try_count >= LIMIT) {
		printf("횟수 초과되었습니다. 프로그램을 종료합니다\n");
		exit(1); //프로그램을 종료한다.
	}

	if (id == super_id && password == super_password)
		return SUCCESS;
	else
		return FAIL;

}




