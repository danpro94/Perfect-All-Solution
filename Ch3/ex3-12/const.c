/*
	솔루션 / 프로젝트 / 소스파일: HomePJ CH3 / ex3-12 / const.c
	정수형 실수형 리터럴상수의 다양한 표현
	V 1.0 2016.
*/

#include <stdio.h>

int main(void)
{
	//키워드 const로 상수 만들기
	const double RATE = 0.03;	//연이자율 3%
	int deposit = 800000;

	//RATE = 0.032;	//수정이 불가능
	printf("이자율: %f\n", RATE);
	printf("계좌 잔고: %d\n", deposit);
	printf("이자액: %f\n", deposit * RATE);

	//문자열을 변수에 저장
	char* str = "좋은 C언어 입문서"; //char * str, char * str 모두 가능
	char* const title = "Perfect C"; //title에 다른 문자열 상수 저장이 불가

	str = "최근 가장 좋은 C 언어 입문서";
	//title = "C 언어 스케치"; //수정 불가능

	printf("\n%s: %s\n", str, title); //문자열 변수 출력

	return 0;
}