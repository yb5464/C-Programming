// ���α׷� : 14���� �ǽ� ���α׷� #2
// �й� : 20165079
// �̸� : �迵��

#include <stdio.h>

enum days {SUN, MON, TUE, WED, THU, FRI, SAT};

char* days_name[] = {
	"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturdaty"
};

int main(void) 
{
	int i;
	enum days d;

	for (i = 0; i < 7; i++)
		printf("%d��° ������ %s�Դϴ�\n", i, days_name[i]);

	d = WED;
	printf("\n%d��° ������ %s�Դϴ�\n", d, days_name[d]);

	d = 1;
	printf("\n%d��° ������ %s�Դϴ�\n", d, days_name[d]);

	d = MON + WED;
	printf("\n%d��° ������ %s�Դϴ�\n", d, days_name[d]);

	return 0;
}