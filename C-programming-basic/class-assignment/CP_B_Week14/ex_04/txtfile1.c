// 프로그램 : 14주차 실습 프로그램 #4
// 학번 : 20165079
// 이름 : 김영빈

#include<stdio.h>

int main(void) 
{
	FILE* fp = NULL;
	FILE* fp2 = NULL;
	int c;

	fopen_s(&fp, "samplefile.txt", "w");

	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");

	fputc('1', fp);
	fputc('2', fp);
	fputc('3', fp);
	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);
	
	fclose(fp);

	fopen_s(&fp2, "samplefile.txt", "r");

	if (fp2 == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");

	while ((c = fgetc(fp2)) != EOF) {
		putchar(c);
	}

	fclose(fp2);

	return 0;

}