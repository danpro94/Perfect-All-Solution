/*
	솔루션 / 프로젝트 / 소스파일: HomePJ Ch3 / ex3-1 / comments.c 
	C 프로그램의 기초를 다지기 위한 주석, 문장, 키워드 등 이해
	V 1.0 2016.
*/
#include <stdio.h>

//운영체제가 호출하는 함수, 매개변수(없음)
int main(void)
{
	puts("2장 첫 C 프로그램!\n");

	printf("키워드: int void return 등\n");
	printf("식별자: main puts printf 등\n");
	printf("블록: { . . . }\n");

	//인자인 문자열 내부는 //주석도 일반 문자열로 인식
	printf("한 줄 주석: // 이 줄 끝까지 한줄 주석입니다.\n");
	// /*블록 주석*/도 일반 문자열로 인식
	printf("블록 주석: /* 여러 줄에 걸친\n블록 주석입니다.*/ \n");

	return 0;
}