// ���α׷� : 13���� �ǽ� ���α׷� #1
// �й� : 20165079
// �̸� : �迵��

#include<stdio.h>

void main(void) 
{
	char s1[] = "100 200 300";
	char s2[30];
	char s3[30];
	int value;

	sscanf_s(s1, "%d", &value);
	printf("%d\n", value);

	sprintf_s(s2, sizeof(s2), "%d", value);
	printf("%s\n", s2);

	sscanf_s(s1, "%s %d", s3, sizeof(s3), &value);
	printf("%s %d\n", s3, value);

	return 0;
}