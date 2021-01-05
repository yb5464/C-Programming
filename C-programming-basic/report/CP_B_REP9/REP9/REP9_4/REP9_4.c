#include <stdio.h>
void print_array(char ary[], int n);

int main(void)
{
	char buffer[8] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H' };
	double* pd;
	int* pi;
	int i;

	print_array(buffer, 8);

	pd = (double*)buffer;
	*pd = 3.14;

	printf("%f\n", *pd);
	print_array(buffer, 8);

	pi = (int*)buffer;
	*pi = 0x41424344;
	*(pi + 1) = 0x45464748;

	printf("%#x %#x\n", *pi, *(pi + 1));
	print_array(buffer, 8);			//리틀 엔디안이 중요!

	return 0;
}

void print_array(char ary[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%c ", ary[i]);
	printf("\n");


}