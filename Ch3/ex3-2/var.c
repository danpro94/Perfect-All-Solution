/*
	솔루션 / 프로젝트 / 소스파일: HomePJ CH3 / ex3-2 / var.c
	C 프로그램의 기초를 다지기 변수선언 이해
	V 1.0 2016.
*/

#include <stdio.h>

int main(void)
{
	int snum;	//변수 선언
	int credits;

	snum = 20130672;
	credits = 22;

	printf("학번: %d\n", snum);
	printf("신청학점 %d\n", credits);

	return 0;
}