// ���α׷� : 14���� �ǽ� ���α׷� #4
// �й� : 20165079
// �̸� : �迵��

#include<stdio.h>

int main(void) 
{
	FILE* fp = NULL;
	FILE* fp2 = NULL;
	int c;

	fopen_s(&fp, "samplefile.txt", "w");

	if (fp == NULL)
		printf("���� ���� ����\n");
	else
		printf("���� ���� ����\n");

	fputc('1', fp);
	fputc('2', fp);
	fputc('3', fp);
	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);
	
	fclose(fp);

	fopen_s(&fp2, "samplefile.txt", "r");

	if (fp2 == NULL)
		printf("���� ���� ����\n");
	else
		printf("���� ���� ����\n");

	while ((c = fgetc(fp2)) != EOF) {
		putchar(c);
	}

	fclose(fp2);

	return 0;

}