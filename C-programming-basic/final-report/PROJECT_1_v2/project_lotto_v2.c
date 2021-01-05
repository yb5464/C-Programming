#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#pragma warning (disable : 4996)

void gen_MyLotto(int ary[], int n, FILE* f);
void gen_Lotto(int ary[], int n);
void reset_array(int ary[], int n);
void print_array(int ary[], int n, FILE* f);
int check_lotto(int mylotto[], int lotto[], int win[]);
int result(int win[], int count, int bonus, FILE* f);
int num_count(int win[]);
void current_time(FILE* f);
void sorting(int arr[], int n);


int main(void)
{
	char fname[] = "result.txt";
	FILE* fid;

	if ((fid = fopen(fname, "w")) == NULL) {
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}

	current_time(fid);

	int Lotto[7] = { 0 };
	int MyLotto[10][7] = { 0 };
	int win_number[10][6] = { 0 };
	int count;
	int BONUS;
	int game_cnt = 1;
	int goal, rank[10];
	int num;
	int random;
	int op = 1;

	srand((unsigned)time(NULL));

	printf("로또 구입 횟수를 정하시오 (1 - 10) : N = ");
	scanf_s("%d", &num);
	printf("\n");
	fprintf(fid, "로또 구입 횟수를 정하시오 (1 - 10) : N = %d\n\n", num);

	for (int i = 0; i < num; i++) {
		random = 0;

		printf("<%d> 로또 구입 : 랜덤으로 선택하려면 '1'을 입력하시오 [1 or 0] : ", i + 1);
		scanf_s("%d", &random);
		fprintf(fid, "<%d> 로또 구입 : 랜덤으로 선택하려면 '1'을 입력하시오 [1 or 0] : %d\n", i + 1, random);

		if (random != 0) {
			gen_Lotto(MyLotto[i], 6);
			printf("\n        랜덤 생성 결과 : ");
			fprintf(fid, "\n        랜덤 생성 결과 : ");
			print_array(MyLotto[i], 6, fid);
			printf("\n\n");
			fprintf(fid, "\n\n");
		}
		else {
			printf("\n");
			fprintf(fid, "\n");

			gen_MyLotto(MyLotto[i], 6, fid);

			printf("\n        번호 선택 결과 : ");
			fprintf(fid, "\n        번호 선택 결과 : ");
			print_array(MyLotto[i], 6, fid);
			printf("\n\n");
			fprintf(fid, "\n\n");

		}
	}


	printf("\n목표 등수를 정하시오 [1~5] : ");
	scanf_s("%d", &goal);

	fprintf(fid, "\n\n===========================================================\n");
	fprintf(fid, "로또 구입 횟수 = %d, 목표 등수 = %d 등", num, goal);
	fprintf(fid, "\n===========================================================\n\n");


	do {
		printf("\n[game #%d] ===================================================\n\n", game_cnt);
		fprintf(fid, "\n[game #%d] ===================================================\n\n", game_cnt);

		reset_array(Lotto, 7);
		for (int i = 0; i < num; i++) {
			reset_array(win_number[i], 6);
		}
		BONUS = 0;
		count = 0;

		gen_Lotto(Lotto, 7);

		printf("%d 주차 당첨 번호 : ", game_cnt);
		fprintf(fid, "%d 주차 당첨 번호 : ", game_cnt);
		print_array(Lotto, 6, fid);
		printf("  +  보너스 %2d\n\n", Lotto[6]);
		fprintf(fid, "  +  보너스 %2d\n\n", Lotto[6]);

		for (int i = 0; i < num; i++) {
			BONUS = check_lotto(MyLotto[i], Lotto, win_number[i]);

			count = num_count(win_number[i]);

			printf("[%d] 로또 선택 번호 : ", i + 1);
			fprintf(fid, "[%d] 로또 선택 번호 : ", i + 1);
			print_array(MyLotto[i], 6, fid);
			printf("\n");
			fprintf(fid, "\n");

			rank[i] = result(win_number[i], count, BONUS, fid);

		}

		op = 1;

		for (int i = 0; i < num; i++) {
			if (rank[i] == goal)
				op = 0;
		}

		game_cnt++;

		
	} while (op);

	printf("\n===========================================================\n");
	printf("종료, 1 번째 선택한 번호가 %d 주차 로또에 당첨 되었습니다", --game_cnt);
	printf("\n===========================================================\n");
	fprintf(fid, "\n===========================================================\n");
	fprintf(fid, "종료, %d 번째 선택한 번호가 %d 주차 로또에 당첨 되었습니다", num, --game_cnt);
	fprintf(fid, "\n===========================================================\n");

	return 0;

}

