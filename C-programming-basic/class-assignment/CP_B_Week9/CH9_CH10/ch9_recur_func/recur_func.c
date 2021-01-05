#include <stdio.h>
void print(int);

int main(void) 
{
	print(5);
	return 0;
}

void print(int number) {
	if (number >= 1) {
		printf("%d \n", number);
		print(number - 1);
	}
	else {
		printf("Á¾·á\n");
	}

}