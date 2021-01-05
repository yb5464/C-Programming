#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "12-345-6789-";
	char seps[] = "-";
	char* token;
	char* context;
	int i;

	printf("���ڿ� �迭 s�� �ּҴ� : %d ~ %d\n\n", s, s + sizeof(s) - 1);

	printf("��ū �и� �۾� ����--------------------------------\n");
	for (i = 0; i < sizeof(s); i++)
		printf("[%d]���� = %#x --> %c\n", &s[i], s[i], s[i]);

	token = strtok_s(s, seps, &context); //���ڿ����� ù��° ��ū�� ��´�.
	printf("\ntoken ���� : %d -> %c.......context = %d\n", token, *token, context);

	while (token != NULL) {

		printf("��ū: %s\n", token);
		token = strtok_s(NULL, seps, &context);
		if (token != NULL)
			printf("\ntoken ���� : %d -> %c.......contxst = %d\n", token, *token, context);
		else
			printf("\n������ token ���� : %d\n", token);
	}

	printf("\n��ū �и� �۾� ����-------------------------------\n");
	for (i = 0; i < sizeof(s); i++)
		printf("[%d]���� = %#x --> %c\n", &s[i], s[i], s[i]);

	printf("\n[%d]���� = %#x --> %s\n\n", s, s, s);

	return 0;


}