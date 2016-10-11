// celtofar.c
#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	double fahrenheit, celsius;
	printf("변환활 섭씨온도를 입력하세요. >> ");
	scanf("%lf", &celsius);

	fahrenheit = (9.0 / 5.0) * celsius + 32.0;
	printf("\n입력된 %.2f도는 화씨온도로 %.2f도 입니다.\n", celsius, fahrenheit);

	return 0;
}