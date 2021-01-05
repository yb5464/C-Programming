#include <stdio.h>

int main(void)
{
	char str1[6] = "Seoul";
	char str2[3] = { 'i', 's', '\0' };
	char str3[] = "the capital city of Korea.";
	char str4[] = " C Bible";   //실습을 위해 space 추가했음
	char str5[7] = "C Bible";
	int i = 0;

	printf("%s %s %s\n", str1, str2, str3);
	printf("%d %d %d\n", sizeof(str1), sizeof(str2), sizeof(str3));
	printf("%d \n", sizeof(str4));
	printf("%s \n", str5);

	while (str3[i] != 0)
		i++;

	printf("문자열 str3 : \"%s\"의 길이는 %d입니다.\n", str3, i);

	return 0;

}