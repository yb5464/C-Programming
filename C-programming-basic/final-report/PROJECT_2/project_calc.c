#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#pragma warning (disable: 4996)

void print_array(double num[], char op[], int n);

int main(void)
{
	char s[100] = "";
	char s2[100] = "";
	char seps[] = "+-*/ ";
	char op[100] = { 0 };
	double num[100] = { 0 };
	char* token = NULL;
	char* context = NULL;
	int n = 0, i = 0, cnt = 0, flag = 0;
	double sum = 0, temp = 0;

	printf("수식을 입력하시오 : ");
	gets_s(s, 100); // 1 + 2 + 3 + 4 - 1 - 2

	printf("\n############################# <숫자와 연산자 분리 시작>\n\n");

	printf("연산자 : ");

	for (i = 0; i < strlen(s); i++) {
		if ((isdigit(s[i]) == 0) && (isspace(s[i]) == 0)) {
			op[++cnt] = s[i];
			printf("%c ", op[cnt]);
		}
	}

	printf("\n\n");
	strcpy(s2, s);
	token = strtok_s(s, seps, &context);
	num[0] = atoi(token);

	printf(" token    context\n");
	printf("%8u --> %8u  토큰: %3s \tnum[%d] = %3s \top[%d] = %c\n", token, context, token, n, token, n, op[n]);

	while (1) {
		token = strtok_s(NULL, seps, &context);

		if (token == NULL) {
			printf("%8u --> %8u  토큰: %3s \t", token, context, token);
			printf("문자 열의 마지막 -> 종료\n");
			break;
		}
		else {
			n++;
			num[n] = atof(token);
			printf("%8u --> %8u  토큰: %3s \tnum[%d] = %3s \top[%d] = %c\n", token, context, token, n, token, n, op[n]);
		}
	}

	printf("\n############################# <숫자와 연산자 분리 완료>\n\n");

	printf("  계산식 : %.1f", num[0]);
	print_array(num, op, n);
	printf("\n<step-1> 곱셈, 나눗셈 처리\n\n");
	
	while (1) {
		printf("  계산식 : %.1f", num[0]);
		print_array(num, op, n);

		flag = 0;

		for (i = 1; i <= n; i++) {
			if (op[i] == '*' || op[i] == '/'){
				flag = 1;

				if (op[i] == '*') {
					temp = num[i - 1] * num[i];
					num[i - 1] = temp;
				}
				else {
					temp = num[i - 1] / num[i];
					num[i - 1] = temp;
				}

				for (int j = i + 1; j <= cnt; j++) {
					num[j - 1] = num[j];
					op[j - 1] = op[j];
				}
				cnt--;
				n--;
				break;
			}
			else
				continue;
		}

		if (flag != 1)
			break;
	}

	printf("\n<step-2> 덧셈, 뺄셈 처리 : +, - 연산자 갯수 = %d\n", cnt);

	sum = num[0];
	for (i = 1; i <= n; i++)
		if (op[i] == '+')
			sum = sum + num[i];
		else
			sum = sum - num[i];

	printf("\n  계산식: %.1f ", num[0]);
	for (i = 1; i <= n; i++)
		printf("%c %.1f ", op[i], num[i]);
	printf(" = %.1f\n\n", sum);

	return 0;
}

void print_array(double num[], char op[], int n)
{
	for (int i = 1; i <= n; i++)
		printf(" %c %.1f", op[i], num[i]);
	printf("\n");
}