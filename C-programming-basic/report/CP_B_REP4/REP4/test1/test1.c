#include <stdio.h>
#pragma warning(disable:4996)

//int main(void)
//{
//	int n = 0, sum = 0, digit = 0;
//
//	printf("4자리 정수를 입력하시오 : ");
//	scanf("%d", &n);
//
//	digit = n % 10;
//	sum = sum + digit;
//	printf("n = %4d, digit = %d, sum = %d \n", n, digit, sum);
//	n = n / 10;
//	
//	digit = n % 10;
//	sum = sum + digit;
//	printf("n = %4d, digit = %d, sum = %d \n", n, digit, sum);
//	n = n / 10;
//
//	digit = n % 10;
//	sum = sum + digit;
//	printf("n = %4d, digit = %d, sum = %d \n", n, digit, sum);
//	n = n / 10;
//
//	digit = n % 10;
//	sum = sum + digit;
//	printf("n = %4d, digit = %d, sum = %d \n", n, digit, sum);
//	n = n / 10;
//
//	printf("\n최종 결과 : n = %4d, digit = %d, sum = %d \n\n", n, digit, sum);
//
//	return 0;
//}

int main(void)
{
	int n;
	int sum = 0;
	int x;

	int digit = 0;

	printf("4자리 정수를 입력하시오 : ");
	scanf("%d", &n);

	for (x = 0; x < 4; x++) {

		digit = n % 10;
		sum = sum + digit;
		printf("n = %4d, digit = %d, sum = %d \n", n, digit, sum);
		n = n / 10;
	}

	printf("\n최종 결과 : n = %4d, digit = %d, sum = %d \n\n", n, digit, sum);

	return 0;
}