// file: scanf.c

#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int year = 0;
	printf("당신의 입학년도는?");
	scanf("%d", &year); //scanf("당신의 입학년도는? %d, &year); 문제발생
	printf("입학년도: %d\n\n", year);

	int month, day;
	printf("당신의 생년월일은?");
	scanf("%d - %d - %d", &year, &month, &day);
	printf("생년월일 %d-%d-%d\n", year, month, day);

	return 0;
}