void gen_MyLotto(int ary[], int n, FILE* f)
{
	int i = 0, temp;
	int flag = 0;

	while (i < n) {

		printf("    [%d] 로또 번호 입력 : ", i + 1);
		scanf_s("%d", &temp);
		if (temp > 45 || temp < 1)
			continue;
		else
			fprintf(f, "    [%d] 로또 번호 입력 : %d\n", i + 1, temp);

		for (int j = 0; j < i; j++) {
			if (ary[j] == temp) {
				flag = 1;
				break;
			}
		}

		if (flag != 1) {
			ary[i] = temp;
			i++;
		}
		else
			flag = 0;

	}

}

void gen_Lotto(int ary[], int n)
{
	int i = 0, temp;
	int flag = 0;

	while (i < n){

		temp = rand() % 45 + 1;

		for (int j = 0; j < i; j++) {
			if (ary[j] == temp) {
				flag = 1;
				break;
			}
		}

		if (flag != 1) {
			ary[i] = temp;
			i++;
		}
		else
			flag = 0;
	}

}

void reset_array(int ary[], int n)
{
	for (int i = 0; i < n; i++) {
		ary[i] = 0;
	}
}

void print_array(int ary[], int n, FILE* f)
{

	sorting(ary, n);

	for (int i = 0; i < n; i++) {
		printf("%2d ", ary[i]);
		fprintf(f, "%2d ", ary[i]);
	}

}

int check_lotto(int mylotto[], int lotto[], int win[])
{
	int k = 0, flag = 0;

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (mylotto[i] == lotto[j]) {
				win[k] = mylotto[i];
				k++;
				break;
			}
		}

		if (mylotto[i] == lotto[6]) {
			flag = 1;
		}
	}

	if (flag != 0)
		return lotto[6];
	else
		return flag;
}

int num_count(int win[])
{
	int count = 0;

	for (int i = 0; i < 6; i++) {
		if (win[i] != 0)
			count++;
	}

	return count;
}

int result(int win[], int count, int bonus, FILE* f)
{
	if (count == 5 && bonus != 0) {
		win[count++] = bonus;
	}

	printf("    당첨번호 갯수  : %d\n", count);
	printf("    당첨된 번호    : ");
	fprintf(f, "    당첨번호 갯수  : %d\n", count);
	fprintf(f, "    당첨된 번호    : ");

	if (count != 0)
		print_array(win, count, f);
	else {
		printf("없음");
		fprintf(f, "없음");
	}

	if (count == 6 && bonus == 0) {
		printf("\n    이번주 로또 추첨 결과 1등입니다.\n\n");
		fprintf(f, "\n    이번주 로또 추첨 결과 1등입니다.\n\n");
		return 1;
	}
	else if (count == 6 && bonus != 0) {
		printf("\n    이번주 로또 추첨 결과 2등입니다.\n\n");
		fprintf(f, "\n    이번주 로또 추첨 결과 2등입니다.\n\n");
		return 2;
	}
	else if (count == 5) {
		printf("\n    이번주 로또 추첨 결과 3등입니다.\n\n");
		fprintf(f, "\n    이번주 로또 추첨 결과 3등입니다.\n\n");
		return 3;
	}
	else if (count == 4) {
		printf("\n    이번주 로또 추첨 결과 4등입니다.\n\n");
		fprintf(f, "\n    이번주 로또 추첨 결과 4등입니다.\n\n");
		return 4;
	}
	else if (count == 3) {
		printf("\n    이번주 로또 추첨 결과 5등입니다.\n\n");
		fprintf(f, "\n    이번주 로또 추첨 결과 5등입니다.\n\n");
		return 5;
	}
	else {
		printf("\n    이번주 로또 추첨 결과 꽝입니다.\n\n");
		fprintf(f, "\n    이번주 로또 추첨 결과 꽝입니다.\n\n");
		return 0;
	}
}

void current_time(FILE* fid)
{
	time_t now;
	struct tm now_tm;
	char buf[256];

	setlocale(LC_ALL, "Korean");
	time(&now);
	localtime_s(&now_tm, &now);

	strftime(buf, sizeof(buf), "%Y년 %m월 %d일 %p %I:%M:%S\n", &now_tm);
	fprintf(fid, "=========================================================== \n");
	fprintf(fid, "프로그램 시작 : %s", buf);
	fprintf(fid, "=========================================================== \n");
	puts(buf);

}



void sorting(int arr[], int n)
{
	int i, j, temp, length;
	length = n;

	for (i = 0; i < length - 1; i++) {
		for (j = 0; j < length - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

}
