#include <string.h>
#include <stdio.h>
#include <ctype.h>

#pragma warning(disable: 4996)

int main(void)
{
	char s[100];
	char seps[] = " ";
	char* token;
	char* context = NULL;

	char tmp[10] = { 0 };

	printf("덧셈 수식을 입력하시오. 단 +기호와 숫자 사이에는 공백을 입력한다 \n");
	printf("수식(예: 1 + 2 + 3) : ");
	gets_s(s, 100);

	printf("token          context    \n==================================\n");
	
	token = strtok_s(s, seps, &context);
	strcpy(tmp, token);

	printf("%8u --> %8u   토큰: %s  tmp = %s\n", token, context, token, tmp);

	while (token != NULL) {
		token = strtok_s(NULL, seps, &context);
		if (token != NULL) {
			strcpy(tmp, token);
			printf("%8u --> %8u   토큰: %s  tmp = %s\n", token, context, token, tmp);
		}
	}


	return 0;
}