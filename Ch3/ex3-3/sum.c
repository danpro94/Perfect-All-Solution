/*
	솔루션 / 프로젝트 / 소스파일: HomePJ CH3 / ex3-3 / sum.c
	변수 초기화 이해
	V 1.0 2016.
*/

#include <stdio.h>

int main(void)
{
	int math = 99;	//선언과 동시에 변수 초기화
	int korean = 90;

	int science;
	science = 94;	//선언된 변수에 초기화

	//더하기 기호인 +를 사용하여 총합을 변수 total에 선언하면서 저장
	int total = math + korean + science;

	printf("수학: %d\n", math);
	printf("국어: %d\n", korean);
	printf("과학: %d\n", science);
	printf("총점: %d\n", total);

	return 0;
}