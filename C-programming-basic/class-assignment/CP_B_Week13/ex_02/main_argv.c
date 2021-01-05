// 프로그램 : 13주차 실습 프로그램 #2
// 학번 : 20165079
// 이름 : 김영빈

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(int argc, char* argv[]) 
{
	int a, b, sum, i;

	printf("실행 명령어 줄 인수(command line arguments) >>\n");
	printf("argc = %d\n", argc);

	for (i = 0; i < argc; i++) {
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	if (i == 3) {
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		sum = a + b;

		printf("\n%d + %d = %d\n\n", a, b, sum);
	}
	return 0;

}