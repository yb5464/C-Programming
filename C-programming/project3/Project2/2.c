#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

int main(void)
{
	char ch[100] = { 0 };
	int i = 0;

	printf("���� ������ �Է��ϼ���. ->\n");
	gets_s(ch, sizeof(ch));

	for (int i = 0; i < strlen(ch); i++) {
		if (ch[i] >= 'A' && ch[i] <= 'Z')
			ch[i] = tolower(ch[i]);
		else if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] = toupper(ch[i]);
	}

	printf("\n������ �Է��� ���ڿ����� �빮�ڿ� �ҹ��ڸ� �ݴ�� ��ȯ�ϸ� -> \n");
	puts(ch);

	return 0;
}