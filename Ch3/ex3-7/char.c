/*
	솔루션 / 프로젝트 / 소스파일: HomePJ CH3 / ex3-7 / char.c
	문자형 변수의 선언과 이용
	V 1.0 2016.
*/


#include <stdio.h>

int main(void)
{
	char c1 = 'a';		//소문자 a
	char c2 = 65;		//대문자 A가 코드값 65
	char c3 = '\132';	//대문자 Z의 8진수 코드값 132
	char c4 = '\x5A';	//대문자 Z의 16진수 코드값 5A

	printf("저장값(문자): %c %c %c %c\n", c1, c2, c3, c4);
	printf("저장값(정수): %d %d %d %d\n", c1, c2, c3, c4);

	return 0;
}