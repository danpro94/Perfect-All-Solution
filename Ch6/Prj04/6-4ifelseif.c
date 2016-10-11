// file: ifelseif.c
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double gpa;

	printf("평균평점 입력: ");
	scanf("%lf", &gpa);

	if (gpa >= 4.3)
		printf("성적이 최고 우수한 학생입니다.\n");
	else if (gpa >= 3.8)
		printf("성적이 매우 우수한 학생입니다.\n");
	else if (gpa >= 3.0)
		printf("성적이 우수한 학생입니다.\n");
	else
		printf("성적이 3.0 미만인 학생입니다.\n");

	return 0;
}