#include <string.h>
#include <stdio.h>
#include <ctype.h>

#pragma warning(disable: 4996)

int main(void)
{
	char s[100];
	char s2[100];
	char seps[] = " ";
	char* token;
	char* context = NULL;

	char tmp[10] = { 0 };
	int n, sum = 0;

	printf("���� ������ �Է��Ͻÿ�. �� +��ȣ�� ���� ���̿��� ������ �Է��Ѵ� \n");
	printf("����(��: 1 + 2 + 3) : ");
	gets_s(s, 100);
	strcpy_s(s2, sizeof(s2), s);

	printf("token          context    \n==================================\n");

	token = strtok_s(s, seps, &context);
	strcpy_s(tmp, sizeof(tmp), token);

	printf("%8u --> %8u   ��ū: %s  tmp = %s\n", token, context, token, tmp);
	n = atoi(tmp);

	while (token != NULL) {
		token = strtok_s(NULL, seps, &context);

		if (token != NULL) {
			strcpy_s(tmp, sizeof(tmp), token);

			if (isdigit(tmp[0]))
				n = atoi(tmp);
			else
				sum = sum + n;
		}
		printf("%8u --> %8u   ��ū: %s  tmp = %s\n", token, context, token, tmp);
	}

	sum = sum + n;
	printf("%s = %d\n", s2, sum);
	return 0;
}