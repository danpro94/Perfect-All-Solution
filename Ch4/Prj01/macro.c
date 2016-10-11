/*
	솔루션 / 프로젝트 / 소스파일: HomePJ4 / Prj01 / macro.c
	#define을 이용하여 만든 이름이 붙여진 매크로 상수의 이해
	V 1.0 2016.
*/

#include <stdio.h>

#define KPOP 50000000							//정수 매크로 상수
#define PI 3.14									//실수 매크로 상수
#define PRT printf("매크로 상수 예제 종료\n");	//문자열 매크로 상수

int main(void)
{
	double radius = 2.83;

	printf("한국인구 : %d명\n", KPOP);	//컴파일 전 50000000으로 대체
	printf("원 면적: %f\n", radius *radius*PI); //마찬가지로 PI가 3.14로 대체
	PRT;	//마찬가지로 PRT가 printf("매크로 상수 예제 종료\n")로 대체

	return 0;
}