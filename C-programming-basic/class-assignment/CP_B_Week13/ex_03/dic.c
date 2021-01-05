// 프로그램 : 13주차 실습 프로그램 #3
// 학번 : 20165079
// 이름 : 김영빈

#include<stdio.h>

void main(void)
{
	int i, index;
	char dic[5][2][30] = {
		{"book", "책"},
		{"boy", "소년"},
		{"computer", "컴퓨터"},
		{"language", "언어"},
		{"rain", "비"},
	};

	char word[30];

	printf("단어를 입력하시오: ");
	scanf_s("%s", word, sizeof(word));

	index = 0;
	for (i = 0; i < 5; i++) {

		if (strcmp(dic[index][0], word) == 0) {
			printf("%s: %s\n", word, dic[index][1]);
			return 0;
		}
		index++;
	}

	printf("사전에서 발견되지 않았습니다.\n");

	return 0;
}
	