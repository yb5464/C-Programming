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

	printf("���� ������ �Է��Ͻÿ�. �� +��ȣ�� ���� ���̿��� ������ �Է��Ѵ� \n");
	printf("����(��: 1 + 2 + 3) : ");
	gets_s(s, 100);

	printf("token          context    \n==================================\n");
	
	token = strtok_s(s, seps, &context);
	strcpy(tmp, token);

	printf("%8u --> %8u   ��ū: %s  tmp = %s\n", token, context, token, tmp);

	while (token != NULL) {
		token = strtok_s(NULL, seps, &context);
		if (token != NULL) {
			strcpy(tmp, token);
			printf("%8u --> %8u   ��ū: %s  tmp = %s\n", token, context, token, tmp);
		}
	}


	return 0;
}