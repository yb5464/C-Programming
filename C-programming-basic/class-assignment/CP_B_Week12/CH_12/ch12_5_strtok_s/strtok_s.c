#include <stdio.h>
#include <string.h>

char s[] = "Man is immortal, because he has a soul";
char seps[] = " ,\t\n";
char* token;
char* context;

int main(void)
{
	//���ڿ��� �����ϰ� ���� ��ū�� ��´�.
	token = strtok_s(s, seps, &context);
	while (token != NULL) {

		//���ڿ� s�� ��ū�� �ִ� ���� �ݺ��Ѵ�.
		printf("��ū: %s\n", token);
		//���� ��ū�� ��´�.
		token = strtok_s(NULL, seps, &context);
	}

	return 0;
}