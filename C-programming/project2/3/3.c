#include <stdio.h>
#pragma warning (disable:4996)
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int cel = -60;
	float fa = 0;

	while (cel <= 140) {
		fa = (9.0 / 5.0) * cel + 32;

		printf("C(�����µ�): %4d --> F(ȭ���µ�): %4d\n", cel, (int)fa);

		cel += 20;
	}

	return 0;
}