// ���α׷� : 14���� �ǽ� ���α׷� #3
// �й� : 20165079
// �̸� : �迵��

#include<stdio.h>

int main(void) 
{
	char c;
	char s[80], t[80];

	printf("�����̽��� �и��� ���ڿ��� �Է��Ͻÿ�:");
	scanf_s("%s%c%s", s, 80, &c, 1, t, 80);

	printf("�Էµ� ù��° ���ڿ� = %s\n", s);
	printf("�Էµ� ���� = %c\n", c);
	printf("�Էµ� �ι�° ���ڿ� = %s\n", t);

	printf("�����̽��� �и��� ���ڿ��� �Է��Ͻÿ�:");
	scanf_s("%s %c %s", s, 80, &c, 1, t, 80);
	
	printf("�Էµ� ù��° ���ڿ� = %s\n", s);
	printf("�Էµ� ���� = %c\n", c);
	printf("�Էµ� �ι�° ���ڿ� = %s\n", t);

	return 0;
}