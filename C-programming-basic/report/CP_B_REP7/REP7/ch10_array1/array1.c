//연습

#include <stdio.h>
#pragma warning (disable: 4996)
#define length 10

int main(void)
{
	int k, i, sum = 0;
	int data[length] = { 0 };

	for (i = 0; i < length; i++) {
		printf("%d 정수를 입력하시오 : ", i + 1);
		scanf("%d", &data[i]);
	}

	printf("입력한 정수는 : ");
	for (i = 0; i < length; i++) {
		printf("%d", data[i]);
		sum = sum + data[i];
	}

	printf("이고 평균은 %lf입니다.\n\n", (double)sum / length);

	printf("정수값을 입력하시오(1 - %d) : ", length);
	scanf("%d", &k);

	printf("\n입력한 정수중 %d번째 입력한 값은 %d 입니다.\n\n", k, data[k - 1]);

	return 0;
}