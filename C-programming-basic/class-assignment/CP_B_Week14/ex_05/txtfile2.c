// 프로그램 : 14주차 실습 프로그램 #5
// 학번 : 20165079
// 이름 : 김영빈

#include<stdio.h>

int main(void)
{
	int i = 23;
	float f = 1.2345;
	FILE* fp;

	fopen_s(&fp, "sample.txt", "wt");

	if (fp != NULL)
		fprintf(fp, "%5d %10.5f", i, f);

	i = 0;
	f = 0;
	fclose(fp);

	fopen_s(&fp, "sample.txt", "rt");

	if (fp != NULL)
		fscanf_s(fp, "%d %f", &i, &f);

	fprintf(stdout, "%d %f\n", i, f);

	fclose(fp);

	return 0;

}