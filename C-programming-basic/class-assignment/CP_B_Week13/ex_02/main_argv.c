// ���α׷� : 13���� �ǽ� ���α׷� #2
// �й� : 20165079
// �̸� : �迵��

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(int argc, char* argv[]) 
{
	int a, b, sum, i;

	printf("���� ��ɾ� �� �μ�(command line arguments) >>\n");
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