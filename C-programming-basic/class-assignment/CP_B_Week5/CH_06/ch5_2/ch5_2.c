#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int score;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &score);

	if (score >= 90)
		printf("�հ�: ����A\n");
	if ((score >= 80) && (score < 90))
		printf("�հ�: ����B\n");
	if ((score >= 70) && (score < 80))
		printf("�հ�: ����C\n");
	if ((score >= 60) && (score < 70))
		printf("�հ�: ����D\n");
	if (score < 60)
		printf("���հ�: ����F\n");


	return 0;
}