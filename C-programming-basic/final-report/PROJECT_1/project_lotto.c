#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#pragma warning (disable : 4996)

void gen_MyLotto(int ary[], int n, FILE * f);
void gen_Lotto(int ary[], int n);
void reset_array(int ary[], int n);
void print_array(int ary[], int n, FILE * f);
int check_lotto(int mylotto[], int lotto[], int win[]);
int result(int win[], int count, int bonus, FILE * f);
int num_count(int win[]);
void current_time(FILE * f);


int main(void)
{
	char fname[] = "result.txt";
	FILE* fid;

	if ((fid = fopen(fname, "w")) == NULL) {
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}

	current_time(fid);

	int Lotto[7] = { 0 };
	int MyLotto[7] = { 0 };
	int win_number[6] = { 0 };
	int count, BONUS, game_cnt = 1;
	int goal, rank;
	int num = 1;

	srand((unsigned)time(NULL));

	gen_MyLotto(MyLotto, 6, fid);

	printf("\n\n        ��ȣ ���� ��� : ");
	fprintf(fid, "\n\n        ��ȣ ���� ��� : ");
	print_array(MyLotto, 6, fid);
	printf("\n");


	printf("\n��ǥ ����� ���Ͻÿ� [1~5] : ");
	scanf_s("%d", &goal);

	fprintf(fid, "\n\n===========================================================\n");
	fprintf(fid, "�ζ� ���� Ƚ�� = %d, ��ǥ ��� = %d ��", num, goal);
	fprintf(fid, "\n===========================================================\n\n");


	do {
		printf("\n[game #%d] ===================================================\n\n", game_cnt);
		fprintf(fid, "\n[game #%d] ===================================================\n\n", game_cnt);

		reset_array(Lotto, 7);
		reset_array(win_number, 6);
		BONUS = 0;
		count = 0;
		
		gen_Lotto(Lotto, 7);

		printf("%d ���� ��÷ ��ȣ : ", game_cnt);
		fprintf(fid, "%d ���� ��÷ ��ȣ : ", game_cnt);
		print_array(Lotto, 6, fid);
		printf("  +  ���ʽ� %2d\n\n", Lotto[6]);
		fprintf(fid, "  +  ���ʽ� %2d\n\n", Lotto[6]);

		BONUS = check_lotto(MyLotto, Lotto, win_number);

		count = num_count(win_number);

		printf("[%d] �ζ� ���� ��ȣ : ", num);
		fprintf(fid, "[%d] �ζ� ���� ��ȣ : ", num);
		print_array(MyLotto, 6, fid);
		printf("\n");
		fprintf(fid, "\n");

		rank = result(win_number, count, BONUS, fid);

		game_cnt++;
		
	} while (rank != goal);

	printf("\n===========================================================\n");
	printf("����, 1 ��° ������ ��ȣ�� %d ���� �ζǿ� ��÷ �Ǿ����ϴ�", --game_cnt);
	printf("\n===========================================================\n");
	fprintf(fid, "\n===========================================================\n");
	fprintf(fid, "����, %d ��° ������ ��ȣ�� %d ���� �ζǿ� ��÷ �Ǿ����ϴ�", num, --game_cnt);
	fprintf(fid, "\n===========================================================\n");

	return 0;

}

void gen_MyLotto(int ary[], int n, FILE * f)
{
	int i = 0, temp;
	int flag = 0;

	while (i < n){

		printf("    [%d] �ζ� ��ȣ �Է� : ", i + 1);
		scanf_s("%d", &temp);
		if (temp > 45 || temp < 1)
			continue;
		else 
			fprintf(f, "    [%d] �ζ� ��ȣ �Է� : %d\n", i + 1, temp);

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

	while (i< n){
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

void print_array(int ary[], int n, FILE * f)
{
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

int result(int win[], int count, int bonus, FILE * f)
{
	if (count == 5 && bonus != 0) {
		win[count++] = bonus;
	}

	printf("    ��÷��ȣ ����  : %d\n", count);
	printf("    ��÷�� ��ȣ    : ");
	fprintf(f, "    ��÷��ȣ ����  : %d\n", count);
	fprintf(f, "    ��÷�� ��ȣ    : ");
		
	if (count != 0)
		print_array(win, count, f);
	else {
		printf("����");
		fprintf(f, "����");
	}

	if (count == 6 && bonus == 0) {
		printf("\n    �̹��� �ζ� ��÷ ��� 1���Դϴ�.\n\n");
		fprintf(f, "\n    �̹��� �ζ� ��÷ ��� 1���Դϴ�.\n\n");
		return 1;
	}
	else if (count == 6 && bonus != 0) {
		printf("\n    �̹��� �ζ� ��÷ ��� 2���Դϴ�.\n\n");
		fprintf(f, "\n    �̹��� �ζ� ��÷ ��� 2���Դϴ�.\n\n");
		return 2;
	}
	else if (count == 5) {
		printf("\n    �̹��� �ζ� ��÷ ��� 3���Դϴ�.\n\n");
		fprintf(f, "\n    �̹��� �ζ� ��÷ ��� 3���Դϴ�.\n\n");
		return 3;
	}
	else if (count == 4) {
		printf("\n    �̹��� �ζ� ��÷ ��� 4���Դϴ�.\n\n");
		fprintf(f, "\n    �̹��� �ζ� ��÷ ��� 4���Դϴ�.\n\n");
		return 4;
	}
	else if (count == 3) {
		printf("\n    �̹��� �ζ� ��÷ ��� 5���Դϴ�.\n\n");
		fprintf(f, "\n    �̹��� �ζ� ��÷ ��� 5���Դϴ�.\n\n");
		return 5;
	}
	else {
		printf("\n    �̹��� �ζ� ��÷ ��� ���Դϴ�.\n\n");
		fprintf(f, "\n    �̹��� �ζ� ��÷ ��� ���Դϴ�.\n\n");
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

	strftime(buf, sizeof(buf), "%Y�� %m�� %d�� %p %I:%M:%S\n", &now_tm);
	fprintf(fid, "=========================================================== \n");
	fprintf(fid, "���α׷� ���� : %s", buf);
	fprintf(fid, "=========================================================== \n");
	puts(buf);

}
