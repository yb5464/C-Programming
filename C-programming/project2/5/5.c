#include <stdio.h>
#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int n = 0x324F3A24;

	char* p = &n;

	for (int i = 0; i < sizeof(n); i++) {
		printf("%X", *(p + sizeof(n) - 1 - i));
	}

	return 0;
}