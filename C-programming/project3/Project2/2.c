#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

int main(void)
{
	char ch[100] = { 0 };
	int i = 0;

	printf("영문 문장을 입력하세요. ->\n");
	gets_s(ch, sizeof(ch));

	for (int i = 0; i < strlen(ch); i++) {
		if (ch[i] >= 'A' && ch[i] <= 'Z')
			ch[i] = tolower(ch[i]);
		else if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] = toupper(ch[i]);
	}

	printf("\n위에서 입력한 문자열에서 대문자와 소문자를 반대로 변환하면 -> \n");
	puts(ch);

	return 0;
}