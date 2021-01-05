#include <stdio.h>

int counter;

void set_counter()
{
	printf("counter=%d\n", counter++);
}

int main(void)
{
	counter = 10;
	printf("counter=%d\n", counter);
	printf("counter=%d\n", counter++);
	set_counter();
	printf("counter=%d\n", counter);

	return 0;
}