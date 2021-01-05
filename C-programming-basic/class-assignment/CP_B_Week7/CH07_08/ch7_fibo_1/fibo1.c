#include <stdio.h>

int main(void)
{
	int F0, F1, Fn = 0, cnt = 2;

	F0 = 1;
	F1 = 2;
	while (Fn < 1000000)
	{
		Fn = F0 + F1;
		F0 = F1;
		F1 = Fn;
		cnt++;
		printf("%d\n", Fn);
	}

	return 0;
}