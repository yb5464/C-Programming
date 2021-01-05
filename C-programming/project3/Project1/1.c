#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

int main(void)
{
	char ch[100] = { 0 };
	char* delimiter = " ";

	printf("한 줄의 문장을 입력하세요. ->\n");
	gets_s(ch, sizeof(ch));
	printf("\n입력한 각각의 단어를 반대로 출력합니다. -> \n");

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