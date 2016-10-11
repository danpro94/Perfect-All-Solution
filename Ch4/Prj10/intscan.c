//file: intscan.c

#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int snum, credit;

	printf("당신의 학번과 신청학점은?");
	scanf("%d%d", &snum, &credit);
	printf("학번: %d 신청학점: %d\n", snum, credit);

	return 0;
}