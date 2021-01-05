//연습

#include <stdio.h>
#include <stdarg.h>

int sum(int, ...);
int main(void)
{
	int i, a, b, c;
	int answer;
	a = 10; b = 20; c = 30;

	answer = sum(2, a, b);
	printf("%d + %d = %d \n\n", a, b, answer);

	answer = sum(3, a, b, c);
	printf("%d + %d + %d = %d \n\n", a, b, c, answer);

	return 0;
}

int sum(int num, ...)
{
	int answer = 0, n;
	va_list argptr;
	va_start(argptr, num);
	printf("입력 매개변수의 갯수 = %d : ", num);

	for (int i = 0; i < num; i++) {
		n = va_arg(argptr, int);
		printf("%d ", n);
		answer += n;
		//answer += va_arg(argptr, int)
	}
	printf("\n");
	va_end(argptr);
	return(answer);
}