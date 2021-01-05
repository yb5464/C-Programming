#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "12-345-6789-";
	char seps[] = "-";
	char* token;
	char* context;
	int i;

	printf("문자열 배열 s의 주소는 : %d ~ %d\n\n", s, s + sizeof(s) - 1);

	printf("토큰 분리 작업 이전--------------------------------\n");
	for (i = 0; i < sizeof(s); i++)
		printf("[%d]번지 = %#x --> %c\n", &s[i], s[i], s[i]);

	token = strtok_s(s, seps, &context); //문자열에서 첫번째 토큰을 얻는다.
	printf("\ntoken 값은 : %d -> %c.......context = %d\n", token, *token, context);

	while (token != NULL) {

		printf("토큰: %s\n", token);
		token = strtok_s(NULL, seps, &context);
		if (token != NULL)
			printf("\ntoken 값은 : %d -> %c.......contxst = %d\n", token, *token, context);
		else
			printf("\n마지막 token 값은 : %d\n", token);
	}

	printf("\n토큰 분리 작업 이후-------------------------------\n");
	for (i = 0; i < sizeof(s); i++)
		printf("[%d]번지 = %#x --> %c\n", &s[i], s[i], s[i]);

	printf("\n[%d]번지 = %#x --> %s\n\n", s, s, s);

	return 0;


}