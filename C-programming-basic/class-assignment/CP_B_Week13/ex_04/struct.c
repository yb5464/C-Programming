// 프로그램 : 13주차 실습 프로그램 #4
// 학번 : 20165079
// 이름 : 김영빈

#include<stdio.h>

struct student {
	int number;
	char name[10];
	double grade;
};

void main(void) 
{
	struct student s;

	printf("학번을 입력하시오: ");
	scanf_s("%d", &s.number);

	printf("이름을 입력하시오: ");
	scanf_s("%s", s.name, sizeof(s.name));

	printf("학점을 입력하시오: ");
	scanf_s("%lf", &s.grade);

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %d\n", s.grade);

	return 0;

}