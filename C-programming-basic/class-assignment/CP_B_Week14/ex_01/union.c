// 프로그램 : 14주차 실습 프로그램 #1
// 학번 : 20165079
// 이름 : 김영빈

#include<stdio.h>

union ip_address {
	unsigned long laddr;
	unsigned char saddr[5];
};

int main(void) 
{
	union ip_address addr;

	addr.saddr[0] = 1;
	addr.saddr[1] = 0;
	addr.saddr[2] = 0;
	addr.saddr[3] = 127;

	printf("%x\n", addr.laddr);

	addr.laddr = 0x41424344;

	printf("addr.saddr[0] = %c\n", addr.saddr[0]);
	printf("addr.saddr[1] = %c\n", addr.saddr[1]);
	printf("addr.saddr[2] = %c\n", addr.saddr[2]);
	printf("addr.saddr[3] = %c\n", addr.saddr[3]);

	addr.saddr[4] = '\0';
	printf("%s\n", addr.saddr);

	return 0;
}