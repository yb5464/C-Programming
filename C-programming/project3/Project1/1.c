#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

int main(void)
{
	char ch[100] = { 0 };
	char* delimiter = " ";

	printf("�� ���� ������ �Է��ϼ���. ->\n");
	gets_s(ch, sizeof(ch));
	printf("\n�Է��� ������ �ܾ �ݴ�� ����մϴ�. -> \n");

	char* ptoken = strtok(ch, delimiter);

	while (ptoken != NULL) {
		for (int i = strlen(ptoken) - 1; i >= 0; i--)
			printf("%c", ptoken[i]);

		printf(" ");
		ptoken = strtok(NULL, delimiter);
	}
	printf("\n");

	return 0;
}